// Generated by gencpp from file jsk_interactive_marker/GetMarkerDimensions.msg
// DO NOT EDIT!


#ifndef JSK_INTERACTIVE_MARKER_MESSAGE_GETMARKERDIMENSIONS_H
#define JSK_INTERACTIVE_MARKER_MESSAGE_GETMARKERDIMENSIONS_H

#include <ros/service_traits.h>


#include <jsk_interactive_marker/GetMarkerDimensionsRequest.h>
#include <jsk_interactive_marker/GetMarkerDimensionsResponse.h>


namespace jsk_interactive_marker
{

struct GetMarkerDimensions
{

typedef GetMarkerDimensionsRequest Request;
typedef GetMarkerDimensionsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetMarkerDimensions
} // namespace jsk_interactive_marker


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::jsk_interactive_marker::GetMarkerDimensions > {
  static const char* value()
  {
    return "abc2585f72e13579d759aff3b4419630";
  }

  static const char* value(const ::jsk_interactive_marker::GetMarkerDimensions&) { return value(); }
};

template<>
struct DataType< ::jsk_interactive_marker::GetMarkerDimensions > {
  static const char* value()
  {
    return "jsk_interactive_marker/GetMarkerDimensions";
  }

  static const char* value(const ::jsk_interactive_marker::GetMarkerDimensions&) { return value(); }
};


// service_traits::MD5Sum< ::jsk_interactive_marker::GetMarkerDimensionsRequest> should match 
// service_traits::MD5Sum< ::jsk_interactive_marker::GetMarkerDimensions > 
template<>
struct MD5Sum< ::jsk_interactive_marker::GetMarkerDimensionsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::jsk_interactive_marker::GetMarkerDimensions >::value();
  }
  static const char* value(const ::jsk_interactive_marker::GetMarkerDimensionsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::jsk_interactive_marker::GetMarkerDimensionsRequest> should match 
// service_traits::DataType< ::jsk_interactive_marker::GetMarkerDimensions > 
template<>
struct DataType< ::jsk_interactive_marker::GetMarkerDimensionsRequest>
{
  static const char* value()
  {
    return DataType< ::jsk_interactive_marker::GetMarkerDimensions >::value();
  }
  static const char* value(const ::jsk_interactive_marker::GetMarkerDimensionsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::jsk_interactive_marker::GetMarkerDimensionsResponse> should match 
// service_traits::MD5Sum< ::jsk_interactive_marker::GetMarkerDimensions > 
template<>
struct MD5Sum< ::jsk_interactive_marker::GetMarkerDimensionsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::jsk_interactive_marker::GetMarkerDimensions >::value();
  }
  static const char* value(const ::jsk_interactive_marker::GetMarkerDimensionsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::jsk_interactive_marker::GetMarkerDimensionsResponse> should match 
// service_traits::DataType< ::jsk_interactive_marker::GetMarkerDimensions > 
template<>
struct DataType< ::jsk_interactive_marker::GetMarkerDimensionsResponse>
{
  static const char* value()
  {
    return DataType< ::jsk_interactive_marker::GetMarkerDimensions >::value();
  }
  static const char* value(const ::jsk_interactive_marker::GetMarkerDimensionsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // JSK_INTERACTIVE_MARKER_MESSAGE_GETMARKERDIMENSIONS_H
