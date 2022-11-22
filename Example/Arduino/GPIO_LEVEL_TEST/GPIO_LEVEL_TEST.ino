void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(18, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(20, HIGH);   // turn the LED on (HIGH is the voltage level)
   
   digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(19, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(21, LOW);    // turn the LED off by making the voltage LOW
   delay(100); 


   digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(19, HIGH);    // turn the LED off by making the voltage LOW
   digitalWrite(21, HIGH);    // turn the LED off by making the voltage LOW
   
   digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(18, LOW);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(20, LOW);   // turn the LED on (HIGH is the voltage level)
   delay(100);  
}
