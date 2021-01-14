#include <BleKeyboard.h>
//Se the name of the bluetooth keyboard (that shows up in the bluetooth menu of your device)
BleKeyboard bleKeyboard("STEEMDEK");

const int buttonPin01 = 18;
const int buttonPin02 = 22;
const int buttonPin03 = 23;
const int buttonPin04 = 25;
const int buttonPin05 = 26;
const int buttonPin06 = 13;
const int buttonPin07 = 21;
const int buttonPin08 = 19;

//Set the old button state to be LOW/false; which means not pressed
boolean oldPinState01 = LOW;
boolean oldPinState02 = LOW;
boolean oldPinState03 = LOW;
boolean oldPinState04 = LOW;
boolean oldPinState05 = LOW;
boolean oldPinState06 = LOW;
boolean oldPinState07 = LOW;
boolean oldPinState08 = LOW;

void setup() {
  //Start the Serial communication (with the computer at 115200 bits per second)
  Serial.begin(115200);
  //Send this message to the computer
  Serial.println("Starting BLE work!");
  //Begin the BLE keyboard/start advertising the keyboard (so phones can find it)
  bleKeyboard.begin();
  //Make the button pin an INPUT_PULLDOWN pin, which means that it is normally LOW, untill it is pressed/ connected to the 3.3V
  pinMode(buttonPin01, INPUT_PULLDOWN);
  pinMode(buttonPin02, INPUT_PULLDOWN);
  pinMode(buttonPin03, INPUT_PULLDOWN);
  pinMode(buttonPin04, INPUT_PULLDOWN);
  pinMode(buttonPin05, INPUT_PULLDOWN);
  pinMode(buttonPin06, INPUT_PULLDOWN);
  pinMode(buttonPin07, INPUT_PULLDOWN);
  pinMode(buttonPin08, INPUT_PULLDOWN);
}

void loop() {

  if (bleKeyboard.isConnected()) {
    //if the keyboard is connected to a device
    if (digitalRead(buttonPin01) == HIGH) {
      //If the button pin is pressed (since it is pulled down, it is pressed when it is high
      if (oldPinState01 == LOW) {
        //if the old Pin state was LOW and the button pin is HIGH than...
        //send key stroke
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_F1);
        delay(100);
        bleKeyboard.releaseAll();
      }
      oldPinState01 = HIGH;
    } else {
      oldPinState01 = LOW;
    }

    if (digitalRead(buttonPin02) == HIGH) {
      //If the button pin is pressed (since it is pulled down, it is pressed when it is high
      if (oldPinState02 == LOW) {
        //if the old Pin state was LOW and the button pin is HIGH than...
        //send key stroke
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_F2);
        delay(100);
        bleKeyboard.releaseAll();
      }
      oldPinState02 = HIGH;
    } else {
      oldPinState02 = LOW;
    }


    if (digitalRead(buttonPin03) == HIGH) {
      //If the button pin is pressed (since it is pulled down, it is pressed when it is high
      if (oldPinState03 == LOW) {
        //if the old Pin state was LOW and the button pin is HIGH than...
        //send key stroke
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_F3);
        delay(100);
        bleKeyboard.releaseAll();
      }
      oldPinState03 = HIGH;
    } else {
      oldPinState03 = LOW;
    }

    if (digitalRead(buttonPin04) == HIGH) {
      //If the button pin is pressed (since it is pulled down, it is pressed when it is high
      if (oldPinState04 == LOW) {
        //if the old Pin state was LOW and the button pin is HIGH than...
        //send key stroke
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_F4);
        delay(100);
        bleKeyboard.releaseAll();
      }
      oldPinState04 = HIGH;
    } else {
      oldPinState04 = LOW;
    }

    if (digitalRead(buttonPin05) == HIGH) {
      //If the button pin is pressed (since it is pulled down, it is pressed when it is high
      if (oldPinState05 == LOW) {
        //if the old Pin state was LOW and the button pin is HIGH than...
        //send key stroke
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_F5);
        delay(100);
        bleKeyboard.releaseAll();
      }
      oldPinState05 = HIGH;
    } else {
      oldPinState05 = LOW;
    }

    if (digitalRead(buttonPin06) == HIGH) {
      //If the button pin is pressed (since it is pulled down, it is pressed when it is high
      if (oldPinState06 == LOW) {
        //if the old Pin state was LOW and the button pin is HIGH than...
        //send key stroke
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_F6);
        delay(100);
        bleKeyboard.releaseAll();
      }
      oldPinState06 = HIGH;
    } else {
      oldPinState06 = LOW;
    }

    if (digitalRead(buttonPin07) == HIGH) {
      //If the button pin is pressed (since it is pulled down, it is pressed when it is high
      if (oldPinState07 == LOW) {
        //if the old Pin state was LOW and the button pin is HIGH than...
        //send key stroke
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_F7);
        delay(100);
        bleKeyboard.releaseAll();
      }
      oldPinState07 = HIGH;
    } else {
      oldPinState07 = LOW;
    }

    if (digitalRead(buttonPin08) == HIGH) {
      //If the button pin is pressed (since it is pulled down, it is pressed when it is high
      if (oldPinState08 == LOW) {
        //if the old Pin state was LOW and the button pin is HIGH than...
        //send key stroke
        bleKeyboard.press(KEY_LEFT_CTRL);
        bleKeyboard.press(KEY_F8);
        delay(100);
        bleKeyboard.releaseAll();
      }
      oldPinState08 = HIGH;
    } else {
      oldPinState08 = LOW;
    }
  }
  delay(10);
}
