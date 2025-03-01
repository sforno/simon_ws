;; Auto-generated. Do not edit!


(when (boundp 'robot_localization_cust::GetState)
  (if (not (find-package "ROBOT_LOCALIZATION_CUST"))
    (make-package "ROBOT_LOCALIZATION_CUST"))
  (shadow 'GetState (find-package "ROBOT_LOCALIZATION_CUST")))
(unless (find-package "ROBOT_LOCALIZATION_CUST::GETSTATE")
  (make-package "ROBOT_LOCALIZATION_CUST::GETSTATE"))
(unless (find-package "ROBOT_LOCALIZATION_CUST::GETSTATEREQUEST")
  (make-package "ROBOT_LOCALIZATION_CUST::GETSTATEREQUEST"))
(unless (find-package "ROBOT_LOCALIZATION_CUST::GETSTATERESPONSE")
  (make-package "ROBOT_LOCALIZATION_CUST::GETSTATERESPONSE"))

(in-package "ROS")





(defclass robot_localization_cust::GetStateRequest
  :super ros::object
  :slots (_time_stamp _frame_id ))

(defmethod robot_localization_cust::GetStateRequest
  (:init
   (&key
    ((:time_stamp __time_stamp) (instance ros::time :init))
    ((:frame_id __frame_id) "")
    )
   (send-super :init)
   (setq _time_stamp __time_stamp)
   (setq _frame_id (string __frame_id))
   self)
  (:time_stamp
   (&optional __time_stamp)
   (if __time_stamp (setq _time_stamp __time_stamp)) _time_stamp)
  (:frame_id
   (&optional __frame_id)
   (if __frame_id (setq _frame_id __frame_id)) _frame_id)
  (:serialization-length
   ()
   (+
    ;; time _time_stamp
    8
    ;; string _frame_id
    4 (length _frame_id)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; time _time_stamp
       (write-long (send _time_stamp :sec) s) (write-long (send _time_stamp :nsec) s)
     ;; string _frame_id
       (write-long (length _frame_id) s) (princ _frame_id s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; time _time_stamp
     (send _time_stamp :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _time_stamp :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; string _frame_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _frame_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass robot_localization_cust::GetStateResponse
  :super ros::object
  :slots (_state _covariance ))

(defmethod robot_localization_cust::GetStateResponse
  (:init
   (&key
    ((:state __state) (make-array 15 :initial-element 0.0 :element-type :float))
    ((:covariance __covariance) (make-array 225 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _state __state)
   (setq _covariance __covariance)
   self)
  (:state
   (&optional __state)
   (if __state (setq _state __state)) _state)
  (:covariance
   (&optional __covariance)
   (if __covariance (setq _covariance __covariance)) _covariance)
  (:serialization-length
   ()
   (+
    ;; float64[15] _state
    (* 8    15)
    ;; float64[225] _covariance
    (* 8    225)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64[15] _state
     (dotimes (i 15)
       (sys::poke (elt _state i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[225] _covariance
     (dotimes (i 225)
       (sys::poke (elt _covariance i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64[15] _state
   (dotimes (i (length _state))
     (setf (elt _state i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[225] _covariance
   (dotimes (i (length _covariance))
     (setf (elt _covariance i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;;
   self)
  )

(defclass robot_localization_cust::GetState
  :super ros::object
  :slots ())

(setf (get robot_localization_cust::GetState :md5sum-) "b143410e9c7f7be208eedf8f691d8069")
(setf (get robot_localization_cust::GetState :datatype-) "robot_localization_cust/GetState")
(setf (get robot_localization_cust::GetState :request) robot_localization_cust::GetStateRequest)
(setf (get robot_localization_cust::GetState :response) robot_localization_cust::GetStateResponse)

(defmethod robot_localization_cust::GetStateRequest
  (:response () (instance robot_localization_cust::GetStateResponse :init)))

(setf (get robot_localization_cust::GetStateRequest :md5sum-) "b143410e9c7f7be208eedf8f691d8069")
(setf (get robot_localization_cust::GetStateRequest :datatype-) "robot_localization_cust/GetStateRequest")
(setf (get robot_localization_cust::GetStateRequest :definition-)
      "time time_stamp
string frame_id
---

float64[15] state


float64[225] covariance

")

(setf (get robot_localization_cust::GetStateResponse :md5sum-) "b143410e9c7f7be208eedf8f691d8069")
(setf (get robot_localization_cust::GetStateResponse :datatype-) "robot_localization_cust/GetStateResponse")
(setf (get robot_localization_cust::GetStateResponse :definition-)
      "time time_stamp
string frame_id
---

float64[15] state


float64[225] covariance

")



(provide :robot_localization_cust/GetState "b143410e9c7f7be208eedf8f691d8069")


