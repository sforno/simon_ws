// Generated by gencpp from file p2os_msgs/TCMState.msg
// DO NOT EDIT!


#ifndef P2OS_MSGS_MESSAGE_TCMSTATE_H
#define P2OS_MSGS_MESSAGE_TCMSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace p2os_msgs
{
template <class ContainerAllocator>
struct TCMState_
{
  typedef TCMState_<ContainerAllocator> Type;

  TCMState_()
    : tcm_power(false)  {
    }
  TCMState_(const ContainerAllocator& _alloc)
    : tcm_power(false)  {
  (void)_alloc;
    }



   typedef uint8_t _tcm_power_type;
  _tcm_power_type tcm_power;




  typedef boost::shared_ptr< ::p2os_msgs::TCMState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::p2os_msgs::TCMState_<ContainerAllocator> const> ConstPtr;

}; // struct TCMState_

typedef ::p2os_msgs::TCMState_<std::allocator<void> > TCMState;

typedef boost::shared_ptr< ::p2os_msgs::TCMState > TCMStatePtr;
typedef boost::shared_ptr< ::p2os_msgs::TCMState const> TCMStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::p2os_msgs::TCMState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::p2os_msgs::TCMState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace p2os_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'p2os_msgs': ['/home/simoneforno/simon_ws/src/p2os/p2os_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::p2os_msgs::TCMState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::p2os_msgs::TCMState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p2os_msgs::TCMState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p2os_msgs::TCMState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p2os_msgs::TCMState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p2os_msgs::TCMState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::p2os_msgs::TCMState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c2bc91397a05d27a5eff6dafb47db890";
  }

  static const char* value(const ::p2os_msgs::TCMState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc2bc91397a05d27aULL;
  static const uint64_t static_value2 = 0x5eff6dafb47db890ULL;
};

template<class ContainerAllocator>
struct DataType< ::p2os_msgs::TCMState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "p2os_msgs/TCMState";
  }

  static const char* value(const ::p2os_msgs::TCMState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::p2os_msgs::TCMState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool tcm_power\n\
";
  }

  static const char* value(const ::p2os_msgs::TCMState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::p2os_msgs::TCMState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tcm_power);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TCMState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::p2os_msgs::TCMState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::p2os_msgs::TCMState_<ContainerAllocator>& v)
  {
    s << indent << "tcm_power: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tcm_power);
  }
};

} // namespace message_operations
} // namespace ros

#endif // P2OS_MSGS_MESSAGE_TCMSTATE_H
