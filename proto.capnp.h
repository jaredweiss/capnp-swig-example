// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: proto.capnp

#ifndef CAPNP_INCLUDED_f1269555a5eb3503_
#define CAPNP_INCLUDED_f1269555a5eb3503_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 5002
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(a4647a571f5e2b07);
CAPNP_DECLARE_SCHEMA(ee9e268319430bfe);
CAPNP_DECLARE_SCHEMA(ea420346ed5080d1);

}  // namespace schemas
}  // namespace capnp


struct OuterProto {
  OuterProto() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(a4647a571f5e2b07, 1, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

struct MiddleProto {
  MiddleProto() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(ee9e268319430bfe, 1, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

struct InnerProto {
  InnerProto() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(ea420346ed5080d1, 1, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class OuterProto::Reader {
public:
  typedef OuterProto Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

  inline float getOut1() const;

  inline bool hasMiddle() const;
  inline  ::MiddleProto::Reader getMiddle() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class OuterProto::Builder {
public:
  typedef OuterProto Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline float getOut1();
  inline void setOut1(float value);

  inline bool hasMiddle();
  inline  ::MiddleProto::Builder getMiddle();
  inline void setMiddle( ::MiddleProto::Reader value);
  inline  ::MiddleProto::Builder initMiddle();
  inline void adoptMiddle(::capnp::Orphan< ::MiddleProto>&& value);
  inline ::capnp::Orphan< ::MiddleProto> disownMiddle();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class OuterProto::Pipeline {
public:
  typedef OuterProto Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::MiddleProto::Pipeline getMiddle();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class MiddleProto::Reader {
public:
  typedef MiddleProto Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

  inline  ::uint16_t getMid1() const;

  inline bool hasMid2() const;
  inline  ::capnp::Text::Reader getMid2() const;

  inline bool hasInner() const;
  inline  ::InnerProto::Reader getInner() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class MiddleProto::Builder {
public:
  typedef MiddleProto Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::uint16_t getMid1();
  inline void setMid1( ::uint16_t value);

  inline bool hasMid2();
  inline  ::capnp::Text::Builder getMid2();
  inline void setMid2( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initMid2(unsigned int size);
  inline void adoptMid2(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownMid2();

  inline bool hasInner();
  inline  ::InnerProto::Builder getInner();
  inline void setInner( ::InnerProto::Reader value);
  inline  ::InnerProto::Builder initInner();
  inline void adoptInner(::capnp::Orphan< ::InnerProto>&& value);
  inline ::capnp::Orphan< ::InnerProto> disownInner();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class MiddleProto::Pipeline {
public:
  typedef MiddleProto Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::InnerProto::Pipeline getInner();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class InnerProto::Reader {
public:
  typedef InnerProto Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

  inline bool getIn1() const;

  inline  ::uint16_t getIn2() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class InnerProto::Builder {
public:
  typedef InnerProto Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool getIn1();
  inline void setIn1(bool value);

  inline  ::uint16_t getIn2();
  inline void setIn2( ::uint16_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class InnerProto::Pipeline {
public:
  typedef InnerProto Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline float OuterProto::Reader::getOut1() const {
  return _reader.getDataField<float>(
      0 * ::capnp::ELEMENTS);
}

inline float OuterProto::Builder::getOut1() {
  return _builder.getDataField<float>(
      0 * ::capnp::ELEMENTS);
}
inline void OuterProto::Builder::setOut1(float value) {
  _builder.setDataField<float>(
      0 * ::capnp::ELEMENTS, value);
}

inline bool OuterProto::Reader::hasMiddle() const {
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool OuterProto::Builder::hasMiddle() {
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::MiddleProto::Reader OuterProto::Reader::getMiddle() const {
  return ::capnp::_::PointerHelpers< ::MiddleProto>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::MiddleProto::Builder OuterProto::Builder::getMiddle() {
  return ::capnp::_::PointerHelpers< ::MiddleProto>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::MiddleProto::Pipeline OuterProto::Pipeline::getMiddle() {
  return  ::MiddleProto::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void OuterProto::Builder::setMiddle( ::MiddleProto::Reader value) {
  ::capnp::_::PointerHelpers< ::MiddleProto>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::MiddleProto::Builder OuterProto::Builder::initMiddle() {
  return ::capnp::_::PointerHelpers< ::MiddleProto>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void OuterProto::Builder::adoptMiddle(
    ::capnp::Orphan< ::MiddleProto>&& value) {
  ::capnp::_::PointerHelpers< ::MiddleProto>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::MiddleProto> OuterProto::Builder::disownMiddle() {
  return ::capnp::_::PointerHelpers< ::MiddleProto>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline  ::uint16_t MiddleProto::Reader::getMid1() const {
  return _reader.getDataField< ::uint16_t>(
      0 * ::capnp::ELEMENTS);
}

inline  ::uint16_t MiddleProto::Builder::getMid1() {
  return _builder.getDataField< ::uint16_t>(
      0 * ::capnp::ELEMENTS);
}
inline void MiddleProto::Builder::setMid1( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      0 * ::capnp::ELEMENTS, value);
}

inline bool MiddleProto::Reader::hasMid2() const {
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool MiddleProto::Builder::hasMid2() {
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader MiddleProto::Reader::getMid2() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder MiddleProto::Builder::getMid2() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void MiddleProto::Builder::setMid2( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder MiddleProto::Builder::initMid2(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS), size);
}
inline void MiddleProto::Builder::adoptMid2(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> MiddleProto::Builder::disownMid2() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline bool MiddleProto::Reader::hasInner() const {
  return !_reader.getPointerField(1 * ::capnp::POINTERS).isNull();
}
inline bool MiddleProto::Builder::hasInner() {
  return !_builder.getPointerField(1 * ::capnp::POINTERS).isNull();
}
inline  ::InnerProto::Reader MiddleProto::Reader::getInner() const {
  return ::capnp::_::PointerHelpers< ::InnerProto>::get(
      _reader.getPointerField(1 * ::capnp::POINTERS));
}
inline  ::InnerProto::Builder MiddleProto::Builder::getInner() {
  return ::capnp::_::PointerHelpers< ::InnerProto>::get(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::InnerProto::Pipeline MiddleProto::Pipeline::getInner() {
  return  ::InnerProto::Pipeline(_typeless.getPointerField(1));
}
#endif  // !CAPNP_LITE
inline void MiddleProto::Builder::setInner( ::InnerProto::Reader value) {
  ::capnp::_::PointerHelpers< ::InnerProto>::set(
      _builder.getPointerField(1 * ::capnp::POINTERS), value);
}
inline  ::InnerProto::Builder MiddleProto::Builder::initInner() {
  return ::capnp::_::PointerHelpers< ::InnerProto>::init(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}
inline void MiddleProto::Builder::adoptInner(
    ::capnp::Orphan< ::InnerProto>&& value) {
  ::capnp::_::PointerHelpers< ::InnerProto>::adopt(
      _builder.getPointerField(1 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::InnerProto> MiddleProto::Builder::disownInner() {
  return ::capnp::_::PointerHelpers< ::InnerProto>::disown(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}

inline bool InnerProto::Reader::getIn1() const {
  return _reader.getDataField<bool>(
      0 * ::capnp::ELEMENTS);
}

inline bool InnerProto::Builder::getIn1() {
  return _builder.getDataField<bool>(
      0 * ::capnp::ELEMENTS);
}
inline void InnerProto::Builder::setIn1(bool value) {
  _builder.setDataField<bool>(
      0 * ::capnp::ELEMENTS, value);
}

inline  ::uint16_t InnerProto::Reader::getIn2() const {
  return _reader.getDataField< ::uint16_t>(
      1 * ::capnp::ELEMENTS);
}

inline  ::uint16_t InnerProto::Builder::getIn2() {
  return _builder.getDataField< ::uint16_t>(
      1 * ::capnp::ELEMENTS);
}
inline void InnerProto::Builder::setIn2( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      1 * ::capnp::ELEMENTS, value);
}


#endif  // CAPNP_INCLUDED_f1269555a5eb3503_