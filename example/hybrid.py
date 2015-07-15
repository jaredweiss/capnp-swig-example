
"""TODO"""

import capnp

from example.inner import Inner
from example.bindings import Middle#, Inner
from example.proto_capnp import OuterProto

class Hybrid(object):
  """Python 'Outer' clone that delegates 'Middle'(c++) work to bindings."""

  def __init__(self, fieldA=0.0,
               mid1=None, mid2=None,
               in1=None, in2=None):
    self.fieldA = fieldA
    if mid1 is not None:
      if in1 is not None:
        inner = Inner(in1, in2)
        self.middle = Middle(mid1, mid2, inner)
      else:
        self.middle = Middle(mid1, mid2)
    else:
      self.middle = Middle()

  def writeToFile(self, f):
    proto = OuterProto.new_message()
    self.write(proto)
    proto.write(f)

  def write(self, proto):
    proto.out1 = self.fieldA
    middle = proto.middle
    # This is using the C++ Middle implementation to write to the MiddleProto inside
    # proto.
    self.middle.write(middle, proto)

  def readFromFile(self, f):
    proto = OuterProto.read(f)
    self.read(proto)

  def read(self, proto):
    self.fieldA = proto.out1
    self.middle.read(proto.middle, proto)
