# M1_InductionMotor_Utility
The main objective of the project work is to design and optimize suitable motor defining the desired torque-speed-efficiency map, adapting its performance to the hydraulic characteristics of the water pump or electric vehicle.

## Main Objective of this activity
A basic calculation is done for calculating diameter and length of the induction machine and also subsequently calculating the speed of the machine as well.
This project helps in bridging the time taken to calculate the dimensions manually and brings a new innovative idea among the colleagues as well.
# Design of Three phase Induction Motor with Premium efficiency standards

## Introduction
With the rising costs of energy and the substantial concerns
about global C02 emissions, achieving the highest possible
motor system efficiency has become a critical priority.
Subsequently, stringent energy efficiency standards are being
implemented by several countries to introduce energy efficient
motors for energy savings.
The main objective of the project work is to design and optimize suitable motor defining the desired torque-speed-efficiency map,
adapting its performance to the hydraulic characteristics of the water pump or electric vehicle. 
Once the efficiency is known, an initial motor reference torque-speed-efficiency map is defined according to the objective motor performance, 
including the distribution of power losses and the power rating of the selected application.
The designer has full freedom to define the efficiency levels and distribution along the torque-speed map. 

## Research
The design optimization algorithm achieves the motor characteristics which adjust as much as possible to the defined performance using Altair flux quick motor. 
This project also uses ultra-fast finite element analysis by applying magneto-static computations and a time-space conversion to compute the iron losses,
reducing the computational requirements using Altair flux.
The torque-speed-efficiency map is calculated by applying a direct-quadrature electrical model.
The objective function uses a novel image comparison technique that allows comparing the similarity between the objective and optimized maps. 

## SWOT Analysis

### Strength

International Efficiency (IE) is a new trend around the world in describing the energy efficiency of motors. The IE classes IE1 and IE2 are well developed, while the IE4 is under preparation. The classification method allows for further improvement in the energy efficiency of motors.

### Weakness

Very little accurate and to-the point availability of research/data makes it difficult to proceed.

### Opportunities

According to the International Energy Agency (IEA), electric motors account for 40% of total global electricity consumption, far more than lighting, a far better-known culprit, which weighs in at just 19%. Industry is another major global energy consumer and the electric motors used in industrial plants typically consume 65 to 80% of total plant electricity. 
In the last few years, new efficiency requirements for induction motors have been imposed. Therefore electrical machines manufacturers have had to redefine the design criteria in order to reduce losses aiming to achieve the efficiency values established by the IE2 and IE3 standard categories according to the IEC. Given that, in the near future, an increasing demand regarding efficiency (IE4 and IE5 categories) is expected, it would be appropriate to seek new alternatives to further reduce losses in induction motors.

### Threats

Over-loading, single phasing, unbalanced supply voltage, locked rotor, phase reversal, ground faults, and under/over voltage are some of the threats that a designer might face while implementing all the calculations and data into the software.

# Behaviour Diagram

## FlowChart

![flowdiainducmotor](https://user-images.githubusercontent.com/98945487/152674664-ddbe7d58-19de-440f-8bbb-f9480f89efe1.JPG)

# TestPlan And Output

## High Level Test Plan
A standard 11 kW, 4-pole, 415 Y, 50Hz, 3 phase squirrel cage induction motor was chosen as the test motor. It is a commercial motor with aluminium rotor cage and standard electrical steel. The nominal efficiency value for an IE3 motor of this rating was 9l.9%. The required nominal efficiency value for an IE4 motor of the same rating is 93.3%. The required nominal efficiency value for an IE4 motor of the same rating is 93.3 %. Hence we need to increase the efficiency by 1.4 %. This increase in efficiency will reduce the running costs significantly. 

## Low Level Test Plan
As a first step, initial readings are taken of the standard motor to have base parameters and values set to help us track our progress in increasing the efficiency of the motor. The simulated model of the standard IE3 motor was generated in Altair Fluxmotor software using the parameters calculated using drawings and motor design calculations. Some of the parameters are shown in the table along with the manual calculations done for the standard motor. 

## PDLC Activity Based Learning
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/3b341315872940b5b04c3c8cdcb155ce)](https://www.codacy.com/gh/abhishek25kumar/M1_InductionMotor_Utility/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=abhishek25kumar/M1_InductionMotor_Utility&amp;utm_campaign=Badge_Grade)

![Code grade](https://api.codiga.io/project/31079/score/svg)      ![Code grade](https://api.codiga.io/project/31079/status/svg)
#### Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Architecture`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Testplan`      | Documents with test plans and procedures

