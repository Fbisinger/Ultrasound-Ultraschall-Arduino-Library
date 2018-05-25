/* ============================================
Arduino Ultraschall - Sensor Bibliothek
    2018 F. Bisinger
Diese Bibliothek vereinfacht das Auslesen eines
Ultraschallsensors.
===============================================
*/

#include "Ultraschall.h"
Ultraschall Mein_Sensor; /*an Stelle von "Mein_Sensor" kann beliebiger Name stehen (dort kann der
                            Sensor benannt werden, dies muss jedoch auch im .getEntfernung - Befehl beachtet werden)*/
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(Mein_Sensor.getEntfernung(3,4));/* Pins nach folgendem Schema: xyz.getEntfernung(triggerPin,echoPin)*/
  Serial.println(" cm");
  delay(100);
}
