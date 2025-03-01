// Generated by gencpp from file jsk_rviz_plugins/OverlayText.msg
// DO NOT EDIT!


#ifndef JSK_RVIZ_PLUGINS_MESSAGE_OVERLAYTEXT_H
#define JSK_RVIZ_PLUGINS_MESSAGE_OVERLAYTEXT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>

namespace jsk_rviz_plugins
{
template <class ContainerAllocator>
struct OverlayText_
{
  typedef OverlayText_<ContainerAllocator> Type;

  OverlayText_()
    : action(0)
    , width(0)
    , height(0)
    , left(0)
    , top(0)
    , bg_color()
    , line_width(0)
    , text_size(0.0)
    , font()
    , fg_color()
    , text()  {
    }
  OverlayText_(const ContainerAllocator& _alloc)
    : action(0)
    , width(0)
    , height(0)
    , left(0)
    , top(0)
    , bg_color(_alloc)
    , line_width(0)
    , text_size(0.0)
    , font(_alloc)
    , fg_color(_alloc)
    , text(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _action_type;
  _action_type action;

   typedef int32_t _width_type;
  _width_type width;

   typedef int32_t _height_type;
  _height_type height;

   typedef int32_t _left_type;
  _left_type left;

   typedef int32_t _top_type;
  _top_type top;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _bg_color_type;
  _bg_color_type bg_color;

   typedef int32_t _line_width_type;
  _line_width_type line_width;

   typedef float _text_size_type;
  _text_size_type text_size;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _font_type;
  _font_type font;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _fg_color_type;
  _fg_color_type fg_color;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _text_type;
  _text_type text;


    enum { ADD = 0u };
     enum { DELETE = 1u };
 

  typedef boost::shared_ptr< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> const> ConstPtr;

}; // struct OverlayText_

typedef ::jsk_rviz_plugins::OverlayText_<std::allocator<void> > OverlayText;

typedef boost::shared_ptr< ::jsk_rviz_plugins::OverlayText > OverlayTextPtr;
typedef boost::shared_ptr< ::jsk_rviz_plugins::OverlayText const> OverlayTextConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7efc1ed34881f913afcee6ba02aa1242";
  }

  static const char* value(const ::jsk_rviz_plugins::OverlayText_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7efc1ed34881f913ULL;
  static const uint64_t static_value2 = 0xafcee6ba02aa1242ULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_rviz_plugins/OverlayText";
  }

  static const char* value(const ::jsk_rviz_plugins::OverlayText_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 ADD = 0\n\
uint8 DELETE = 1\n\
\n\
uint8 action\n\
\n\
int32 width\n\
int32 height\n\
int32 left\n\
int32 top\n\
std_msgs/ColorRGBA bg_color\n\
\n\
int32 line_width\n\
float32 text_size\n\
string font\n\
std_msgs/ColorRGBA fg_color\n\
\n\
string text\n\
\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
";
  }

  static const char* value(const ::jsk_rviz_plugins::OverlayText_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action);
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.left);
      stream.next(m.top);
      stream.next(m.bg_color);
      stream.next(m.line_width);
      stream.next(m.text_size);
      stream.next(m.font);
      stream.next(m.fg_color);
      stream.next(m.text);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OverlayText_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_rviz_plugins::OverlayText_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_rviz_plugins::OverlayText_<ContainerAllocator>& v)
  {
    s << indent << "action: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.action);
    s << indent << "width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<int32_t>::stream(s, indent + "  ", v.height);
    s << indent << "left: ";
    Printer<int32_t>::stream(s, indent + "  ", v.left);
    s << indent << "top: ";
    Printer<int32_t>::stream(s, indent + "  ", v.top);
    s << indent << "bg_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.bg_color);
    s << indent << "line_width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.line_width);
    s << indent << "text_size: ";
    Printer<float>::stream(s, indent + "  ", v.text_size);
    s << indent << "font: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.font);
    s << indent << "fg_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.fg_color);
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.text);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RVIZ_PLUGINS_MESSAGE_OVERLAYTEXT_H
