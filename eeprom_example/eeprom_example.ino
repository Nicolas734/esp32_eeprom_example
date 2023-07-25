#include <EEPROM.h>

#define EEPROM_SIZE 512

int address = 0;
int value;

void setup() {
  Serial.begin(115200);
  Serial.println("Rodando...");
  EEPROM.begin(EEPROM_SIZE);

}

void readEeprom(){
  value = EEPROM.read(address);
  Serial.print("Valor salvo na EEPROM: ");
  Serial.println(value);
}

void incrementValue(){
  value = value + 10;
  EEPROM.write(address, value);
  EEPROM.commit();
}

void loop() {
  readEeprom();
  incrementValue();
  delay(1000);
}
