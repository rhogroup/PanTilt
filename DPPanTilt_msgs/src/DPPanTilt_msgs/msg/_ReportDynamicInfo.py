"""autogenerated by genpy from DPPanTilt_msgs/ReportDynamicInfo.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class ReportDynamicInfo(genpy.Message):
  _md5sum = "2b3f54532ce42444329f3bb657130369"
  _type = "DPPanTilt_msgs/ReportDynamicInfo"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """#
# COPYRIGHT (C) 2005-2010
# RE2, INC.
# ALL RIGHTS RESERVED
#
# This is free software:
# you can redistribute it and/or modify it under the terms of the GNU General
# Public License as published by the Free Software Foundation, either version
# 3 of the License, or (at your option) any later version.
#
# You should have received a copy of the GNU General Public License along
# with this package.  If not, see <http://www.gnu.org/licenses/>.
#
# RE2, INC. disclaims all warranties with regard to this software, including
# all implied warranties of merchantability and fitness, in no event shall
# RE2, INC. be liable for any special, indirect or consequential damages or
# any damages whatsoever resulting from loss of use, data or profits, whether
# in an action of contract, negligence or other tortious action, arising out
# of or in connection with the use or performance of this software.
#
#
#

# This message is used to report the information about the Pan/Tilt unit
# that will be changing as the unit is used.

Header header

# This bool marks whether or not the unit is in Position Control.  If it
# is not, this means the unit is in Velocity Control.
bool currentlyInPositionControl

# These are the last recorded positions of the axes
float32 panPositionInRadians
float32 tiltPositionInRadians

# These are the last recorded velocities of the axes
float32 panVelocityInRadiansPerSec
float32 tiltVelocityInRadiansPerSec

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.secs: seconds (stamp_secs) since epoch
# * stamp.nsecs: nanoseconds since stamp_secs
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

"""
  __slots__ = ['header','currentlyInPositionControl','panPositionInRadians','tiltPositionInRadians','panVelocityInRadiansPerSec','tiltVelocityInRadiansPerSec']
  _slot_types = ['std_msgs/Header','bool','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,currentlyInPositionControl,panPositionInRadians,tiltPositionInRadians,panVelocityInRadiansPerSec,tiltVelocityInRadiansPerSec

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ReportDynamicInfo, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.currentlyInPositionControl is None:
        self.currentlyInPositionControl = False
      if self.panPositionInRadians is None:
        self.panPositionInRadians = 0.
      if self.tiltPositionInRadians is None:
        self.tiltPositionInRadians = 0.
      if self.panVelocityInRadiansPerSec is None:
        self.panVelocityInRadiansPerSec = 0.
      if self.tiltVelocityInRadiansPerSec is None:
        self.tiltVelocityInRadiansPerSec = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.currentlyInPositionControl = False
      self.panPositionInRadians = 0.
      self.tiltPositionInRadians = 0.
      self.panVelocityInRadiansPerSec = 0.
      self.tiltVelocityInRadiansPerSec = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_B4f.pack(_x.currentlyInPositionControl, _x.panPositionInRadians, _x.tiltPositionInRadians, _x.panVelocityInRadiansPerSec, _x.tiltVelocityInRadiansPerSec))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 17
      (_x.currentlyInPositionControl, _x.panPositionInRadians, _x.tiltPositionInRadians, _x.panVelocityInRadiansPerSec, _x.tiltVelocityInRadiansPerSec,) = _struct_B4f.unpack(str[start:end])
      self.currentlyInPositionControl = bool(self.currentlyInPositionControl)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_B4f.pack(_x.currentlyInPositionControl, _x.panPositionInRadians, _x.tiltPositionInRadians, _x.panVelocityInRadiansPerSec, _x.tiltVelocityInRadiansPerSec))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 17
      (_x.currentlyInPositionControl, _x.panPositionInRadians, _x.tiltPositionInRadians, _x.panVelocityInRadiansPerSec, _x.tiltVelocityInRadiansPerSec,) = _struct_B4f.unpack(str[start:end])
      self.currentlyInPositionControl = bool(self.currentlyInPositionControl)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_B4f = struct.Struct("<B4f")