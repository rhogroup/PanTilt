
(cl:in-package :asdf)

(defsystem "DPPanTilt_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "SetAbsolutePositionPan" :depends-on ("_package_SetAbsolutePositionPan"))
    (:file "_package_SetAbsolutePositionPan" :depends-on ("_package"))
    (:file "Reset" :depends-on ("_package_Reset"))
    (:file "_package_Reset" :depends-on ("_package"))
    (:file "SetSpeedForPositionMovesTilt" :depends-on ("_package_SetSpeedForPositionMovesTilt"))
    (:file "_package_SetSpeedForPositionMovesTilt" :depends-on ("_package"))
    (:file "HaltMotion" :depends-on ("_package_HaltMotion"))
    (:file "_package_HaltMotion" :depends-on ("_package"))
    (:file "SetSpeedForPositionMovesPan" :depends-on ("_package_SetSpeedForPositionMovesPan"))
    (:file "_package_SetSpeedForPositionMovesPan" :depends-on ("_package"))
    (:file "SetVelocityPan" :depends-on ("_package_SetVelocityPan"))
    (:file "_package_SetVelocityPan" :depends-on ("_package"))
    (:file "ReportDynamicInfo" :depends-on ("_package_ReportDynamicInfo"))
    (:file "_package_ReportDynamicInfo" :depends-on ("_package"))
    (:file "ReportStaticInfo" :depends-on ("_package_ReportStaticInfo"))
    (:file "_package_ReportStaticInfo" :depends-on ("_package"))
    (:file "SetAbsolutePosition" :depends-on ("_package_SetAbsolutePosition"))
    (:file "_package_SetAbsolutePosition" :depends-on ("_package"))
    (:file "StartVelocityControl" :depends-on ("_package_StartVelocityControl"))
    (:file "_package_StartVelocityControl" :depends-on ("_package"))
    (:file "StartPositionControl" :depends-on ("_package_StartPositionControl"))
    (:file "_package_StartPositionControl" :depends-on ("_package"))
    (:file "SetRelativePosition" :depends-on ("_package_SetRelativePosition"))
    (:file "_package_SetRelativePosition" :depends-on ("_package"))
    (:file "SetVelocityTilt" :depends-on ("_package_SetVelocityTilt"))
    (:file "_package_SetVelocityTilt" :depends-on ("_package"))
    (:file "SetAbsolutePositionTilt" :depends-on ("_package_SetAbsolutePositionTilt"))
    (:file "_package_SetAbsolutePositionTilt" :depends-on ("_package"))
  ))