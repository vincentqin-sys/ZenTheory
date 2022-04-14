// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: secdata_transfer.proto

#include "secdata_transfer.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace secdata_transfer {
class KlineRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<KlineRequest> _instance;
} _KlineRequest_default_instance_;
class KlineReplyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<KlineReply> _instance;
} _KlineReply_default_instance_;
}  // namespace secdata_transfer
static void InitDefaultsscc_info_KlineReply_secdata_5ftransfer_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::secdata_transfer::_KlineReply_default_instance_;
    new (ptr) ::secdata_transfer::KlineReply();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::secdata_transfer::KlineReply::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_KlineReply_secdata_5ftransfer_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_KlineReply_secdata_5ftransfer_2eproto}, {}};

static void InitDefaultsscc_info_KlineRequest_secdata_5ftransfer_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::secdata_transfer::_KlineRequest_default_instance_;
    new (ptr) ::secdata_transfer::KlineRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::secdata_transfer::KlineRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_KlineRequest_secdata_5ftransfer_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_KlineRequest_secdata_5ftransfer_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_secdata_5ftransfer_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_secdata_5ftransfer_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_secdata_5ftransfer_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_secdata_5ftransfer_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineRequest, ts_),
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineRequest, code_),
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineRequest, period_),
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineRequest, open_),
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineRequest, high_),
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineRequest, low_),
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineRequest, close_),
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineRequest, vol_),
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineRequest, amount_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineReply, status_),
  PROTOBUF_FIELD_OFFSET(::secdata_transfer::KlineReply, message_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::secdata_transfer::KlineRequest)},
  { 14, -1, sizeof(::secdata_transfer::KlineReply)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::secdata_transfer::_KlineRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::secdata_transfer::_KlineReply_default_instance_),
};

const char descriptor_table_protodef_secdata_5ftransfer_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026secdata_transfer.proto\022\020secdata_transf"
  "er\"\215\001\n\014KlineRequest\022\n\n\002ts\030\001 \001(\005\022\014\n\004code\030"
  "\002 \001(\t\022\016\n\006period\030\003 \001(\t\022\014\n\004open\030\004 \001(\001\022\014\n\004h"
  "igh\030\005 \001(\001\022\013\n\003low\030\006 \001(\001\022\r\n\005close\030\007 \001(\001\022\013\n"
  "\003vol\030\010 \001(\003\022\016\n\006amount\030\t \001(\001\"-\n\nKlineReply"
  "\022\016\n\006status\030\001 \001(\005\022\017\n\007message\030\002 \001(\t2d\n\rSec"
  "dataHandle\022S\n\021TransferKlineData\022\036.secdat"
  "a_transfer.KlineRequest\032\034.secdata_transf"
  "er.KlineReply\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_secdata_5ftransfer_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_secdata_5ftransfer_2eproto_sccs[2] = {
  &scc_info_KlineReply_secdata_5ftransfer_2eproto.base,
  &scc_info_KlineRequest_secdata_5ftransfer_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_secdata_5ftransfer_2eproto_once;
static bool descriptor_table_secdata_5ftransfer_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_secdata_5ftransfer_2eproto = {
  &descriptor_table_secdata_5ftransfer_2eproto_initialized, descriptor_table_protodef_secdata_5ftransfer_2eproto, "secdata_transfer.proto", 343,
  &descriptor_table_secdata_5ftransfer_2eproto_once, descriptor_table_secdata_5ftransfer_2eproto_sccs, descriptor_table_secdata_5ftransfer_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_secdata_5ftransfer_2eproto::offsets,
  file_level_metadata_secdata_5ftransfer_2eproto, 2, file_level_enum_descriptors_secdata_5ftransfer_2eproto, file_level_service_descriptors_secdata_5ftransfer_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_secdata_5ftransfer_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_secdata_5ftransfer_2eproto), true);
namespace secdata_transfer {

// ===================================================================

void KlineRequest::InitAsDefaultInstance() {
}
class KlineRequest::_Internal {
 public:
};

KlineRequest::KlineRequest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:secdata_transfer.KlineRequest)
}
KlineRequest::KlineRequest(const KlineRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_code().empty()) {
    code_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.code_);
  }
  period_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_period().empty()) {
    period_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.period_);
  }
  ::memcpy(&open_, &from.open_,
    static_cast<size_t>(reinterpret_cast<char*>(&ts_) -
    reinterpret_cast<char*>(&open_)) + sizeof(ts_));
  // @@protoc_insertion_point(copy_constructor:secdata_transfer.KlineRequest)
}

void KlineRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_KlineRequest_secdata_5ftransfer_2eproto.base);
  code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  period_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&open_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&ts_) -
      reinterpret_cast<char*>(&open_)) + sizeof(ts_));
}

KlineRequest::~KlineRequest() {
  // @@protoc_insertion_point(destructor:secdata_transfer.KlineRequest)
  SharedDtor();
}

void KlineRequest::SharedDtor() {
  code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  period_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void KlineRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const KlineRequest& KlineRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_KlineRequest_secdata_5ftransfer_2eproto.base);
  return *internal_default_instance();
}


void KlineRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:secdata_transfer.KlineRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  code_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  period_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&open_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&ts_) -
      reinterpret_cast<char*>(&open_)) + sizeof(ts_));
  _internal_metadata_.Clear();
}

const char* KlineRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 ts = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ts_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string code = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_code(), ptr, ctx, "secdata_transfer.KlineRequest.code");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string period = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_period(), ptr, ctx, "secdata_transfer.KlineRequest.period");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double open = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          open_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double high = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          high_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double low = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          low_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double close = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 57)) {
          close_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // int64 vol = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          vol_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double amount = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 73)) {
          amount_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* KlineRequest::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:secdata_transfer.KlineRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 ts = 1;
  if (this->ts() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_ts(), target);
  }

  // string code = 2;
  if (this->code().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_code().data(), static_cast<int>(this->_internal_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "secdata_transfer.KlineRequest.code");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_code(), target);
  }

  // string period = 3;
  if (this->period().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_period().data(), static_cast<int>(this->_internal_period().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "secdata_transfer.KlineRequest.period");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_period(), target);
  }

  // double open = 4;
  if (!(this->open() <= 0 && this->open() >= 0)) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_open(), target);
  }

  // double high = 5;
  if (!(this->high() <= 0 && this->high() >= 0)) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_high(), target);
  }

  // double low = 6;
  if (!(this->low() <= 0 && this->low() >= 0)) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_low(), target);
  }

  // double close = 7;
  if (!(this->close() <= 0 && this->close() >= 0)) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(7, this->_internal_close(), target);
  }

  // int64 vol = 8;
  if (this->vol() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(8, this->_internal_vol(), target);
  }

  // double amount = 9;
  if (!(this->amount() <= 0 && this->amount() >= 0)) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(9, this->_internal_amount(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:secdata_transfer.KlineRequest)
  return target;
}

size_t KlineRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:secdata_transfer.KlineRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string code = 2;
  if (this->code().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_code());
  }

  // string period = 3;
  if (this->period().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_period());
  }

  // double open = 4;
  if (!(this->open() <= 0 && this->open() >= 0)) {
    total_size += 1 + 8;
  }

  // double high = 5;
  if (!(this->high() <= 0 && this->high() >= 0)) {
    total_size += 1 + 8;
  }

  // double low = 6;
  if (!(this->low() <= 0 && this->low() >= 0)) {
    total_size += 1 + 8;
  }

  // double close = 7;
  if (!(this->close() <= 0 && this->close() >= 0)) {
    total_size += 1 + 8;
  }

  // int64 vol = 8;
  if (this->vol() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_vol());
  }

  // double amount = 9;
  if (!(this->amount() <= 0 && this->amount() >= 0)) {
    total_size += 1 + 8;
  }

  // int32 ts = 1;
  if (this->ts() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_ts());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void KlineRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:secdata_transfer.KlineRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const KlineRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<KlineRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:secdata_transfer.KlineRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:secdata_transfer.KlineRequest)
    MergeFrom(*source);
  }
}

