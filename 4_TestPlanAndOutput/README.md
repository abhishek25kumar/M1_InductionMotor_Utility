# TestPlan And Output

## High Level Test Plan
A standard 11 kW, 4-pole, 415 Y, 50Hz, 3 phase squirrel cage induction motor was chosen as the test motor. It is a commercial motor with aluminium rotor cage and standard electrical steel. The nominal efficiency value for an IE3 motor of this rating was 9l.9%. The required nominal efficiency value for an IE4 motor of the same rating is 93.3%. The required nominal efficiency value for an IE4 motor of the same rating is 93.3 %. Hence we need to increase the efficiency by 1.4 %. This increase in efficiency will reduce the running costs significantly. 



## HIGH LEVEL REQUIREMENTS
| ID | Description | Category | 
| ----- | ----- | ------- | 
|HLR01|It shall calculate the stator diameter|technical|  
|HLR02|It shall calculate the stator length|technical|
|HLR03|It shall take user input indiscriminately|technical|
  


## Low Level Test Plan
As a first step, initial readings are taken of the standard motor to have base parameters and values set to help us track our progress in increasing the efficiency of the motor. The simulated model of the standard IE3 motor was generated in Altair Fluxmotor software using the parameters calculated using drawings and motor design calculations. Some of the parameters are shown in the table along with the manual calculations done for the standard motor. 




## LOW LEVEL REQUIREMENTS
| ID | Description | Category | 
| ----- | ----- | ------- |
|LLR01|It shall intake valid values for calculation|technical|  
|LLR02|It shall take valid values for calculation|technical|
|LLR03|It shall be available wtih better user interface|technical|


## Test Plan Input

1) Number of phases=
3

2) Power in KW=
11

3) Voltage in volts=
400

4) Frequency on hz=
50

5) Number of poles=
4

6) Bav in Wb/m2=
0.45

7) ac in a/m=
20000

8) Winding factor=
0.955

9) Power facot=
0.9

10) eff of m/c=
0.916

11) iron factor=
1.5


## Test Plan Output

 THE DIAMETER OF THE INDUCTION MOTOR = x mtr 

 THE NET LENGTH OF THE INDUCTION MOTOR = y mtr
