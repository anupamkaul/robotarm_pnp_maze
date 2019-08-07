# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rll_planning_project/CheckPathRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class CheckPathRequest(genpy.Message):
  _md5sum = "a64bb936c67a976431689a78c534f6f5"
  _type = "rll_planning_project/CheckPathRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Pose2D pose_start
geometry_msgs/Pose2D pose_goal

================================================================================
MSG: geometry_msgs/Pose2D
# Deprecated
# Please use the full 3D pose.

# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.

# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.


# This expresses a position and orientation on a 2D manifold.

float64 x
float64 y
float64 theta
"""
  __slots__ = ['pose_start','pose_goal']
  _slot_types = ['geometry_msgs/Pose2D','geometry_msgs/Pose2D']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pose_start,pose_goal

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CheckPathRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.pose_start is None:
        self.pose_start = geometry_msgs.msg.Pose2D()
      if self.pose_goal is None:
        self.pose_goal = geometry_msgs.msg.Pose2D()
    else:
      self.pose_start = geometry_msgs.msg.Pose2D()
      self.pose_goal = geometry_msgs.msg.Pose2D()

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
      buff.write(_get_struct_6d().pack(_x.pose_start.x, _x.pose_start.y, _x.pose_start.theta, _x.pose_goal.x, _x.pose_goal.y, _x.pose_goal.theta))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.pose_start is None:
        self.pose_start = geometry_msgs.msg.Pose2D()
      if self.pose_goal is None:
        self.pose_goal = geometry_msgs.msg.Pose2D()
      end = 0
      _x = self
      start = end
      end += 48
      (_x.pose_start.x, _x.pose_start.y, _x.pose_start.theta, _x.pose_goal.x, _x.pose_goal.y, _x.pose_goal.theta,) = _get_struct_6d().unpack(str[start:end])
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
      buff.write(_get_struct_6d().pack(_x.pose_start.x, _x.pose_start.y, _x.pose_start.theta, _x.pose_goal.x, _x.pose_goal.y, _x.pose_goal.theta))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.pose_start is None:
        self.pose_start = geometry_msgs.msg.Pose2D()
      if self.pose_goal is None:
        self.pose_goal = geometry_msgs.msg.Pose2D()
      end = 0
      _x = self
      start = end
      end += 48
      (_x.pose_start.x, _x.pose_start.y, _x.pose_start.theta, _x.pose_goal.x, _x.pose_goal.y, _x.pose_goal.theta,) = _get_struct_6d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6d = None
def _get_struct_6d():
    global _struct_6d
    if _struct_6d is None:
        _struct_6d = struct.Struct("<6d")
    return _struct_6d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rll_planning_project/CheckPathResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CheckPathResponse(genpy.Message):
  _md5sum = "a04c5033e7efda95fc3786e8d449c6e7"
  _type = "rll_planning_project/CheckPathResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool valid

"""
  __slots__ = ['valid']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       valid

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CheckPathResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.valid is None:
        self.valid = False
    else:
      self.valid = False

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
      buff.write(_get_struct_B().pack(self.valid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.valid,) = _get_struct_B().unpack(str[start:end])
      self.valid = bool(self.valid)
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
      buff.write(_get_struct_B().pack(self.valid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 1
      (self.valid,) = _get_struct_B().unpack(str[start:end])
      self.valid = bool(self.valid)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class CheckPath(object):
  _type          = 'rll_planning_project/CheckPath'
  _md5sum = '9853809de3dea14e77435e7b0de1d74a'
  _request_class  = CheckPathRequest
  _response_class = CheckPathResponse
