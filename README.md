# HC-SR501
*** The .ino file is a sample code for the PIR motion sensor that can help test and calibrate the motion sensor. ***

If you are using the motion sensor with an Arduino or any controller as showing below, you might want to have the timer delay switched to the minimum which is 3s for this HC-SR501 and you might want move the jumper to the left putting it on "Mutliple Trigger Mode" which cause the sensor to stay high till there is no motion detected then the sensor will go low after 3s.

Refer to the sensor datasheet for more help on how to set the sensor properly.

                                               ###  Diagram   ###
![alt text](https://github.com/Ish-Co/HC-SR501/blob/main/HC-SR501%20Wiring%20diagram.png)

Code 

Note: The code is so simple feel free to edit it!

'''

int ledPin = 6;             // LED pin
int pirPin = 7;             // PIR pin 
int pirStat = 0;            // PIR status

void setup() 
{
     pinMode(ledPin, OUTPUT);     //set pin 6 to OUTPUT for LED indicator
     pinMode(pirPin, INPUT);      //set pin 7 to INPUT to read the motion from the sensor
     Serial.begin(9600);          //setup the serial monitor
}

void loop()
{
     
     pirStat = digitalRead(pirPin);     //read value from the sensor 
     if (pirStat == HIGH)               //check if the value is 1 "motion detected"
     {
          digitalWrite(ledPin, HIGH);   //turn LED indicator ON
          Serial.println("ON!");        //print the a message to the serial monitor.     
     } 
     else                               //else the value from the sensor was 0 "no motion detected"
     {
          digitalWrite(ledPin, LOW);    //turn LED indicator OFF
          Serial.println("OFF!");       //print the a message to the serial monitor.    
     }
     
     delay(500);                        //This line is optional! makes it easier to read from the serial monitor.
     
} 
'''