void KlineRequest::MergeFrom(const KlineRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:secdata_transfer.KlineRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.code().size() > 0) {

    code_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.code_);
  }
  if (from.period().size() > 0) {

    period_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.period_);
  }
  if (!(from.open() <= 0 && from.open() >= 0)) {
    _internal_set_open(from._internal_open());
  }
  if (!(from.high() <= 0 && from.high() >= 0)) {
    _internal_set_high(from._internal_high());
  }
  if (!(from.low() <= 0 && from.low() >= 0)) {
    _internal_set_low(from._internal_low());
  }
  if (!(from.close() <= 0 && from.close() >= 0)) {
    _internal_set_close(from._internal_close());
  }
  if (from.vol() != 0) {
    _internal_set_vol(from._internal_vol());
  }
  if (!(from.amount() <= 0 && from.amount() >= 0)) {
    _internal_set_amount(from._internal_amount());
  }
  if (from.ts() != 0) {
    _internal_set_ts(from._internal_ts());
  }
}

void KlineRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:secdata_transfer.KlineRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KlineRequest::CopyFrom(const KlineRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:secdata_transfer.KlineRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KlineRequest::IsInitialized() const {
  return true;
}

void KlineRequest::InternalSwap(KlineRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  code_.Swap(&other->code_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  period_.Swap(&other->period_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(open_, other->open_);
  swap(high_, other->high_);
  swap(low_, other->low_);
  swap(close_, other->close_);
  swap(vol_, other->vol_);
  swap(amount_, other->amount_);
  swap(ts_, other->ts_);
}

::PROTOBUF_NAMESPACE_ID::Metadata KlineRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void KlineReply::InitAsDefaultInstance() {
}
class KlineReply::_Internal {
 public:
};

KlineReply::KlineReply()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:secdata_transfer.KlineReply)
}
KlineReply::KlineReply(const KlineReply& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_message().empty()) {
    message_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:secdata_transfer.KlineReply)
}

void KlineReply::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_KlineReply_secdata_5ftransfer_2eproto.base);
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  status_ = 0;
}

KlineReply::~KlineReply() {
  // @@protoc_insertion_point(destructor:secdata_transfer.KlineReply)
  SharedDtor();
}

void KlineReply::SharedDtor() {
  message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void KlineReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const KlineReply& KlineReply::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_KlineReply_secdata_5ftransfer_2eproto.base);
  return *internal_default_instance();
}


void KlineReply::Clear() {
// @@protoc_insertion_point(message_clear_start:secdata_transfer.KlineReply)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  message_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  status_ = 0;
  _internal_metadata_.Clear();
}

const char* KlineReply::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string message = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_message(), ptr, ctx, "secdata_transfer.KlineReply.message");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* KlineReply::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:secdata_transfer.KlineReply)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 status = 1;
  if (this->status() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_status(), target);
  }

  // string message = 2;
  if (this->message().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "secdata_transfer.KlineReply.message");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:secdata_transfer.KlineReply)
  return target;
}

size_t KlineReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:secdata_transfer.KlineReply)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 2;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_message());
  }

  // int32 status = 1;
  if (this->status() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_status());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void KlineReply::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:secdata_transfer.KlineReply)
  GOOGLE_DCHECK_NE(&from, this);
  const KlineReply* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<KlineReply>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:secdata_transfer.KlineReply)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:secdata_transfer.KlineReply)
    MergeFrom(*source);
  }
}

void KlineReply::MergeFrom(const KlineReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:secdata_transfer.KlineReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.message().size() > 0) {

    message_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
  if (from.status() != 0) {
    _internal_set_status(from._internal_status());
  }
}

void KlineReply::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:secdata_transfer.KlineReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KlineReply::CopyFrom(const KlineReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:secdata_transfer.KlineReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KlineReply::IsInitialized() const {
  return true;
}

void KlineReply::InternalSwap(KlineReply* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  message_.Swap(&other->message_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(status_, other->status_);
}

::PROTOBUF_NAMESPACE_ID::Metadata KlineReply::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace secdata_transfer
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::secdata_transfer::KlineRequest* Arena::CreateMaybeMessage< ::secdata_transfer::KlineRequest >(Arena* arena) {
  return Arena::CreateInternal< ::secdata_transfer::KlineRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::secdata_transfer::KlineReply* Arena::CreateMaybeMessage< ::secdata_transfer::KlineReply >(Arena* arena) {
  return Arena::CreateInternal< ::secdata_transfer::KlineReply >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
