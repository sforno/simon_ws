// Generated by gencpp from file nav2d_navigator/MoveToPosition2DActionGoal.msg
// DO NOT EDIT!


#ifndef NAV2D_NAVIGATOR_MESSAGE_MOVETOPOSITION2DACTIONGOAL_H
#define NAV2D_NAVIGATOR_MESSAGE_MOVETOPOSITION2DACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <nav2d_navigator/MoveToPosition2DGoal.h>

namespace nav2d_navigator
{
template <class ContainerAllocator>
struct MoveToPosition2DActionGoal_
{
  typedef MoveToPosition2DActionGoal_<ContainerAllocator> Type;

  MoveToPosition2DActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  MoveToPosition2DActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::nav2d_navigator::MoveToPosition2DGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;




  typedef boost::shared_ptr< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct MoveToPosition2DActionGoal_

typedef ::nav2d_navigator::MoveToPosition2DActionGoal_<std::allocator<void> > MoveToPosition2DActionGoal;

typedef boost::shared_ptr< ::nav2d_navigator::MoveToPosition2DActionGoal > MoveToPosition2DActionGoalPtr;
typedef boost::shared_ptr< ::nav2d_navigator::MoveToPosition2DActionGoal const> MoveToPosition2DActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nav2d_navigator

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav2d_navigator': ['/home/simoneforno/simon_ws/devel/share/nav2d_navigator/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2aeb8511cfece324b06e73656a6a7d93";
  }

  static const char* value(const ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2aeb8511cfece324ULL;
  static const uint64_t static_value2 = 0xb06e73656a6a7d93ULL;
};

template<class ContainerAllocator>
struct DataType< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav2d_navigator/MoveToPosition2DActionGoal";
  }

  static const char* value(const ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
MoveToPosition2DGoal goal\n\
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
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: nav2d_navigator/MoveToPosition2DGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
std_msgs/Header header\n\
geometry_msgs/Pose2D target_pose\n\
float32 target_distance\n\
float32 target_angle\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveToPosition2DActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav2d_navigator::MoveToPosition2DActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::nav2d_navigator::MoveToPosition2DGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAV2D_NAVIGATOR_MESSAGE_MOVETOPOSITION2DACTIONGOAL_H
