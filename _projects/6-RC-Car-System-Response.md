---
layout: project
title: RC Car System Response
description: Analysis of RC Car System Response
technologies: [MATLAB]
permalink: /6-RC-Car-System-Response/
---

This project is for MAE 3260: System Dynamics.  It involves dissecting an RC car and analyzing its system dynamics.  I decided to examine
its disturbance torque and system response, modeling my findings in MATLAB and eventually finding a steady state frequency, rise time, time constant, and overshoot.

<img src="{{ '/assets/images/RC-asset-1.png' | relative_url }}" alt="RC Insides" width="200" height="225">
<img src="{{ '/assets/images/RC-asset-2.png' | relative_url }}" alt="RC Circuit Board" width="200" height="225">
<img src="{{ '/assets/images/RC-asset-3.png' | relative_url }}" alt="RC Gears" width="200" height="250">

Feedback Control:
The system is an open loop system, with no feedback control.  The car takes an input signal from the remote control, uses it to dispense voltage from the battery, which powers the motors.  These motors allow the RC car to move, where it experiences a disturbance input from wheel resistance and other factors.  The result is the system output, which manifests as the final motion of the car.  There is no feedback control in this system, so the car is not adjusting any parameters to meet a final desired output.  Rather, it is taking a standard input and producing an output from that.

Disturbance Torque:
“no disturbance torque” conditions were measured when the car was held off of the ground and the wheels were allowed to spin freely.  There is probably still some disturbance torque here, but I am focused on the disturbance torque due to frictional contact with the ground.  “with disturbance torque” conditions were measured when the car was driving on the ground.  I measured wheel rotations directly, so I did not need to account for potential slippage with the ground.  These values were measured after the motor had fully ramped up in speed, at steady state.

<img src="{{ '/assets/images/RC-asset-4.png' | relative_url }}" alt="RC Disturbance Calcs" width="800" height="400">

<img src="{{ '/assets/images/RC-asset-5.png' | relative_url }}" alt="RC Disturbance Plot" width="500" height="400">
Figure 1:  We can see a decrease in wheel angular velocity when introduced to disturbance torque in the form of friction with the ground.

System Response:
To measure the system response of the RC car over time, I ran two trials of the car on the ground from rest, with full forward acceleration.  I measured the timestamp of each rotation of the wheels, and then found the difference between each rotation timestamp to find the period of each rotation.  2*pi was then divided by this value to get the frequency in radians per second of each rotation, which was then plotted vs time.  The result is a frequency vs time graph for the RC car.

<img src="{{ '/assets/images/RC-asset-6.png' | relative_url }}" alt="RC Response Plots" width="800" height="400">

Figure 2: Plots of ramp up (rotation angle vs time) and frequency response (frequency vs time).  MATLAB was used to synthesize values and generate plots.

To find the rise time for each trial, I averaged the last 5 values to find steady state.  This was 52.76 rad/s for trial 1 and 50.60 rad/s for trial 2.  These steady state values are pretty close to those found in the disturbance section above.  Then the rise time to go from 10% to 90% of steady state was found, resulting in 0.296s for trial 1 and 0.445s for trial 2.  Time constant (time for 63.2% rise) was 0.449s for trial 1 and 0.159s for trial 2.  The overshoot (using peak value vs ss for each trial) was 6.82% for trial 1 and 5.45% for trial 2.

<img src="{{ '/assets/images/RC-asset-7.png' | relative_url }}" alt="RC Response Calcs" width="600" height="300">
