#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the LCD, specifying the I2C address and dimensions
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pin definitions
const int moistureSensorPin = A0; // Analog pin connected to the sensor's analog output
const int relayPin = 2;           // Digital pin connected to the relay module

// Moisture level thresholds
const int dryThreshold = 950;
const int wetThreshold = 300;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
  
  // Initialize the LCD
  lcd.init();
  lcd.backlight();
  
  // Set up the relay pin as an output
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // Ensure the relay is off initially
  
  // Display initial message
  lcd.setCursor(0, 0);
  lcd.print("IRRIGATION");
  lcd.setCursor(0, 1);
  lcd.print("SYSTEM IS ON");
  delay(3000);
  lcd.clear();
}

void loop() {
  // Read the moisture level from the sensor
  int moistureLevel = analogRead(moistureSensorPin);
  Serial.println(moistureLevel); // Print moisture level to the serial monitor
  
  // Control the relay based on the moisture level
  if (moistureLevel > dryThreshold) {
    digitalWrite(relayPin, LOW); // Turn on the water pump
    lcd.setCursor(0, 0);
    lcd.print("Water Pump is ON ");
  } else {
    digitalWrite(relayPin, HIGH); // Turn off the water pump
    lcd.setCursor(0, 0);
    lcd.print("Water Pump is OFF");
  }
  
  // Display the moisture level on the LCD
  if (moistureLevel < wetThreshold) {
    lcd.setCursor(0, 1);
    lcd.print("Moisture: HIGH  ");
  } else if (moistureLevel >= wetThreshold && moistureLevel <= dryThreshold) {
    lcd.setCursor(0, 1);
    lcd.print("Moisture: MID   ");
  } else if (moistureLevel > dryThreshold) {
    lcd.setCursor(0, 1);
    lcd.print("Moisture: LOW   ");
  }
  
  // Wait for a while before taking the next reading
  delay(10000); // Adjust the delay as needed (e.g., 10 seconds)
}