#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
//    LiquidCrystal lcd(RS, enable, d4, d5, d6, d7); //
//
// The parameters to this initialisation function are the pins on 
// the Arduino board that are connected to the pins on the LCD Module, 
// i.e., the pins on the right column in the table above.
//
// The first parameter is the “RS” — which, literally, means 
//      “Register Select”, and which is used to tell the
//       module if “that which comes over the bus (the set of data pins)
//       corresponds to “data to print” or “control instructions”
//
// The second parameter is “Enable Signal"
//       the remaining parameters are the 4 digital pins forming the bus.
//
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int i = 0;
void setup() {
      // set up the LCD's number of columns and rows:
      lcd.begin(16, 2);
}

void loop() {
      lcd.setCursor(0, 0);
      lcd.print("LORDMarciXD");
      lcd.setCursor(0, 1);
      lcd.print(i);
      i++;
}
