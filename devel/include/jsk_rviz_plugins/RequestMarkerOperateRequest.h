// Generated by gencpp from file jsk_rviz_plugins/RequestMarkerOperateRequest.msg
// DO NOT EDIT!


#ifndef JSK_RVIZ_PLUGINS_MESSAGE_REQUESTMARKEROPERATEREQUEST_H
#define JSK_RVIZ_PLUGINS_MESSAGE_REQUESTMARKEROPERATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <jsk_rviz_plugins/TransformableMarkerOperate.h>

namespace jsk_rviz_plugins
{
template <class ContainerAllocator>
struct RequestMarkerOperateRequest_
{
  typedef RequestMarkerOperateRequest_<ContainerAllocator> Type;

  RequestMarkerOperateRequest_()
    : operate()  {
    }
  RequestMarkerOperateRequest_(const ContainerAllocator& _alloc)
    : operate(_alloc)  {
  (void)_alloc;
    }



   typedef  ::jsk_rviz_plugins::TransformableMarkerOperate_<ContainerAllocator>  _operate_type;
  _operate_type operate;




  typedef boost::shared_ptr< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RequestMarkerOperateRequest_

typedef ::jsk_rviz_plugins::RequestMarkerOperateRequest_<std::allocator<void> > RequestMarkerOperateRequest;

typedef boost::shared_ptr< ::jsk_rviz_plugins::RequestMarkerOperateRequest > RequestMarkerOperateRequestPtr;
typedef boost::shared_ptr< ::jsk_rviz_plugins::RequestMarkerOperateRequest const> RequestMarkerOperateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jsk_rviz_plugins

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'jsk_rviz_plugins': ['/home/simoneforno/simon_ws/src/jsk_visualization/jsk_rviz_plugins/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5d5e6dca1cfed7e0be1a8c17221d0619";
  }

  static const char* value(const ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5d5e6dca1cfed7e0ULL;
  static const uint64_t static_value2 = 0xbe1a8c17221d0619ULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_rviz_plugins/RequestMarkerOperateRequest";
  }

  static const char* value(const ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_rviz_plugins/TransformableMarkerOperate operate\n\
\n\
================================================================================\n\
MSG: jsk_rviz_plugins/TransformableMarkerOperate\n\
uint8 BOX=0\n\
uint8 CYLINDER=1\n\
uint8 TORUS=2\n\
uint8 MESH_RESOURCE=3\n\
\n\
uint8 INSERT=0\n\
uint8 ERASE=1\n\
uint8 ERASEALL=2\n\
uint8 ERASEFOCUS=3\n\
uint8 COPY=4\n\
\n\
int32 type\n\
int32 action\n\
string frame_id\n\
string name\n\
string description\n\
string mesh_resource\n\
bool mesh_use_embedded_materials\n\
";
  }

  static const char* value(const ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.operate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RequestMarkerOperateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_rviz_plugins::RequestMarkerOperateRequest_<ContainerAllocator>& v)
  {
    s << indent << "operate: ";
    s << std::endl;
    Printer< ::jsk_rviz_plugins::TransformableMarkerOperate_<ContainerAllocator> >::stream(s, indent + "  ", v.operate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RVIZ_PLUGINS_MESSAGE_REQUESTMARKEROPERATEREQUEST_H
