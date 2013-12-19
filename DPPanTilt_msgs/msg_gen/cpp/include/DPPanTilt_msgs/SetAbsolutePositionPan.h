/* Auto-generated by genmsg_cpp for file /home/user/fuerte_workspace/sandbox/PanTilt/DPPanTilt_msgs/msg/SetAbsolutePositionPan.msg */
#ifndef DPPANTILT_MSGS_MESSAGE_SETABSOLUTEPOSITIONPAN_H
#define DPPANTILT_MSGS_MESSAGE_SETABSOLUTEPOSITIONPAN_H
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
struct SetAbsolutePositionPan_ {
  typedef SetAbsolutePositionPan_<ContainerAllocator> Type;

  SetAbsolutePositionPan_()
  : panPositionInRadians(0.0)
  {
  }

  SetAbsolutePositionPan_(const ContainerAllocator& _alloc)
  : panPositionInRadians(0.0)
  {
  }

  typedef float _panPositionInRadians_type;
  float panPositionInRadians;


  typedef boost::shared_ptr< ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetAbsolutePositionPan
typedef  ::DPPanTilt_msgs::SetAbsolutePositionPan_<std::allocator<void> > SetAbsolutePositionPan;

typedef boost::shared_ptr< ::DPPanTilt_msgs::SetAbsolutePositionPan> SetAbsolutePositionPanPtr;
typedef boost::shared_ptr< ::DPPanTilt_msgs::SetAbsolutePositionPan const> SetAbsolutePositionPanConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace DPPanTilt_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a40e742fd49bd81d2afb807c5ae11850";
  }

  static const char* value(const  ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa40e742fd49bd81dULL;
  static const uint64_t static_value2 = 0x2afb807c5ae11850ULL;
};

template<class ContainerAllocator>
struct DataType< ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> > {
  static const char* value() 
  {
    return "DPPanTilt_msgs/SetAbsolutePositionPan";
  }

  static const char* value(const  ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> > {
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
# This message is used to set the absolute position of the Pan axis.\n\
# This message is only valid if the unit is in Position control.\n\
\n\
float32 panPositionInRadians\n\
\n\
";
  }

  static const char* value(const  ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.panPositionInRadians);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetAbsolutePositionPan_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::DPPanTilt_msgs::SetAbsolutePositionPan_<ContainerAllocator> & v) 
  {
    s << indent << "panPositionInRadians: ";
    Printer<float>::stream(s, indent + "  ", v.panPositionInRadians);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DPPANTILT_MSGS_MESSAGE_SETABSOLUTEPOSITIONPAN_H
