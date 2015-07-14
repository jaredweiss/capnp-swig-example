
#ifndef EXAMPLE_MIDDLE_H
#define EXAMPLE_MIDDLE_H

#include <fstream>
#include <iostream>

#include "proto.capnp.h"
#include <capnp/message.h>
#include <capnp/serialize.h>
#include <kj/std/iostream.h>

using namespace std;

namespace example {

  class Middle {
    public:
      Middle() {
        f1_ = 0;
        f2_ = "none";
      };
      Middle(int f1, const char* f2) {
        f1_ = f1;
        f2_ = f2;
      }
      virtual ~Middle() {};

      int getF1() {
        return f1_;
      }

      void setF1(int v) {
        f1_ = v;
      }

      const char* getF2() {
        return f2_;
      }

      void setF2(const char* v) {
        f2_ = v;
      }

      void write(MiddleProto::Builder& proto) const {
        proto.setF1(f1_);
        proto.setF2(f2_);
      }

      void write(ofstream& f) const {
        capnp::MallocMessageBuilder message;
        MiddleProto::Builder middleProto = message.initRoot<MiddleProto>();
        write(middleProto);
        kj::std::StdOutputStream outputStream(f);
        capnp::writeMessage(outputStream, message);
      }

      void read(MiddleProto::Reader& proto) {
        f1_ = proto.getF1();
        f2_ = proto.getF2().cStr();
      }

      void read(ifstream& f) {
        kj::std::StdInputStream inputStream(f);
        capnp::InputStreamMessageReader message(inputStream);
        MiddleProto::Reader proto = message.getRoot<MiddleProto>();
        read(proto);
      }
    private:
      int f1_;
      const char* f2_;
  };

}

#endif // EXAMPLE_MIDDLE_H
