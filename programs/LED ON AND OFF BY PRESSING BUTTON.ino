int pin_LED = 10;
int pin_switch = 2;
 
void setup() 
{
    Serial.begin(9600);
    Serial.print("Sketch:   ");   Serial.println(_FILE_);
    Serial.print("Uploaded: ");   Serial.println(_DATE_);
    Serial.println(" ");
 
    pinMode(pin_LED, OUTPUT);  
    digitalWrite(pin_LED,LOW); 
 
    pinMode(pin_switch, INPUT); 
}
 
void loop()
{
    if ( digitalRead(pin_switch) == HIGH) 
    {
       digitalWrite(pin_LED, HIGH);
    }
    else
    {
       digitalWrite(pin_LED, LOW);
    }   
}
