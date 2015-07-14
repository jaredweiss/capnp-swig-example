
"""TODO"""

import capnp

from example.bindings import Middle
from example.proto_capnp import OuterProto

class Hybrid(object):
  """Python 'Outer' clone that delegates 'Inner' work to bindings."""

  def __init__(self, fieldA=0.0, f1=None, f2=None):
    self.fieldA = fieldA
    if f1 is not None:
      self.middle = Middle(f1, f2)
    else:
      self.middle = Middle()

  def writeToFile(self, f):
    proto = OuterProto.new_message()
    self.write(proto)
    proto.write(f)

  def write(self, proto):
    proto.fieldA = self.fieldA
    middle = proto.middle
    # This is using the C++ Middle implementation to write to the MiddleProto inside
    # proto.
    self.middle.write(middle)

  def readFromFile(self, f):
    proto = OuterProto.read(f)
    self.read(proto)

  def read(self, proto):
    self.fieldA = proto.fieldA
    self.middle.read(proto.middle)
