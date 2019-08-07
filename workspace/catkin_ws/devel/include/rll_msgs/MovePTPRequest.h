// Generated by gencpp from file rll_msgs/MovePTPRequest.msg
// DO NOT EDIT!


#ifndef RLL_MSGS_MESSAGE_MOVEPTPREQUEST_H
#define RLL_MSGS_MESSAGE_MOVEPTPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace rll_msgs
{
template <class ContainerAllocator>
struct MovePTPRequest_
{
  typedef MovePTPRequest_<ContainerAllocator> Type;

  MovePTPRequest_()
    : pose()  {
    }
  MovePTPRequest_(const ContainerAllocator& _alloc)
    : pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::rll_msgs::MovePTPRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rll_msgs::MovePTPRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MovePTPRequest_

typedef ::rll_msgs::MovePTPRequest_<std::allocator<void> > MovePTPRequest;

typedef boost::shared_ptr< ::rll_msgs::MovePTPRequest > MovePTPRequestPtr;
typedef boost::shared_ptr< ::rll_msgs::MovePTPRequest const> MovePTPRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rll_msgs::MovePTPRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rll_msgs::MovePTPRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rll_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rll_msgs': ['/home/anupam/robotarm_pnp_maze/workspace/catkin_ws/src/rll_sdk/rll_msgs/msg', '/home/anupam/robotarm_pnp_maze/workspace/catkin_ws/devel/share/rll_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rll_msgs::MovePTPRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rll_msgs::MovePTPRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_msgs::MovePTPRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_msgs::MovePTPRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_msgs::MovePTPRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_msgs::MovePTPRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rll_msgs::MovePTPRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f192399f711a48924df9a394d37edd67";
  }

  static const char* value(const ::rll_msgs::MovePTPRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf192399f711a4892ULL;
  static const uint64_t static_value2 = 0x4df9a394d37edd67ULL;
};

template<class ContainerAllocator>
struct DataType< ::rll_msgs::MovePTPRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rll_msgs/MovePTPRequest";
  }

  static const char* value(const ::rll_msgs::MovePTPRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rll_msgs::MovePTPRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::rll_msgs::MovePTPRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rll_msgs::MovePTPRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MovePTPRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rll_msgs::MovePTPRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rll_msgs::MovePTPRequest_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RLL_MSGS_MESSAGE_MOVEPTPREQUEST_H