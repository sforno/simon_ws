; Auto-generated. Do not edit!


(cl:in-package nav2d_navigator-msg)


;//! \htmlinclude ExploreResult.msg.html

(cl:defclass <ExploreResult> (roslisp-msg-protocol:ros-message)
  ((final_pose
    :reader final_pose
    :initarg :final_pose
    :type geometry_msgs-msg:Pose2D
    :initform (cl:make-instance 'geometry_msgs-msg:Pose2D)))
)

(cl:defclass ExploreResult (<ExploreResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ExploreResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ExploreResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name nav2d_navigator-msg:<ExploreResult> is deprecated: use nav2d_navigator-msg:ExploreResult instead.")))

(cl:ensure-generic-function 'final_pose-val :lambda-list '(m))
(cl:defmethod final_pose-val ((m <ExploreResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader nav2d_navigator-msg:final_pose-val is deprecated.  Use nav2d_navigator-msg:final_pose instead.")
  (final_pose m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ExploreResult>) ostream)
  "Serializes a message object of type '<ExploreResult>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'final_pose) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ExploreResult>) istream)
  "Deserializes a message object of type '<ExploreResult>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'final_pose) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ExploreResult>)))
  "Returns string type for a message object of type '<ExploreResult>"
  "nav2d_navigator/ExploreResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ExploreResult)))
  "Returns string type for a message object of type 'ExploreResult"
  "nav2d_navigator/ExploreResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ExploreResult>)))
  "Returns md5sum for a message object of type '<ExploreResult>"
  "9b03b05e2f5c62e96e4cec4715bf432f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ExploreResult)))
  "Returns md5sum for a message object of type 'ExploreResult"
  "9b03b05e2f5c62e96e4cec4715bf432f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ExploreResult>)))
  "Returns full string definition for message of type '<ExploreResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%geometry_msgs/Pose2D final_pose~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ExploreResult)))
  "Returns full string definition for message of type 'ExploreResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%geometry_msgs/Pose2D final_pose~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ExploreResult>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'final_pose))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ExploreResult>))
  "Converts a ROS message object to a list"
  (cl:list 'ExploreResult
    (cl:cons ':final_pose (final_pose msg))
))
