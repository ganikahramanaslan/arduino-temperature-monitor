
/*
 * Project: Temperature Monitoring System
 * Platform: Arduino Uno
 * Language: C++
 * Sensor: LM35
 */

const int SENSOR_PIN = A0;

float temperature = 0.0;

void setup() {
    Serial.begin(9600);
    pinMode(SENSOR_PIN, INPUT);

    Serial.println("Temperature Monitoring System");
    Serial.println("--------------------------------");
}

void loop() {
    int sensorValue = analogRead(SENSOR_PIN);

    float voltage = sensorValue * (5.0 / 1023.0);

    temperature = voltage * 100.0;

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" C");

    delay(1000);
}
