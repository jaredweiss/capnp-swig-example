
%module(package="example") bindings
%{

#include <Python.h>

#include "swig_capnp.h"

#include "proto.capnp.h"

#include "middle.h"
#include "outer.h"

%}

%include "middle.h"
%include "outer.h"

%extend example::Middle
{

  inline void write(PyObject* pyBuilder) const
  {
    MiddleProto::Builder middleProto = getBuilder<MiddleProto>(pyBuilder);
    self->write(middleProto);
  }

  inline void read(PyObject* pyReader) {
    MiddleProto::Reader middleProto = getReader<MiddleProto>(pyReader);
    self->read(middleProto);
  }

}
