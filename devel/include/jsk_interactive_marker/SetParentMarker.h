// Generated by gencpp from file jsk_interactive_marker/SetParentMarker.msg
// DO NOT EDIT!


#ifndef JSK_INTERACTIVE_MARKER_MESSAGE_SETPARENTMARKER_H
#define JSK_INTERACTIVE_MARKER_MESSAGE_SETPARENTMARKER_H

#include <ros/service_traits.h>


#include <jsk_interactive_marker/SetParentMarkerRequest.h>
#include <jsk_interactive_marker/SetParentMarkerResponse.h>


namespace jsk_interactive_marker
{

struct SetParentMarker
{

typedef SetParentMarkerRequest Request;
typedef SetParentMarkerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetParentMarker
} // namespace jsk_interactive_marker


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::jsk_interactive_marker::SetParentMarker > {
  static const char* value()
  {
    return "0fbeb5790154b3ebc3c1cc4917de6fcc";
  }

  static const char* value(const ::jsk_interactive_marker::SetParentMarker&) { return value(); }
};

template<>
struct DataType< ::jsk_interactive_marker::SetParentMarker > {
  static const char* value()
  {
    return "jsk_interactive_marker/SetParentMarker";
  }

  static const char* value(const ::jsk_interactive_marker::SetParentMarker&) { return value(); }
};


// service_traits::MD5Sum< ::jsk_interactive_marker::SetParentMarkerRequest> should match 
// service_traits::MD5Sum< ::jsk_interactive_marker::SetParentMarker > 
template<>
struct MD5Sum< ::jsk_interactive_marker::SetParentMarkerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::jsk_interactive_marker::SetParentMarker >::value();
  }
  static const char* value(const ::jsk_interactive_marker::SetParentMarkerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::jsk_interactive_marker::SetParentMarkerRequest> should match 
// service_traits::DataType< ::jsk_interactive_marker::SetParentMarker > 
template<>
struct DataType< ::jsk_interactive_marker::SetParentMarkerRequest>
{
  static const char* value()
  {
    return DataType< ::jsk_interactive_marker::SetParentMarker >::value();
  }
  static const char* value(const ::jsk_interactive_marker::SetParentMarkerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::jsk_interactive_marker::SetParentMarkerResponse> should match 
// service_traits::MD5Sum< ::jsk_interactive_marker::SetParentMarker > 
template<>
struct MD5Sum< ::jsk_interactive_marker::SetParentMarkerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::jsk_interactive_marker::SetParentMarker >::value();
  }
  static const char* value(const ::jsk_interactive_marker::SetParentMarkerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::jsk_interactive_marker::SetParentMarkerResponse> should match 
// service_traits::DataType< ::jsk_interactive_marker::SetParentMarker > 
template<>
struct DataType< ::jsk_interactive_marker::SetParentMarkerResponse>
{
  static const char* value()
  {
    return DataType< ::jsk_interactive_marker::SetParentMarker >::value();
  }
  static const char* value(const ::jsk_interactive_marker::SetParentMarkerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // JSK_INTERACTIVE_MARKER_MESSAGE_SETPARENTMARKER_H
