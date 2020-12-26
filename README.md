# HC-SR501
*** The .ino file is a sample code for the PIR motion sensor that can help test and calibrate the motion sensor. ***

If you are using the motion sensor with an Arduino or any controller as showing below, you might want to have the timer delay switched to the minimum which is 3s for this HC-SR501 and you might want move the jumper to the left putting it on "Mutliple Trigger Mode" which cause the sensor to stay high till there is no motion detected then the sensor will go low after 3s.

Refer to the sensor datasheet for more help on how to set the sensor properly.

                                               ###  Diagram   ###
![alt text](https://github.com/Ish-Co/HC-SR501/blob/main/HC-SR501%20Wiring%20diagram.png)


                                               ###    Code    ###
                                Note: The code is so simple feel free to edit it!

![alt text](https://github.com/Ish-Co/HC-SR501/blob/main/HC-SR501.ino)

