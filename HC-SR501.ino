//----------------------------
//Author      : Ismail Sghir
//Last updated: 12/25/2020
//----------------------------

int ledPin = 6;            // LED pin
int pirPin = 7;            // PIR pin 
int pirStat = 0;           // PIR status

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
