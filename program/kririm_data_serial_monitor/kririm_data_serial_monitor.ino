char data;



void setup() {
  Serial.begin (115200);
  Serial.print ("connected");
  Serial.println ();
  pinMode(2, OUTPUT);

  // put your setup code here, to run once:

}

void loop() {
  if (Serial.available() >0) {
     data = Serial.read ();
  }



  if (data == '1'){ 
    digitalWrite(2, 1);
   
    Serial.print ("nyala njir");
    Serial.println ();
  }
    else if (data == '0' ){
      digitalWrite (2, 0);
      Serial.print ("mati njir");
      Serial.println ();

    
    }
  

}
