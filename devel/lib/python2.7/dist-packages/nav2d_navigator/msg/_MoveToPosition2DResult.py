# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from nav2d_navigator/MoveToPosition2DResult.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class MoveToPosition2DResult(genpy.Message):
  _md5sum = "1494b1c9041b641e97cee161a63a1b7b"
  _type = "nav2d_navigator/MoveToPosition2DResult"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
geometry_msgs/Pose2D final_pose
float32 final_distance

================================================================================
MSG: geometry_msgs/Pose2D
# This expresses a position and orientation on a 2D manifold.

float64 x
float64 y
float64 theta"""
  __slots__ = ['final_pose','final_distance']
  _slot_types = ['geometry_msgs/Pose2D','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       final_pose,final_distance

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MoveToPosition2DResult, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.final_pose is None:
        self.final_pose = geometry_msgs.msg.Pose2D()
      if self.final_distance is None:
        self.final_distance = 0.
    else:
      self.final_pose = geometry_msgs.msg.Pose2D()
      self.final_distance = 0.

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
      buff.write(_get_struct_3df().pack(_x.final_pose.x, _x.final_pose.y, _x.final_pose.theta, _x.final_distance))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.final_pose is None:
        self.final_pose = geometry_msgs.msg.Pose2D()
      end = 0
      _x = self
      start = end
      end += 28
      (_x.final_pose.x, _x.final_pose.y, _x.final_pose.theta, _x.final_distance,) = _get_struct_3df().unpack(str[start:end])
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
      buff.write(_get_struct_3df().pack(_x.final_pose.x, _x.final_pose.y, _x.final_pose.theta, _x.final_distance))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.final_pose is None:
        self.final_pose = geometry_msgs.msg.Pose2D()
      end = 0
      _x = self
      start = end
      end += 28
      (_x.final_pose.x, _x.final_pose.y, _x.final_pose.theta, _x.final_distance,) = _get_struct_3df().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3df = None
def _get_struct_3df():
    global _struct_3df
    if _struct_3df is None:
        _struct_3df = struct.Struct("<3df")
    return _struct_3df
