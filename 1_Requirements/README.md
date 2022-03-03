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

## HIGH LEVEL REQUIREMENTS
| ID | Description | Category | 
| ----- | ----- | ------- | 
|HLR01|It shall calculate the stator diameter|technical|  
|HLR02|It shall calculate the stator length|technical|
|HLR03|It shall take user input indiscriminately|technical|


## LOW LEVEL REQUIREMENTS
| ID | Description | Category | 
| ----- | ----- | ------- |
|LLR01|It shall intake valid values for calculation|technical|  
|LLR02|It shall take valid values for calculation|technical|
|LLR03|It shall be available wtih better user interface|technical|
