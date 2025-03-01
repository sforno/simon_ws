// Generated by gencpp from file jsk_interactive_marker/JointTrajectoryWithType.msg
// DO NOT EDIT!


#ifndef JSK_INTERACTIVE_MARKER_MESSAGE_JOINTTRAJECTORYWITHTYPE_H
#define JSK_INTERACTIVE_MARKER_MESSAGE_JOINTTRAJECTORYWITHTYPE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <jsk_interactive_marker/JointTrajectoryPointWithType.h>

namespace jsk_interactive_marker
{
template <class ContainerAllocator>
struct JointTrajectoryWithType_
{
  typedef JointTrajectoryWithType_<ContainerAllocator> Type;

  JointTrajectoryWithType_()
    : header()
    , joint_names()
    , points()  {
    }
  JointTrajectoryWithType_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , joint_names(_alloc)
    , points(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector< ::jsk_interactive_marker::JointTrajectoryPointWithType_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::jsk_interactive_marker::JointTrajectoryPointWithType_<ContainerAllocator> >::other >  _points_type;
  _points_type points;




  typedef boost::shared_ptr< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> const> ConstPtr;

}; // struct JointTrajectoryWithType_

typedef ::jsk_interactive_marker::JointTrajectoryWithType_<std::allocator<void> > JointTrajectoryWithType;

typedef boost::shared_ptr< ::jsk_interactive_marker::JointTrajectoryWithType > JointTrajectoryWithTypePtr;
typedef boost::shared_ptr< ::jsk_interactive_marker::JointTrajectoryWithType const> JointTrajectoryWithTypeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jsk_interactive_marker

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'jsk_interactive_marker': ['/home/simoneforno/simon_ws/src/jsk_visualization/jsk_interactive_markers/jsk_interactive_marker/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/kinetic/share/visualization_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "60e366ad2005e5bee332903472737b12";
  }

  static const char* value(const ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x60e366ad2005e5beULL;
  static const uint64_t static_value2 = 0xe332903472737b12ULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_interactive_marker/JointTrajectoryWithType";
  }

  static const char* value(const ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
string[] joint_names\n\
jsk_interactive_marker/JointTrajectoryPointWithType[] points\n\
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
\n\
================================================================================\n\
MSG: jsk_interactive_marker/JointTrajectoryPointWithType\n\
uint8 JOINT_INTERPOLATION=0\n\
uint8 LINEAR_INTERPOLATION=1\n\
uint8 COLLISION_AVOIDANCE=2\n\
\n\
uint8 CLOSE_HAND=10\n\
uint8 OPEN_HAND=11\n\
\n\
int8 type\n\
string args\n\
bool wait\n\
\n\
float64[] positions\n\
float64[] velocities\n\
float64[] accelerations\n\
float64[] effort\n\
duration time_from_start\n\
";
  }

  static const char* value(const ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.joint_names);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointTrajectoryWithType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_interactive_marker::JointTrajectoryWithType_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::jsk_interactive_marker::JointTrajectoryPointWithType_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_INTERACTIVE_MARKER_MESSAGE_JOINTTRAJECTORYWITHTYPE_H
