---
layout: project
title: Torque Wrench FEM Analysis
description: FEM Analysis of CAD Design using Ansys
technologies: [CAD, Ansys, FEM, MATLAB]
permalink: /5-Torque-Wrench-FEM-Analysis/
---
This is a project for my Mechanics of Materials class (MAE3270).  It entails designing a torque wrench in CAD, finding strain gauge output, max 
normal stress, tip deflection, and factors of safety for strength, crack growth, and fatigue via calculation.  Then, the CAD model is analyzed in Ansys, 
where the same values are extracted and compared to the hand-calculated values.  The final design must have a 1 mV/V strain gauge output, a safety 
factor for strength of at least 4, a safety factor for crack growth of at least 2 (crack depth = 0.04 in), and a safety factor for fatigue of at 
least 1.5 (10e6 cycles).  The results are shown below.

Base design concept:
<img src="{{ '/assets/images/TW-asset-6.png' | relative_url }}" alt="TW Drawing" width="300" height="200">

1 - CAD Model:
<img src="{{ '/assets/images/TW-asset-1.png' | relative_url }}" alt="TW CAD" width="800" height="533">
Dimensions:
h = 0.63246 in.            b = 0.5 in.             L = 16 in.             c = 1.0 in.

2 - Material Used and Relevant Properties:

The material used is Titanium, alpha-beta alloy, Ti-6Al-4V, annealed.  It has the following properties, which were retrieved from the Granta database:
<img src="{{ '/assets/images/TW-asset-7.png' | relative_url }}" alt="TW Material Vals" width="800" height="67">

3 - Diagram communicating how loads and boundary conditions are applied to FEM model:
<img src="{{ '/assets/images/TW-asset-2.png' | relative_url }}" alt="TW Loading" width="800" height="400">
In this figure, the yellow region is the head of the torque wrench.  I gave it a stationary boundary condition by setting its displacement to 
zero in x, y, and z directions.  The red face is where the load is applied to the handle of the torque wrench.  It was given a 37.5 lbf load 
(M=600 in-lbf / L=16in) in the y direction.  This is the load direction and rated force for the wrench to be used in real life.

4 - Deflection Diagram:
<img src="{{ '/assets/images/TW-asset-3.png' | relative_url }}" alt="TW Deflection" width="800" height="400">

5 - Normal Strain Contours in Strain Gauge Direction:
<img src="{{ '/assets/images/TW-asset-4.png' | relative_url }}" alt="TW Normal Strain" width="800" height="400">

6 - Contour Plot of Maximum Principle Stress:
<img src="{{ '/assets/images/TW-asset-5.png' | relative_url }}" alt="TW Principle Stress" width="800" height="400">

7 - Results from FEM calculation showing maximum normal stress, load point deflection, and strains at the strain gauge locations:
<img src="{{ '/assets/images/TW-asset-8.png' | relative_url }}" alt="TW FEM Results" width="800" height="80">
<img src="{{ '/assets/images/TW-asset-9.png' | relative_url }}" alt="TW FEM Safety" width="650" height="300">

8 - Torque wrench sensitivity in mV/V using strains from the strain gauge:

Since our strain is 0.0010138, we can reach units of mV/V by multiplying by a factor of 1000.  The resulting torque wrench sensitivity is:
Vo=1.0138 mV/V
This satisfies our requirement of Vo1 mV/V

9 - Strain gauge selected:

The strain gauge selected for this design is the Omega SGD-2/350-LY41, which is a half-bridge strain gauge with dimensions 7.6 mm x 5.8 mm (0.30 in x 0.23 in).  This gauge fits on the torque wrench, and is capable of measuring a strain of up to 10 Vrms, which is more than enough for the wrench’s rated torque.  The cost is $121.14.

10 - Index:
MATLAB Code for Calculations:
<img src="{{ '/assets/images/TW-asset-11.png' | relative_url }}" alt="TW Code" width="800" height="400">

Results:

<img src="{{ '/assets/images/TW-asset-10.png' | relative_url }}" alt="TW Results" width="400" height="800">
