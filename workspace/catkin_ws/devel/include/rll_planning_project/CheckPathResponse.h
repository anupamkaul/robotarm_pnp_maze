// Generated by gencpp from file rll_planning_project/CheckPathResponse.msg
// DO NOT EDIT!


#ifndef RLL_PLANNING_PROJECT_MESSAGE_CHECKPATHRESPONSE_H
#define RLL_PLANNING_PROJECT_MESSAGE_CHECKPATHRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rll_planning_project
{
template <class ContainerAllocator>
struct CheckPathResponse_
{
  typedef CheckPathResponse_<ContainerAllocator> Type;

  CheckPathResponse_()
    : valid(false)  {
    }
  CheckPathResponse_(const ContainerAllocator& _alloc)
    : valid(false)  {
  (void)_alloc;
    }



   typedef uint8_t _valid_type;
  _valid_type valid;





  typedef boost::shared_ptr< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CheckPathResponse_

typedef ::rll_planning_project::CheckPathResponse_<std::allocator<void> > CheckPathResponse;

typedef boost::shared_ptr< ::rll_planning_project::CheckPathResponse > CheckPathResponsePtr;
typedef boost::shared_ptr< ::rll_planning_project::CheckPathResponse const> CheckPathResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rll_planning_project::CheckPathResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a04c5033e7efda95fc3786e8d449c6e7";
  }

  static const char* value(const ::rll_planning_project::CheckPathResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa04c5033e7efda95ULL;
  static const uint64_t static_value2 = 0xfc3786e8d449c6e7ULL;
};

template<class ContainerAllocator>
struct DataType< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rll_planning_project/CheckPathResponse";
  }

  static const char* value(const ::rll_planning_project::CheckPathResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool valid\n\
\n\
";
  }

  static const char* value(const ::rll_planning_project::CheckPathResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.valid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CheckPathResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rll_planning_project::CheckPathResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rll_planning_project::CheckPathResponse_<ContainerAllocator>& v)
  {
    s << indent << "valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RLL_PLANNING_PROJECT_MESSAGE_CHECKPATHRESPONSE_H
