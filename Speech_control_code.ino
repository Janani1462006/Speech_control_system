char command;

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);  // Light (Yellow LED)
  pinMode(9, OUTPUT);  // Fan (DC Motor)
  Serial.println("System Ready. Enter 1-4 to control devices.");
}

void loop() {
  if (Serial.available()) {
    command = Serial.read();

    if (command == '1') {
      digitalWrite(8, HIGH);   // Light ON
      Serial.println("Light is ON");
    }
    else if (command == '2') {
      digitalWrite(8, LOW);    // Light OFF
      Serial.println("Light is OFF");
    }
    else if (command == '3') {
      digitalWrite(9, HIGH);   // Fan ON
      Serial.println("Fan is ON");
    }
    else if (command == '4') {
      digitalWrite(9, LOW);    // Fan OFF
      Serial.println("Fan is OFF");
    }
    else {
      Serial.println("Invalid Command. Use 1-4.");
    }
  }
}
