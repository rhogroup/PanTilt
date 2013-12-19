/* Auto-generated by genmsg_cpp for file /home/user/fuerte_workspace/sandbox/PanTilt/DPPanTilt_msgs/msg/SetSpeedForPositionMovesTilt.msg */
#ifndef DPPANTILT_MSGS_MESSAGE_SETSPEEDFORPOSITIONMOVESTILT_H
#define DPPANTILT_MSGS_MESSAGE_SETSPEEDFORPOSITIONMOVESTILT_H
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
struct SetSpeedForPositionMovesTilt_ {
  typedef SetSpeedForPositionMovesTilt_<ContainerAllocator> Type;

  SetSpeedForPositionMovesTilt_()
  : tiltSpeedInRadiansPerSec(0.0)
  {
  }

  SetSpeedForPositionMovesTilt_(const ContainerAllocator& _alloc)
  : tiltSpeedInRadiansPerSec(0.0)
  {
  }

  typedef float _tiltSpeedInRadiansPerSec_type;
  float tiltSpeedInRadiansPerSec;


  typedef boost::shared_ptr< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetSpeedForPositionMovesTilt
typedef  ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<std::allocator<void> > SetSpeedForPositionMovesTilt;

typedef boost::shared_ptr< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt> SetSpeedForPositionMovesTiltPtr;
typedef boost::shared_ptr< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt const> SetSpeedForPositionMovesTiltConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace DPPanTilt_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> > {
  static const char* value() 
  {
    return "747efaceb02af3c079c7615b4c868ad9";
  }

  static const char* value(const  ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x747efaceb02af3c0ULL;
  static const uint64_t static_value2 = 0x79c7615b4c868ad9ULL;
};

template<class ContainerAllocator>
struct DataType< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> > {
  static const char* value() 
  {
    return "DPPanTilt_msgs/SetSpeedForPositionMovesTilt";
  }

  static const char* value(const  ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> > {
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
# This message is used to set the maximum speed that a position move will\n\
# be able to obtain.\n\
\n\
float32 tiltSpeedInRadiansPerSec\n\
\n\
";
  }

  static const char* value(const  ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.tiltSpeedInRadiansPerSec);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetSpeedForPositionMovesTilt_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::DPPanTilt_msgs::SetSpeedForPositionMovesTilt_<ContainerAllocator> & v) 
  {
    s << indent << "tiltSpeedInRadiansPerSec: ";
    Printer<float>::stream(s, indent + "  ", v.tiltSpeedInRadiansPerSec);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DPPANTILT_MSGS_MESSAGE_SETSPEEDFORPOSITIONMOVESTILT_H
