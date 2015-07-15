@0xf1269555a5eb3503;

struct OuterProto {
  out1 @0 :Float32;
  middle @1 :MiddleProto;
}

struct MiddleProto {
  mid1 @0 :UInt16;
  mid2 @1 :Text;
  inner @2 :InnerProto;
}

struct InnerProto {
  in1 @0 :Bool;
  in2 @1 :UInt16;
}