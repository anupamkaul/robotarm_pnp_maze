// Generated by gencpp from file rll_msgs/PickPlaceRequest.msg
// DO NOT EDIT!


#ifndef RLL_MSGS_MESSAGE_PICKPLACEREQUEST_H
#define RLL_MSGS_MESSAGE_PICKPLACEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Pose.h>

namespace rll_msgs
{
template <class ContainerAllocator>
struct PickPlaceRequest_
{
  typedef PickPlaceRequest_<ContainerAllocator> Type;

  PickPlaceRequest_()
    : pose_above()
    , pose_grip()
    , gripper_close(false)
    , grasp_object()  {
    }
  PickPlaceRequest_(const ContainerAllocator& _alloc)
    : pose_above(_alloc)
    , pose_grip(_alloc)
    , gripper_close(false)
    , grasp_object(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_above_type;
  _pose_above_type pose_above;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_grip_type;
  _pose_grip_type pose_grip;

   typedef uint8_t _gripper_close_type;
  _gripper_close_type gripper_close;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _grasp_object_type;
  _grasp_object_type grasp_object;





  typedef boost::shared_ptr< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PickPlaceRequest_

typedef ::rll_msgs::PickPlaceRequest_<std::allocator<void> > PickPlaceRequest;

typedef boost::shared_ptr< ::rll_msgs::PickPlaceRequest > PickPlaceRequestPtr;
typedef boost::shared_ptr< ::rll_msgs::PickPlaceRequest const> PickPlaceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rll_msgs::PickPlaceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rll_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rll_msgs': ['/home/anupam/robotarm_pnp_maze/workspace/catkin_ws/src/rll_sdk/rll_msgs/msg', '/home/anupam/robotarm_pnp_maze/workspace/catkin_ws/devel/share/rll_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3060b6166dbcc78c572755b07312c70f";
  }

  static const char* value(const ::rll_msgs::PickPlaceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3060b6166dbcc78cULL;
  static const uint64_t static_value2 = 0x572755b07312c70fULL;
};

template<class ContainerAllocator>
struct DataType< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rll_msgs/PickPlaceRequest";
  }

  static const char* value(const ::rll_msgs::PickPlaceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose pose_above\n\
geometry_msgs/Pose pose_grip\n\
bool gripper_close\n\
string grasp_object\n\
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

  static const char* value(const ::rll_msgs::PickPlaceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose_above);
      stream.next(m.pose_grip);
      stream.next(m.gripper_close);
      stream.next(m.grasp_object);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PickPlaceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rll_msgs::PickPlaceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rll_msgs::PickPlaceRequest_<ContainerAllocator>& v)
  {
    s << indent << "pose_above: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose_above);
    s << indent << "pose_grip: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose_grip);
    s << indent << "gripper_close: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gripper_close);
    s << indent << "grasp_object: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.grasp_object);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RLL_MSGS_MESSAGE_PICKPLACEREQUEST_H
