#include <Arduino.h>
#include <DHT.h>

#define DHTPIN 2     
#define DHTTYPE DHT11   

#define FANPIN 3     
#define PUMPPIN 4     

DHT dht(DHTPIN, DHTTYPE);

unsigned long previousPumpMillis = 0;     
const unsigned long pumpInterval = 36000000;   
const unsigned long pumpDuration = 3000;       

void setup() {
    Serial.begin(115200);
    dht.begin();  
    pinMode(FANPIN, OUTPUT);  
    pinMode(PUMPPIN, OUTPUT);   
}

void loop() {
    delay(2000);  

    float temperature = dht.readTemperature();
    
    if (isnan(temperature)) {
        Serial.println("Failed to read from DHT sensor!");
    } else {
        Serial.print("Temperature: ");
        Serial.print(temperature);
        Serial.println(" °C");

        if (temperature > 30) {
            digitalWrite(FANPIN, HIGH);  
        } else if (temperature <= 28) {
            digitalWrite(FANPIN, LOW);  
        }
    }

    unsigned long currentMillis = millis();  

    
    if (currentMillis - previousPumpMillis >= pumpInterval) {
        
        digitalWrite(PUMPPIN, HIGH);
       
        previousPumpMillis = currentMillis;
    }

    
    if (currentMillis - previousPumpMillis >= pumpDuration) {
        
        digitalWrite(PUMPPIN, LOW);
    }
}
