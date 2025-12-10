---
layout: project
title: RC Car System Response
description: Analysis of RC Car System Response
technologies: [MATLAB]
permalink: /6-RC-Car-System-Response/
---

This project is for MAE 3260: System Dynamics.  It involves dissecting an RC car and analyzing its system dynamics.  I decided to examine
its disturbance torque and system response, modeling my findings in MATLAB and eventually finding a steady state frequency, rise time, time constant, and overshoot.

Feedback Control:
The system is an open loop system, with no feedback control.  The car takes an input signal from the remote control, uses it to dispense voltage from the battery, which powers the motors.  These motors allow the RC car to move, where it experiences a disturbance input from wheel resistance and other factors.  The result is the system output, which manifests as the final motion of the car.  There is no feedback control in this system, so the car is not adjusting any parameters to meet a final desired output.  Rather, it is taking a standard input and producing an output from that.

Disturbance Torque:
“no disturbance torque” conditions were measured when the car was held off of the ground and the wheels were allowed to spin freely.  There is probably still some disturbance torque here, but we are focused on the disturbance torque due to frictional contact with the ground.  “with disturbance torque” conditions were measured when the car was driving on the ground.  We measured wheel rotations directly, so we did not need to account for potential slippage with the ground.  These values were measured after the motor had fully ramped up in speed, at steady state.

