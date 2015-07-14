@0xf1269555a5eb3503;

struct OuterProto {
  fieldA @0 :Float32;
  middle @1 :MiddleProto;
}

struct MiddleProto {
  f1 @0 :UInt16;
  f2 @1 :Text;
}
