#Smart Water Flow Meter

**As water consumption and wastage increases day by day, water scarcity has become a growing concern around the globe. While some irresponsible people are overusing water and wasting it daily, a large population remain deprived of safe drinking water. This problem is caused by the irregular distribution of water.**

*To deal with this, we need a solution that gives data about daily and monthly water consumption of each area and home to the government to enable proper water distribution. Good news is we have the solution now.*

*In this project, we are going to make a smart water meter that measures our daily water usage and provides live data on our phone that is connected to a database, which can be accessed by the government.*

**To start the project, we would require some components.**

*Components Required:*
**Water flow meter(Recommended FS400)**
**Arduino pro mini(5V and 16 MHz)**
**Bluetooth HC 05**
**Programmer (Arduino UNO/FTDI programmer )**
**OLED SSD 1306**
**Water Pipe(according to your sensor inlet diameter)**
**Water to tap connector**
**smartphone for using the app**

*NOTE: I have used Arduino pro mini to make the project small and easy, you can also use Arduino UNO for this project. Code and connection remain same for both, it’s all about your choice.*

*Now we need to connect the components*

*Connections*
**Arduino Pro Mini Pins	Components Pins**
**5V	         VCC of Bluetooth**
**GND	      GND of Bluetooth**
**RXI	         TX of Bluetooth**
**TX0	        RX of Bluetooth**
**VCC	        OLED VCC**
**GND	       OLED GND**
**A4(SDA)	    OLED SDA**
**A5(SCL)	      OLED SCL**

*connect Arduino Pro Mini as follow:-*

**Arduino Uno	          Arduino Pro Mini**
**Rx	                               Rx1**
**Tx	                               Tx0**
**Gnd                           	 Gnd**
**5V                           	       VCC**
**Reset	                           Reset**

*MORE INTEGARTION OF THIS HARDWARE CODE WITH A FULLY FUNCTIONAL APP(software)  WHICH*
  *TAKES USERNAME AND PASSWORD AS AUTHENTICATION AND AUTHORIZE THE USER TO USE THE APP TO REDUCE PERILIOUS USE OF THE APP IS TO BE DONE*
  **AFTER FIREBASE AUTHENTICATION AND AUTHORIZATION USE OF FIREBASE DATABASE TO STORE INFO ABOUT USERS WATER USAGE, WHICH CAN BE LATER FETCHED TO GOV BY SOME API OR CAN BE CONTROLLED BY SOME MORE FUNCTIONALITY IN BOTH HARDWARE AND APP(SOFTWARE ) PART**   


  
  **BY ADOBE XD WE CAN DECORATE THE APP TO MORE USER FRIENDLY EXPERIENCE
  **

