// Electrocardiogram (ECG/EKG) 
void setup() {
 // initialize the serial communication:
 Serial.begin(9600);
 pinMode(D3, INPUT); // Setup for leads off detection LO +
 pinMode(D4, INPUT); // Setup for leads off detection LO -

}

void loop() {
 
 if((digitalRead(D3) == 1)||(digitalRead(D4) == 1)){
   Serial.println('!');
 }
 else{
   // send the value of analog input A0:
     Serial.println(analogRead(A0));
 }
 //Wait for a bit to keep serial data from saturating
 delay(1);
}
