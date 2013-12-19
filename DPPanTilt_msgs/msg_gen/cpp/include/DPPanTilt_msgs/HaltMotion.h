/* Auto-generated by genmsg_cpp for file /home/user/fuerte_workspace/sandbox/PanTilt/DPPanTilt_msgs/msg/HaltMotion.msg */
#ifndef DPPANTILT_MSGS_MESSAGE_HALTMOTION_H
#define DPPANTILT_MSGS_MESSAGE_HALTMOTION_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace DPPanTilt_msgs
{
template <class ContainerAllocator>
struct HaltMotion_ {
  typedef HaltMotion_<ContainerAllocator> Type;

  HaltMotion_()
  {
  }

  HaltMotion_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HaltMotion
typedef  ::DPPanTilt_msgs::HaltMotion_<std::allocator<void> > HaltMotion;

typedef boost::shared_ptr< ::DPPanTilt_msgs::HaltMotion> HaltMotionPtr;
typedef boost::shared_ptr< ::DPPanTilt_msgs::HaltMotion const> HaltMotionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace DPPanTilt_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> > {
  static const char* value() 
  {
    return "DPPanTilt_msgs/HaltMotion";
  }

  static const char* value(const  ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> > {
  static const char* value() 
  {
    return "#\n\
# COPYRIGHT (C) 2005-2010\n\
# RE2, INC.\n\
# ALL RIGHTS RESERVED\n\
#\n\
# This is free software:\n\
# you can redistribute it and/or modify it under the terms of the GNU General\n\
# Public License as published by the Free Software Foundation, either version\n\
# 3 of the License, or (at your option) any later version.\n\
#\n\
# You should have received a copy of the GNU General Public License along\n\
# with this package.  If not, see <http://www.gnu.org/licenses/>.\n\
#\n\
# RE2, INC. disclaims all warranties with regard to this software, including\n\
# all implied warranties of merchantability and fitness, in no event shall\n\
# RE2, INC. be liable for any special, indirect or consequential damages or\n\
# any damages whatsoever resulting from loss of use, data or profits, whether\n\
# in an action of contract, negligence or other tortious action, arising out\n\
# of or in connection with the use or performance of this software.\n\
#\n\
#\n\
#\n\
\n\
# This message is used to immediately halt the motion of the Pan/Tilt unit.\n\
\n\
# This message intentionally has no body.\n\
\n\
";
  }

  static const char* value(const  ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HaltMotion_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::DPPanTilt_msgs::HaltMotion_<ContainerAllocator> & v) 
  {
  }
};


} // namespace message_operations
} // namespace ros

#endif // DPPANTILT_MSGS_MESSAGE_HALTMOTION_H

