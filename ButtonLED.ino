int buttonPin = 2; 
int ledPin1 = 13;  
int ledPin2 = 12;  
bool lampOn = false;    

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == 0) {
    delay(50); 
    if (!lampOn) {
      lampOn = true;
      digitalWrite(ledPin1, 1);
      digitalWrite(ledPin2, 1);
    } else {
      lampOn = false;
      digitalWrite(ledPin1, 0);
      digitalWrite(ledPin2, 0);
    }
    while (digitalRead(buttonPin) == 0) {
    }
  }
}
