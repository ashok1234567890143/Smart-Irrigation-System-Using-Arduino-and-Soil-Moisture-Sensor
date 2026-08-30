const int soilSensorPin = A0;
const int relayPin = 7;

const int greenLED = 5;
const int redLED = 6;

// Calibrate these values for your sensor
const int DRY_THRESHOLD = 700;
const int WET_THRESHOLD = 450;

bool pumpState = false;

void setup() {
  Serial.begin(9600);

  pinMode(relayPin, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  // Pump OFF initially
  digitalWrite(relayPin, HIGH);

  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, LOW);

  Serial.println("Smart Irrigation System Started");
}

void loop() {

  int soilValue = analogRead(soilSensorPin);

  Serial.print("Soil Sensor Value: ");
  Serial.println(soilValue);

  // Soil is dry
  if (soilValue > DRY_THRESHOLD) {

    pumpState = true;

    digitalWrite(relayPin, LOW);

    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);

    Serial.println("Soil is DRY - Pump ON");
  }

  // Soil is sufficiently wet
  else if (soilValue < WET_THRESHOLD) {

    pumpState = false;

    digitalWrite(relayPin, HIGH);

    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);

    Serial.println("Soil is WET - Pump OFF");
  }

  delay(2000);
}