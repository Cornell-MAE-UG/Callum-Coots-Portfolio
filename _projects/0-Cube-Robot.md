---
layout: project
title: Cube Robot
description: Cube Craze Robot Competition
technologies: [Mechatronics, Circuit Integration, Arduino, C, Binary, 3D Printing, Fusion]
permalink: /0-Cube-Robot/
---

This robot was designed for ASML's annual Cube Craze robot competition. ASML is the corporate sponsor for my Mechatronics class, and each year, every student in the class participates in the Cube Craze competition.  The objective is to design a robot within size, material, power, and budget constraints that when placed in the arena, can collect more 1-inch cubes than the opposing robot in 60 seconds. The robot must be fully autonomous once released (no remote control). My team, Team Clanker, was this year's champion, winning out of 62 teams, each with 3 members.

<img src="{{ '/assets/images/Clanker-asset-4.png' | relative_url }}" alt="Clanker ASML Photo" width="800" height="500">

Our robot followed an unorthodox strategy, which prioritized speed above all else. To achieve this, we removed all sensors from the robot and wired our 9V battery (which was intended for powering solely the arduino) in series with our 6V battery pack (which was intended for powering solely the motors).  The result was an overclocked 15V power source that we used to power our arduino and motors, resulting in a higher speed robot than any of our competitors. We also implemented a push button to start our robot, whereas every other group used the reset button on their arduino boards. Since our code was already running prior to start, we were able to begin movement immediately, avoiding a ~1.5 second delay.

<img src="{{ '/assets/images/Clanker-asset-2.png' | relative_url }}" alt="Clanker Trophy-robot photo" width="500" height="800">

The biggest challenge with this design was ensuring that our components (motors, arduino) did not degrade or brownout since we were running a higher voltage through them than they were rated for. This was a calculated risk, and was what gave us an edge over the competition. In order to prevent voltage spikes that could cause potential brownouts, we included 0.01 microfarad capacitors across the terminals of both motors to "smooth" the incoming voltage.  We also minimized runtime, opting to only run our robot for about 5 seconds of the alloted 60 to reduce load on our components.

<img src="{{ '/assets/images/Clanker-asset-1.png' | relative_url }}" alt="Clanker robot photo" width="500" height="800">

Our cube collection system and movement strategy were very simple. We 3D printed collection arms for our robot that would be able to pick up cubes and retain them as our robot drove over them.  They had no moving parts because none were needed. Unlike most teams, our movement did not rely on color sensors. Instead, we hard-coded a movement path into the robot, which swept across the cube-filled region of the arena one time and then stopped in the corner. This simple path, combined with the superior speed of our robot, allowed us to collect more than half of the 20 cubes before the opponent even collected one, almost every time.

<img src="{{ '/assets/images/Clanker-asset-3.png' | relative_url }}" alt="Clanker team photo" width="800" height="500">

Competition Recap:
We first competed in an 8-team group stage. After finishing first in the group stage with a record of 6-0-1, we entered a 16-team single-elimination bracket. We advanced through the bracket to the finals, where, after two ties, we emerged victorious.
Final Record:  11 wins, 0 losses, 3 ties

A video of one of our competition runs, a circuit schematic, and the ino file for our code are below:

<iframe width="560" height="315" src="https://www.youtube.com/embed/1bhQ_YkF6kU?si=5woaqs8OnCWINB34" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

<img src="{{ '/assets/images/Clanker-asset-5.png' | relative_url }}" alt="Clanker circuit diagram" width="500" height="800">

<img src="{{ '/assets/images/Clanker-asset-6.png' | relative_url }}" alt="Clanker code" width="400" height="800">

