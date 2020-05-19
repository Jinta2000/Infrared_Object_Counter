# Infrared_Object_Counter
This is a project used to count the number of people entering a hall or entering somewhere. It has so many applications in many places. For example, if there is a meeting arranged in a particular hall and food is providing after the session. The number of people entered can be count using this system and the food required for this number of people can be made. So that waste of food can be decreased. Like this, there are so many applications for this. This is based on Arduino. 
# Hardware supplies
- Arduino UNO
- LCD screen 16x2 
- PIR sensor
- 10K Potentiometer 
- 220 ohm Resistor
# Software part
Arduino IDE ( should include Liquid Crystal Library)
# Arduino UNO
Arduino UNO is a microcontroller board based on ATmega 328P. It has 14 digital input/output pins, 6 analog inputs, a USB connection, a power jack and a reset button. Of the 14 digital pins 6 can be used as PWM outputs. The board is programmable with Arduino IDE via the USB cable.
- Operating Voltage : 5V
- Input voltage : 7-20V
- Flash memory : 32KB
- SRAM : 2KB
- EEPROM : 1KB 
# LCD screen
Here we are using 16x2 LCD Display. It is used for displaying the count. 16x2 means that the LCD can display 16 characters per line and has 2 lines. It is capable of displaying 32 characters. It can be interfaced easily to Arduino. Normally it has 16 pins. 
- Pin 1 –Ground -to negative pin of power supply
- Pin 2 –Vcc (power)–to positive pin of power supply (4.7 - 5.3V)
- Pin 3 –V0(contrast) –A potentiometer can be connected to this for contrast adjustment
- Pin 4 –RS (Register Select) - Selects command register when low, and data register when high
- Pin 5 –RW (Read/Write) -Low to write to the register; High to read from the register
- Pin  –E (Enable)-Sends data to data pins when a high to low pulse is given; Extra voltage push is required to execute the instruction and EN(enable) signal is used for this purpose. Usually, we make it en=0 and when we want to execute the instruction we make it high en=1 for some milliseconds. After this we again make it ground that is, en=0.
- Pin 7-14–8 bit data pins 
- Pin 15–LED Anode -to supply positive for background light
- Pin 16–LED Cathode–to supply negative for background light
# PIR sensor
A PIR-based motion detector is used to sense movement of people, animals, or other objects. A PIR sensor can detect changes in the amount of infrared radiation impinging upon it, which varies depending on the temperature and surface characteristics of the objects in front of the sensor.  When an object, such as a person, passes in front of the background, such as a wall, the temperature at that point in the sensor's field of view will rise from room temperature to body temperature, and then back again. The sensor converts the resulting change in the incoming infrared radiation into a change in the output voltage, and this triggers the detection. Objects of similar temperature but different surface characteristics may also have a different infrared emission pattern, and thus moving them with respect to the background may trigger the detector as well. It has three pins – Output, VCC and GND. The output will show HIGH when motion detected and show LOW when there is no motion.
# Circuit Diagram
https://github.com/Jinta2000/Infrared_Object_Counter/blob/master/CircuitDiagram.png
# Schematic Representation
https://github.com/Jinta2000/Infrared_Object_Counter/blob/master/IRObjectCounterSchematic_schem.png
# Working
We use Arduino UNO as microcontroller. The board is programmed to get the value from PIR sensor. If the value is HIGH(1), then count of people increased by one. If the value is LOW(0), there will be no reaction. Then the value of the count will be displayed on the LCD screen every time. If count changes then also display the new value of count. The final result got through the project is given in the video. The ball on the video indicates the each people. When we look on the LCD display we get the count
https://github.com/Jinta2000/Infrared_Object_Counter/blob/master/InfraredCounter.webm
