#include <Wire.h>
#include <Adafruit_INA219.h>
​
Adafruit_INA219 ina219_1(0x40);
Adafruit_INA219 ina219_2(0x41);
Adafruit_INA219 ina219_3(0x44);
Adafruit_INA219 ina219_4(0x45);


​
int INA_addr = (0x40, 0x41, 0x44, 0x45);
​
void setup(void) 
{
    Serial.begin(9600);
  (ina219_1.begin());
  (ina219_2.begin());
  (ina219_3.begin());
  (ina219_4.begin());
}


void loop(void)
{
//  Read_INA219_Values();
​
  float shuntvoltage = 0;
  float busvoltage = 0;
  float current_mA = 0;
  float loadvoltage = 0;
  float power_mW = 0;
​
  shuntvoltage = ina219.getShuntVoltage_mV();
  busvoltage = ina219.getBusVoltage_V();
  current_mA = ina219.getCurrent_mA();
  loadvoltage = busvoltage + (shuntvoltage / 1000);
​
  
  Serial.print("Bus Voltage:   ");
  Serial.print(busvoltage);
  Serial.println(" V");
  Serial.print("Shunt Voltage: ");
  Serial.print(shuntvoltage);
  Serial.println(" mV");
  Serial.print("Load Voltage:  ");
  Serial.print(loadvoltage);
  Serial.println(" V");
  Serial.print("Current:       ");
  Serial.print(current_mA);
  Serial.println(" mA");
  
  Serial.println("");
}
​
    delay(1000);