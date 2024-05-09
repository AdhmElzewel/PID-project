# PID-project
## PID room temprature control

In this project, we will make a simple system that is a room to control and maintain
its temperature based on some variables and physical characteristics affecting the 
system and these variables will be taken into account as feedback for the system to
control it and follow up on its operation as follows. 
 In principle, what is required is to maintain the room temperature at a certain value. 
 First, the room will be closed, because there is no loss in the temperature generated 
inside the room, and also for the provisions of the correct measurement of the 
temperature. It is actual in real life that the rooms to be controlled inside will be 
closed. 

 The room temperature will be measured by the sensor used, and if the room 
temperature measured inside the room is different from the required temperature 
value, the temperature measured will be changed by the used peltier, whether by 
cooling or heating to reach the desired 
 When the process of heating or cooling, after operating the peltier, the fan will also 
be turned on to distribute the generated heat throughout the room by moving the hot 
air inside the room, as we mentioned earlier, as it is tightly closed.

![image](https://github.com/AdhmElzewel/PID-project/assets/108629950/fd20c9d6-b817-4bfe-8377-6e01815e46c8)

video1 link : https://youtu.be/3Q4mrH6MNYs?si=YhUBrCOdq6jb6wqT
video2 link : https://youtube.com/shorts/wJK4ylzQob8?si=deJBKJgEEbZrdgOL
## The components which were used
1. The Arduino Uno:
 The Arduino Uno is an open-source microcontroller board based on the Microchip 
ATmega328P microcontroller. The board is equipped with sets of digital and analog input/output 
pins that may be interfaced to various expansion boards and other circuits. We used it as a controller

2. L298n: 
 The L298N is an integrated monolithic circuit in a 15- lead Multiwatt and PowerSO20 packages. 
It is a high voltage , high current dual full-bridge driver de-signed to accept standard TTL logic 
level sand drive inductive loads such as relays, solenoids, DC and stepping motors. 
We use it to control the fan dc motor

3. Peltier: 
 Peltier module (thermoelectric module) is a thermal control module that has both "warming" 
and "cooling" effects. By passing an electric current through the module, it is possible to change 
the surface temperature and keep it at the target temperature.

4. Dht11: 
 Dht11 used Temperature and humidity sensor.

5. LCD 
 It is a flat-panel display or other electronically modulated optical device that uses the 
lightmodulating properties. We use it to show the measured value of the temperature and 
humidity of the room. 

6. DC Fan: 
 DC fans are powered with a potential of fixed value such as the voltage of a battery. 
We used it to distribute the heat throughout the room through the movement of its feathers, 
which are responsible for moving the air.

7. Heat sink 
 a heat sink is a heat reservoir that can absorb an arbitrary amount of heat without significantly 
changing temperature. We used it, but it acts as a separator for the heat of the peltier in the outer 
face so that it is not transferred to the heat of the inner room as a result of the movement of the fan 
blades

##  mathematical solution
![image](https://github.com/AdhmElzewel/PID-project/assets/108629950/d71b9d05-7859-45bd-beca-d19008d8b6b6)

## Simulation using MATLAB before installing PID
![image](https://github.com/AdhmElzewel/PID-project/assets/108629950/fffb8e43-4062-45f1-9166-0fb584324a64)
![image](https://github.com/AdhmElzewel/PID-project/assets/108629950/b7a8ad7d-c1f2-4ef2-9e23-9d14679700d1)
![image](https://github.com/AdhmElzewel/PID-project/assets/108629950/97c28d87-dd2e-4022-a823-57cc72c135a5)
![image](https://github.com/AdhmElzewel/PID-project/assets/108629950/49030bfa-f89e-4c8a-bb5e-ed9476949f2d)
![image](https://github.com/AdhmElzewel/PID-project/assets/108629950/84e61a47-d410-47e2-98b9-4f0777173711)
![image](https://github.com/AdhmElzewel/PID-project/assets/108629950/69fb37cd-692b-4152-8a69-36390a765051)
![image](https://github.com/AdhmElzewel/PID-project/assets/108629950/21a5cbe1-1b6b-4014-bd9e-7d16468bc18b)
![image](https://github.com/AdhmElzewel/PID-project/assets/108629950/1afc6987-a904-440e-befe-d26bd71bfe6f)



