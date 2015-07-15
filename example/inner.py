
"""TODO"""

import capnp

from example.proto_capnp import InnerProto

class Inner(object):
  """Python 'Outer' clone that delegates 'Middle'(c++) work to bindings."""

  def __init__(in1=False, in2=0):
    self.in1 = in1
    self.in2 = in2

  def writeToFile(self, f):
    proto = InnerProto.new_message()
    self.write(proto)
    proto.write(f)

  def write(self, proto):
    proto.in1 = self.in1
    proto.in2 = self.in2

  def readFromFile(self, f):
    proto = InnerProto.read(f)
    self.read(proto)

  def read(self, proto):
    self.in1 = proto.in1
    self.in1 = proto.in1
