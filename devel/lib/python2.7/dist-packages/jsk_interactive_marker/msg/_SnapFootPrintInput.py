# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from jsk_interactive_marker/SnapFootPrintInput.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class SnapFootPrintInput(genpy.Message):
  _md5sum = "07fc9b79352f12bc13742f589662de86"
  _type = "jsk_interactive_marker/SnapFootPrintInput"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """geometry_msgs/PoseStamped input_pose
geometry_msgs/Pose lleg_pose
geometry_msgs/Pose rleg_pose


================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['input_pose','lleg_pose','rleg_pose']
  _slot_types = ['geometry_msgs/PoseStamped','geometry_msgs/Pose','geometry_msgs/Pose']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       input_pose,lleg_pose,rleg_pose

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SnapFootPrintInput, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.input_pose is None:
        self.input_pose = geometry_msgs.msg.PoseStamped()
      if self.lleg_pose is None:
        self.lleg_pose = geometry_msgs.msg.Pose()
      if self.rleg_pose is None:
        self.rleg_pose = geometry_msgs.msg.Pose()
    else:
      self.input_pose = geometry_msgs.msg.PoseStamped()
      self.lleg_pose = geometry_msgs.msg.Pose()
      self.rleg_pose = geometry_msgs.msg.Pose()

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
      buff.write(_get_struct_3I().pack(_x.input_pose.header.seq, _x.input_pose.header.stamp.secs, _x.input_pose.header.stamp.nsecs))
      _x = self.input_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_21d().pack(_x.input_pose.pose.position.x, _x.input_pose.pose.position.y, _x.input_pose.pose.position.z, _x.input_pose.pose.orientation.x, _x.input_pose.pose.orientation.y, _x.input_pose.pose.orientation.z, _x.input_pose.pose.orientation.w, _x.lleg_pose.position.x, _x.lleg_pose.position.y, _x.lleg_pose.position.z, _x.lleg_pose.orientation.x, _x.lleg_pose.orientation.y, _x.lleg_pose.orientation.z, _x.lleg_pose.orientation.w, _x.rleg_pose.position.x, _x.rleg_pose.position.y, _x.rleg_pose.position.z, _x.rleg_pose.orientation.x, _x.rleg_pose.orientation.y, _x.rleg_pose.orientation.z, _x.rleg_pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.input_pose is None:
        self.input_pose = geometry_msgs.msg.PoseStamped()
      if self.lleg_pose is None:
        self.lleg_pose = geometry_msgs.msg.Pose()
      if self.rleg_pose is None:
        self.rleg_pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.input_pose.header.seq, _x.input_pose.header.stamp.secs, _x.input_pose.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.input_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.input_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 168
      (_x.input_pose.pose.position.x, _x.input_pose.pose.position.y, _x.input_pose.pose.position.z, _x.input_pose.pose.orientation.x, _x.input_pose.pose.orientation.y, _x.input_pose.pose.orientation.z, _x.input_pose.pose.orientation.w, _x.lleg_pose.position.x, _x.lleg_pose.position.y, _x.lleg_pose.position.z, _x.lleg_pose.orientation.x, _x.lleg_pose.orientation.y, _x.lleg_pose.orientation.z, _x.lleg_pose.orientation.w, _x.rleg_pose.position.x, _x.rleg_pose.position.y, _x.rleg_pose.position.z, _x.rleg_pose.orientation.x, _x.rleg_pose.orientation.y, _x.rleg_pose.orientation.z, _x.rleg_pose.orientation.w,) = _get_struct_21d().unpack(str[start:end])
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
      buff.write(_get_struct_3I().pack(_x.input_pose.header.seq, _x.input_pose.header.stamp.secs, _x.input_pose.header.stamp.nsecs))
      _x = self.input_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_21d().pack(_x.input_pose.pose.position.x, _x.input_pose.pose.position.y, _x.input_pose.pose.position.z, _x.input_pose.pose.orientation.x, _x.input_pose.pose.orientation.y, _x.input_pose.pose.orientation.z, _x.input_pose.pose.orientation.w, _x.lleg_pose.position.x, _x.lleg_pose.position.y, _x.lleg_pose.position.z, _x.lleg_pose.orientation.x, _x.lleg_pose.orientation.y, _x.lleg_pose.orientation.z, _x.lleg_pose.orientation.w, _x.rleg_pose.position.x, _x.rleg_pose.position.y, _x.rleg_pose.position.z, _x.rleg_pose.orientation.x, _x.rleg_pose.orientation.y, _x.rleg_pose.orientation.z, _x.rleg_pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.input_pose is None:
        self.input_pose = geometry_msgs.msg.PoseStamped()
      if self.lleg_pose is None:
        self.lleg_pose = geometry_msgs.msg.Pose()
      if self.rleg_pose is None:
        self.rleg_pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.input_pose.header.seq, _x.input_pose.header.stamp.secs, _x.input_pose.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.input_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.input_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 168
      (_x.input_pose.pose.position.x, _x.input_pose.pose.position.y, _x.input_pose.pose.position.z, _x.input_pose.pose.orientation.x, _x.input_pose.pose.orientation.y, _x.input_pose.pose.orientation.z, _x.input_pose.pose.orientation.w, _x.lleg_pose.position.x, _x.lleg_pose.position.y, _x.lleg_pose.position.z, _x.lleg_pose.orientation.x, _x.lleg_pose.orientation.y, _x.lleg_pose.orientation.z, _x.lleg_pose.orientation.w, _x.rleg_pose.position.x, _x.rleg_pose.position.y, _x.rleg_pose.position.z, _x.rleg_pose.orientation.x, _x.rleg_pose.orientation.y, _x.rleg_pose.orientation.z, _x.rleg_pose.orientation.w,) = _get_struct_21d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_21d = None
def _get_struct_21d():
    global _struct_21d
    if _struct_21d is None:
        _struct_21d = struct.Struct("<21d")
    return _struct_21d
