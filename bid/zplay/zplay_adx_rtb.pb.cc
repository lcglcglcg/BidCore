// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zplay_adx_rtb.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "zplay_adx_rtb.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace zadx {

namespace {


}  // namespace


void protobuf_AssignDesc_zplay_5fadx_5frtb_2eproto() {
  protobuf_AddDesc_zplay_5fadx_5frtb_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "zplay_adx_rtb.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_zplay_5fadx_5frtb_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_zplay_5fadx_5frtb_2eproto() {
}

void protobuf_AddDesc_zplay_5fadx_5frtb_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::com::google::openrtb::protobuf_AddDesc_openrtb_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023zplay_adx_rtb.proto\022\004zadx\032\ropenrtb.pro"
    "to:0\n\007version\022\036.com.google.openrtb.BidRe"
    "quest\030\310\001 \001(\005:0\n\007is_ping\022\036.com.google.ope"
    "nrtb.BidRequest\030\312\001 \001(\010:3\n\nneed_https\022\036.c"
    "om.google.openrtb.BidRequest\030\313\001 \001(\010:1\n\004a"
    "ccu\022\".com.google.openrtb.BidRequest.Geo\030"
    "\310\001 \001(\005:3\n\006street\022\".com.google.openrtb.Bi"
    "dRequest.Geo\030\311\001 \001(\t:=\n\020is_splash_screen\022"
    "\".com.google.openrtb.BidRequest.Imp\030\310\001 \001"
    "(\010:<\n\017inventory_types\022\".com.google.openr"
    "tb.BidRequest.Imp\030\311\001 \003(\005:4\n\004plmn\022%.com.g"
    "oogle.openrtb.BidRequest.Device\030\310\001 \001(\t:4"
    "\n\004imei\022%.com.google.openrtb.BidRequest.D"
    "evice\030\311\001 \001(\t:3\n\003mac\022%.com.google.openrtb"
    ".BidRequest.Device\030\312\001 \001(\t::\n\nandroid_id\022"
    "%.com.google.openrtb.BidRequest.Device\030\313"
    "\001 \001(\t:4\n\004adid\022%.com.google.openrtb.BidRe"
    "quest.Device\030\314\001 \001(\t:;\n\013orientation\022%.com"
    ".google.openrtb.BidRequest.Device\030\315\001 \001(\005"
    ":4\n\004imsi\022%.com.google.openrtb.BidRequest"
    ".Device\030\316\001 \001(\t:A\n\013imptrackers\022+.com.goog"
    "le.openrtb.BidResponse.SeatBid.Bid\030\310\001 \003("
    "\t:A\n\013clktrackers\022+.com.google.openrtb.Bi"
    "dResponse.SeatBid.Bid\030\311\001 \003(\t:<\n\006clkurl\022+"
    ".com.google.openrtb.BidResponse.SeatBid."
    "Bid\030\312\001 \001(\t:B\n\014html_snippet\022+.com.google."
    "openrtb.BidResponse.SeatBid.Bid\030\313\001 \001(\t:="
    "\n\007app_ver\022+.com.google.openrtb.BidRespon"
    "se.SeatBid.Bid\030\314\001 \001(\t:D\n\016inventory_type\022"
    "+.com.google.openrtb.BidResponse.SeatBid"
    ".Bid\030\315\001 \001(\005:;\n\005title\022+.com.google.openrt"
    "b.BidResponse.SeatBid.Bid\030\316\001 \001(\t::\n\004desc"
    "\022+.com.google.openrtb.BidResponse.SeatBi"
    "d.Bid\030\317\001 \001(\t:<\n\006action\022+.com.google.open"
    "rtb.BidResponse.SeatBid.Bid\030\320\001 \001(\005:H\n\022do"
    "wnload_file_name\022+.com.google.openrtb.Bi"
    "dResponse.SeatBid.Bid\030\321\001 \001(\t:;\n\tlink_typ"
    "e\022\'.com.google.openrtb.NativeResponse.Li"
    "nk\030\310\001 \001(\005B\tB\007ZadxExt", 1540);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "zplay_adx_rtb.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest::default_instance(),
    200, 5, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest::default_instance(),
    202, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest::default_instance(),
    203, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest_Geo::default_instance(),
    200, 5, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest_Geo::default_instance(),
    201, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest_Imp::default_instance(),
    200, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest_Imp::default_instance(),
    201, 5, true, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest_Device::default_instance(),
    200, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest_Device::default_instance(),
    201, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest_Device::default_instance(),
    202, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest_Device::default_instance(),
    203, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest_Device::default_instance(),
    204, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest_Device::default_instance(),
    205, 5, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidRequest_Device::default_instance(),
    206, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidResponse_SeatBid_Bid::default_instance(),
    200, 9, true, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidResponse_SeatBid_Bid::default_instance(),
    201, 9, true, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidResponse_SeatBid_Bid::default_instance(),
    202, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidResponse_SeatBid_Bid::default_instance(),
    203, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidResponse_SeatBid_Bid::default_instance(),
    204, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidResponse_SeatBid_Bid::default_instance(),
    205, 5, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidResponse_SeatBid_Bid::default_instance(),
    206, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidResponse_SeatBid_Bid::default_instance(),
    207, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidResponse_SeatBid_Bid::default_instance(),
    208, 5, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::BidResponse_SeatBid_Bid::default_instance(),
    209, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::com::google::openrtb::NativeResponse_Link::default_instance(),
    200, 5, false, false);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_zplay_5fadx_5frtb_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_zplay_5fadx_5frtb_2eproto {
  StaticDescriptorInitializer_zplay_5fadx_5frtb_2eproto() {
    protobuf_AddDesc_zplay_5fadx_5frtb_2eproto();
  }
} static_descriptor_initializer_zplay_5fadx_5frtb_2eproto_;
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
  version(kVersionFieldNumber, 0);
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  is_ping(kIsPingFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  need_https(kNeedHttpsFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest_Geo,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
  accu(kAccuFieldNumber, 0);
const ::std::string street_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest_Geo,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  street(kStreetFieldNumber, street_default);
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest_Imp,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  is_splash_screen(kIsSplashScreenFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest_Imp,
    ::google::protobuf::internal::RepeatedPrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
  inventory_types(kInventoryTypesFieldNumber, 0);
const ::std::string plmn_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest_Device,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  plmn(kPlmnFieldNumber, plmn_default);
const ::std::string imei_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest_Device,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  imei(kImeiFieldNumber, imei_default);
const ::std::string mac_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest_Device,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  mac(kMacFieldNumber, mac_default);
const ::std::string android_id_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest_Device,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  android_id(kAndroidIdFieldNumber, android_id_default);
const ::std::string adid_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest_Device,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  adid(kAdidFieldNumber, adid_default);
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest_Device,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
  orientation(kOrientationFieldNumber, 0);
const ::std::string imsi_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidRequest_Device,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  imsi(kImsiFieldNumber, imsi_default);
const ::std::string imptrackers_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidResponse_SeatBid_Bid,
    ::google::protobuf::internal::RepeatedStringTypeTraits, 9, false >
  imptrackers(kImptrackersFieldNumber, imptrackers_default);
const ::std::string clktrackers_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidResponse_SeatBid_Bid,
    ::google::protobuf::internal::RepeatedStringTypeTraits, 9, false >
  clktrackers(kClktrackersFieldNumber, clktrackers_default);
const ::std::string clkurl_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidResponse_SeatBid_Bid,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  clkurl(kClkurlFieldNumber, clkurl_default);
const ::std::string html_snippet_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidResponse_SeatBid_Bid,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  html_snippet(kHtmlSnippetFieldNumber, html_snippet_default);
const ::std::string app_ver_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidResponse_SeatBid_Bid,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  app_ver(kAppVerFieldNumber, app_ver_default);
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidResponse_SeatBid_Bid,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
  inventory_type(kInventoryTypeFieldNumber, 0);
const ::std::string title_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidResponse_SeatBid_Bid,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  title(kTitleFieldNumber, title_default);
const ::std::string desc_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidResponse_SeatBid_Bid,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  desc(kDescFieldNumber, desc_default);
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidResponse_SeatBid_Bid,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
  action(kActionFieldNumber, 0);
const ::std::string download_file_name_default("");
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::BidResponse_SeatBid_Bid,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  download_file_name(kDownloadFileNameFieldNumber, download_file_name_default);
::google::protobuf::internal::ExtensionIdentifier< ::com::google::openrtb::NativeResponse_Link,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
  link_type(kLinkTypeFieldNumber, 0);

// @@protoc_insertion_point(namespace_scope)

}  // namespace zadx

// @@protoc_insertion_point(global_scope)
