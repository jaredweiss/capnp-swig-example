
#ifndef EXAMPLE_MIDDLE_H
#define EXAMPLE_MIDDLE_H

#include <fstream>
#include <iostream>

#include "proto.capnp.h"
#include "cpp_to_py.h"
#include <capnp/message.h>
#include <capnp/serialize.h>
#include <kj/std/iostream.h>

using namespace std;

namespace example {

  class Middle {
    public:
      Middle() {
        mid1_ = 0;
        mid2_ = "none";
      };
      Middle(int mid1, const char* mid2, PyObject* inner) {
        mid1_ = mid1;
        mid2_ = mid2;
        inner_ = inner;
      }
      virtual ~Middle() {};

      int getMid1() {
        return mid1_;
      }

      void setMid1(int v) {
        mid1_ = v;
      }

      const char* getMid2() {
        return mid2_;
      }

      void setMid2(const char* v) {
        mid2_ = v;
      }

      PyObject* getInner() {
        return inner_;
      }

      void setInner(PyObject* v) {
        inner_ = v;
      }

      void write(MiddleProto::Builder& proto, PyObject* parent) const {
        proto.setMid1(mid1_);
        proto.setMid2(mid2_);
        PyObject *builder = create_builder(proto, parent);
      }

      void read(MiddleProto::Reader& proto, PyObject* parent) {
        mid1_ = proto.getMid1();
        mid2_ = proto.getMid2().cStr();
        PyObject *reader = create_reader(proto, parent);
      }

    private:
      int mid1_;
      const char* mid2_;
      PyObject* inner_;
  };

}

#endif // EXAMPLE_MIDDLE_H
