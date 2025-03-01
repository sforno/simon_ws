// Generated by gencpp from file jsk_rviz_plugins/StringStamped.msg
// DO NOT EDIT!


#ifndef JSK_RVIZ_PLUGINS_MESSAGE_STRINGSTAMPED_H
#define JSK_RVIZ_PLUGINS_MESSAGE_STRINGSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace jsk_rviz_plugins
{
template <class ContainerAllocator>
struct StringStamped_
{
  typedef StringStamped_<ContainerAllocator> Type;

  StringStamped_()
    : header()
    , data()  {
    }
  StringStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> const> ConstPtr;

}; // struct StringStamped_

typedef ::jsk_rviz_plugins::StringStamped_<std::allocator<void> > StringStamped;

typedef boost::shared_ptr< ::jsk_rviz_plugins::StringStamped > StringStampedPtr;
typedef boost::shared_ptr< ::jsk_rviz_plugins::StringStamped const> StringStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jsk_rviz_plugins

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'jsk_rviz_plugins': ['/home/simoneforno/simon_ws/src/jsk_visualization/jsk_rviz_plugins/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c99a9440709e4d4a9716d55b8270d5e7";
  }

  static const char* value(const ::jsk_rviz_plugins::StringStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc99a9440709e4d4aULL;
  static const uint64_t static_value2 = 0x9716d55b8270d5e7ULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_rviz_plugins/StringStamped";
  }

  static const char* value(const ::jsk_rviz_plugins::StringStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
string data\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::jsk_rviz_plugins::StringStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StringStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_rviz_plugins::StringStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_rviz_plugins::StringStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RVIZ_PLUGINS_MESSAGE_STRINGSTAMPED_H
