
//include libraries of flowmeter and oled display

#include<FlowMeter.h>

#include "Wire.h"
#include "OakOLED.h"
OakOLED oled;
FlowMeter Meter1=FlowMeter(2);
FlowMeter Meter2=FlowMeter(3);

//creating the interupt handler for the sensor

  void Meter1ISR() {
    Meter1.count();
  }

  void Meter2ISR(){
    Meter2.count();
  }

 // Bluetooth with Baudrate 9600 , if it doesn't work we will use baudrate 34800

      void setup(){
        oled.begin();

        Serial.begin(9600);

        attachInterrupt(INT0 , Meter1ISR , RISING);
        attachInterrupt(INT1 , Meter2ISR , RISING);

        Meter1.reset();
        Meter2.reset();
        
      }

      void loop(){

         data();
      }

//setting data output that will send to bluetooth with Serial.print(data to send);
//Then setting the OLED display function to display data on OLED screen with oled.println(data to send);

 void data(){

   Meter1.tick(3000);
   Meter2.tick(3000);
   Serial.print(String(Meter1.getCurrentFlowrate()));
   Serial.print("1/m");
   Serial.print(":");
   Serial.print(String(Meter1.getTotalVolume()));
   Serial.print("L total");
   Serial.print(":");
   Serial.print(String(Meter2.getCurrentFlowrate()));
   Serial.print("1/m");
   Serial.print(":");
   Serial.print(String(Meter2.getTotalVolume()));
   Serial.print("L total:");
   Serial.println("  ");

//display data to oled screen
   oled.clearDisplay();
   oled.setTextSize(1);
   oled.setTextColor(1);
   oled.setCursor(0, 0);
   oled.println("Flow Rate");
   oled.setTextSize(2);
   oled.setCursor(10, 12);
   oled.println(Meter2.getCurrentFlowrate());
   oled.setTextSize(2);
   oled.setCursor(80, 12);
   oled.println("1/m");

   oled.setTextSize(1);
   oled.setTextColor(1);
   oled.setCursor(3, 29);
   oled.println("Total Volume");
   oled.setTextSize(2);
   oled.setTextColor(1);
   oled.setCursor(10,40 );
   oled.println(Meter2.getTotalVolume());
   oled.setCursor(80, 40);
   oled.println("lit");
   oled.display();
   delay (3000);
   
 }
   
   
   



