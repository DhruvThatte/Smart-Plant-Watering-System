// Define pin numbers for soil moisture sensor, rain module, and motor control
const int soilMoisturePin = A0;
const int rainModulePin = 2;
const int motorControlPin = 3;
 
// Define threshold values for soil moisture and rain detection
const int moistureThreshold = 370; // Adjust as needed
const int rainThreshold = 500;     // Adjust as needed
 
void setup() {
 // Initialize serial communication
 Serial.begin(9600);
 
 // Set pin modes
 pinMode(soilMoisturePin, INPUT);
 pinMode(rainModulePin, INPUT);
 pinMode(motorControlPin, OUTPUT);
}
 
void loop() {
 // Read soil moisture level
 int soilMoisture = analogRead(soilMoisturePin);
 // Convert analog value to percentage (0-100%)
 int soilMoisturePercentage = map(soilMoisture, 0, 1023, 0, 100);
 
 // Read rain module output
 int rainValue = digitalRead(rainModulePin);
 
 // Print sensor values for debugging
 Serial.print("Soil Moisture (%): ");
 Serial.print(soilMoisturePercentage);
 Serial.print(" | Rain Value: ");
 Serial.println(rainValue);
 
 // Switch-case to handle different scenarios
 switch (getState(soilMoisture, rainValue)) {
   case 1:
     // Both soil moisture and rain are high
     // Perform action, e.g., stop motor
     digitalWrite(motorControlPin, LOW);
     Serial.println("Rain and soil moisture high! Motor stopped.");
     break;
   case 2:
     // Soil moisture is low
     // Perform action, e.g., start motor
     digitalWrite(motorControlPin, HIGH);
     Serial.println("Soil moisture low! Motor running.");
     break;
   default:
     // Neither condition is met, continue motor operation
     digitalWrite(motorControlPin, HIGH);
     Serial.println("Motor running.");
     break;
 }
 // Delay before next iteration
 delay(1000);
}
// Function to determine the state based on soil moisture and rain values
int getState(int soilMoisture, int rainValue) {
 if (rainValue == HIGH && soilMoisture > moistureThreshold) {
   return 1; // Both soil moisture and rain are high
 } else if (soilMoisture > moistureThreshold) {
   return 2; // Soil moisture is low
 } else {
   return 0; // Neither condition is met
 }
}