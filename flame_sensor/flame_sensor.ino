const int flamePin = A0;  // Lecture analogique
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int flameValue = analogRead(flamePin);
  Serial.print("Valeur capteur : ");
  Serial.println(flameValue);

  // Seuil à ajuster selon l’environnement
  if (flameValue > 800) {
    Serial.println("🔥 Flamme détectée !");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("❌ Pas de flamme");
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}
