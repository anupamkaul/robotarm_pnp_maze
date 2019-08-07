// Generated by gencpp from file rll_planning_project/MoveRequest.msg
// DO NOT EDIT!


#ifndef RLL_PLANNING_PROJECT_MESSAGE_MOVEREQUEST_H
#define RLL_PLANNING_PROJECT_MESSAGE_MOVEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>

namespace rll_planning_project
{
template <class ContainerAllocator>
struct MoveRequest_
{
  typedef MoveRequest_<ContainerAllocator> Type;

  MoveRequest_()
    : pose()  {
    }
  MoveRequest_(const ContainerAllocator& _alloc)
    : pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::rll_planning_project::MoveRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rll_planning_project::MoveRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveRequest_

typedef ::rll_planning_project::MoveRequest_<std::allocator<void> > MoveRequest;

typedef boost::shared_ptr< ::rll_planning_project::MoveRequest > MoveRequestPtr;
typedef boost::shared_ptr< ::rll_planning_project::MoveRequest const> MoveRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rll_planning_project::MoveRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rll_planning_project::MoveRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rll_planning_project

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rll_planning_project': ['/home/anupam/robotarm_pnp_maze/workspace/catkin_ws/devel/share/rll_planning_project/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rll_planning_project::MoveRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rll_planning_project::MoveRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_planning_project::MoveRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_planning_project::MoveRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_planning_project::MoveRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_planning_project::MoveRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rll_planning_project::MoveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "271cb12677c4cd9bccbc642cd9258d1f";
  }

  static const char* value(const ::rll_planning_project::MoveRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x271cb12677c4cd9bULL;
  static const uint64_t static_value2 = 0xccbc642cd9258d1fULL;
};

template<class ContainerAllocator>
struct DataType< ::rll_planning_project::MoveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rll_planning_project/MoveRequest";
  }

  static const char* value(const ::rll_planning_project::MoveRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rll_planning_project::MoveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose2D pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# Deprecated\n\
# Please use the full 3D pose.\n\
\n\
# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n\
\n\
# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n\
\n\
\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::rll_planning_project::MoveRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rll_planning_project::MoveRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rll_planning_project::MoveRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rll_planning_project::MoveRequest_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RLL_PLANNING_PROJECT_MESSAGE_MOVEREQUEST_H
