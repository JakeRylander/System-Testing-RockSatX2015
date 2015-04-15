//Simple Looped Code for reading the Voltage recieved from the Thermocouplers

void setup() {

  #define thermo1 A0 //Thermo on Analog A0
  #define thermo2 A1 //Thermo on Analog A1
  Serial.begin(19200); //Displays Serial Data on Arduino IDE through 19200
  
}
void loop() {
  
  Serial.println("Current Voltage is:");
  Serial.print("Thermo1: ");
  Serial.println(analogRead(thermo1));
  Serial.print("Thermo2: ");
  Serial.println(analogRead(thermo2));
  delay(1000); //Waits for 1 second before reading again (1000 = 1sec)
}
