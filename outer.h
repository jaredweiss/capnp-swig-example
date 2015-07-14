
#ifndef EXAMPLE_OUTER_H
#define EXAMPLE_OUTER_H

#include "proto.capnp.h"
#include <capnp/message.h>
#include <capnp/serialize.h>
#include <kj/std/iostream.h>
#include <iostream>

#include "middle.h"

using namespace std;

namespace example {

  class Outer {
    public:
      Outer() {
        fieldA_ = 0.0;
      }
      Outer(float fa, int f1, const char* f2) {
        fieldA_ = fa;
        middle_.setF1(f1);
        middle_.setF2(f2);
      }
      virtual ~Outer() {};

      float getFA() {
        return fieldA_;
      }

      const Middle& getMiddle() {
        return middle_;
      }

      void write(OuterProto::Builder& proto) const {
        proto.setFieldA(fieldA_);
        auto middleProto = proto.initMiddle();
        middle_.write(middleProto);
      }

      void write(ofstream& f) const {
        capnp::MallocMessageBuilder message;
        OuterProto::Builder outerProto = message.initRoot<OuterProto>();
        write(outerProto);
        kj::std::StdOutputStream outputStream(f);
        capnp::writeMessage(outputStream, message);
      }

      void write(const char* path) const {
        ofstream f(path);
        write(f);
        f.close();
      }

      void read(OuterProto::Reader& proto) {
        fieldA_ = proto.getFieldA();
        auto middleProto = proto.getMiddle();
        middle_.read(middleProto);
      }

      void read(ifstream& f) {
        kj::std::StdInputStream inputStream(f);
        capnp::InputStreamMessageReader message(inputStream);
        OuterProto::Reader proto = message.getRoot<OuterProto>();
        read(proto);
      }

      void read(const char* path) {
        ifstream f(path);
        read(f);
        f.close();
      }

    private:
      float fieldA_;
      Middle middle_;
  };

}

#endif // EXAMPLE_OUTER_H
