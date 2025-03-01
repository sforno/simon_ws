// Generated by gencpp from file jsk_interactive_marker/MarkerMenu.msg
// DO NOT EDIT!


#ifndef JSK_INTERACTIVE_MARKER_MESSAGE_MARKERMENU_H
#define JSK_INTERACTIVE_MARKER_MESSAGE_MARKERMENU_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jsk_interactive_marker
{
template <class ContainerAllocator>
struct MarkerMenu_
{
  typedef MarkerMenu_<ContainerAllocator> Type;

  MarkerMenu_()
    : menu(0)
    , type(0)
    , marker_name()  {
    }
  MarkerMenu_(const ContainerAllocator& _alloc)
    : menu(0)
    , type(0)
    , marker_name(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _menu_type;
  _menu_type menu;

   typedef int8_t _type_type;
  _type_type type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _marker_name_type;
  _marker_name_type marker_name;


    enum { MOVE = 0u };
     enum { FORCE_MOVE = 1u };
     enum { SET_ORIGIN = 2u };
     enum { SET_ORIGIN_RHAND = 3u };
     enum { SET_ORIGIN_LHAND = 4u };
     enum { RESET_COORDS = 5u };
     enum { DELETE_FORCE = 6u };
     enum { PUBLISH_MARKER = 7u };
     enum { JOINT_MOVE = 8u };
     enum { RESET_JOINT = 9u };
     enum { SET_MOVE_RARM = 10u };
     enum { SET_MOVE_LARM = 11u };
     enum { SET_MOVE_ARMS = 12u };
     enum { MOVE_CONSTRAINT_T = 13u };
     enum { MOVE_CONSTRAINT_NIL = 14u };
     enum { IK_ROTATION_AXIS_T = 15u };
     enum { IK_ROTATION_AXIS_NIL = 16u };
     enum { USE_TORSO_T = 17u };
     enum { USE_TORSO_NIL = 18u };
     enum { USE_FULLBODY = 19 };
     enum { START_GRASP = 20u };
     enum { HARF_GRASP = 21u };
     enum { STOP_GRASP = 22u };
     enum { HEAD_TARGET_POINT = 30u };
     enum { LOOK_AUTO = 31u };
     enum { MANIP_MODE = 40u };
     enum { PICK = 41u };
     enum { TOUCHIT_EXEC = 42u };
     enum { TOUCHIT_PREV = 43u };
     enum { TOUCHIT_CANCEL = 44u };
     enum { LOOK_RARM = 45u };
     enum { LOOK_LARM = 46u };
     enum { PLAN = 50u };
     enum { EXECUTE = 51u };
     enum { PLAN_EXECUTE = 52u };
     enum { CANCEL_PLAN = 53u };
     enum { GENERAL = 0u };
     enum { HEAD_MARKER = 1u };
     enum { RHAND_MARKER = 2u };
     enum { LHAND_MARKER = 3u };
     enum { RLEG_MARKER = 4u };
     enum { LLEG_MARKER = 5u };
     enum { BASE_MARKER = 6u };
     enum { RFINGER_MARKER = 7u };
     enum { LFINGER_MARKER = 8u };
 

  typedef boost::shared_ptr< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> const> ConstPtr;

}; // struct MarkerMenu_

typedef ::jsk_interactive_marker::MarkerMenu_<std::allocator<void> > MarkerMenu;

typedef boost::shared_ptr< ::jsk_interactive_marker::MarkerMenu > MarkerMenuPtr;
typedef boost::shared_ptr< ::jsk_interactive_marker::MarkerMenu const> MarkerMenuConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jsk_interactive_marker

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'jsk_interactive_marker': ['/home/simoneforno/simon_ws/src/jsk_visualization/jsk_interactive_markers/jsk_interactive_marker/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/kinetic/share/visualization_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "192d3b78eda584051c0d487463f7de74";
  }

  static const char* value(const ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x192d3b78eda58405ULL;
  static const uint64_t static_value2 = 0x1c0d487463f7de74ULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_interactive_marker/MarkerMenu";
  }

  static const char* value(const ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 MOVE=0\n\
uint8 FORCE_MOVE=1\n\
uint8 SET_ORIGIN=2\n\
uint8 SET_ORIGIN_RHAND=3\n\
uint8 SET_ORIGIN_LHAND=4\n\
uint8 RESET_COORDS=5\n\
uint8 DELETE_FORCE=6\n\
uint8 PUBLISH_MARKER=7\n\
uint8 JOINT_MOVE=8\n\
uint8 RESET_JOINT=9\n\
\n\
uint8 SET_MOVE_RARM=10\n\
uint8 SET_MOVE_LARM=11\n\
uint8 SET_MOVE_ARMS=12\n\
uint8 MOVE_CONSTRAINT_T=13\n\
uint8 MOVE_CONSTRAINT_NIL=14\n\
uint8 IK_ROTATION_AXIS_T=15\n\
uint8 IK_ROTATION_AXIS_NIL=16\n\
uint8 USE_TORSO_T=17\n\
uint8 USE_TORSO_NIL=18\n\
int8 USE_FULLBODY=19\n\
\n\
\n\
uint8 START_GRASP=20\n\
uint8 HARF_GRASP=21\n\
uint8 STOP_GRASP=22\n\
\n\
uint8 HEAD_TARGET_POINT=30\n\
uint8 LOOK_AUTO=31\n\
\n\
uint8 MANIP_MODE=40\n\
uint8 PICK=41\n\
uint8 TOUCHIT_EXEC=42\n\
uint8 TOUCHIT_PREV=43\n\
uint8 TOUCHIT_CANCEL=44\n\
\n\
uint8 LOOK_RARM=45\n\
uint8 LOOK_LARM=46\n\
\n\
uint8 PLAN=50\n\
uint8 EXECUTE=51\n\
uint8 PLAN_EXECUTE=52\n\
uint8 CANCEL_PLAN=53\n\
\n\
uint8 GENERAL=0\n\
uint8 HEAD_MARKER=1\n\
uint8 RHAND_MARKER=2\n\
uint8 LHAND_MARKER=3\n\
uint8 RLEG_MARKER=4\n\
uint8 LLEG_MARKER=5\n\
uint8 BASE_MARKER=6\n\
uint8 RFINGER_MARKER=7\n\
uint8 LFINGER_MARKER=8\n\
\n\
int8 menu\n\
int8 type\n\
string marker_name\n\
";
  }

  static const char* value(const ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.menu);
      stream.next(m.type);
      stream.next(m.marker_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MarkerMenu_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_interactive_marker::MarkerMenu_<ContainerAllocator>& v)
  {
    s << indent << "menu: ";
    Printer<int8_t>::stream(s, indent + "  ", v.menu);
    s << indent << "type: ";
    Printer<int8_t>::stream(s, indent + "  ", v.type);
    s << indent << "marker_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.marker_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_INTERACTIVE_MARKER_MESSAGE_MARKERMENU_H
