int valx = 0;
int valy = 0;
int accy = A1;
int accx = A2;


void setup() {
  Serial.begin(38400);
  pinMode(accx, INPUT);
  pinMode(accy, INPUT);
}

void loop() {
  valx = analogRead(accx);
  valy = analogRead(accy);
  if (Serial.available()){
    Serial.println(valx);
    Serial.println(valy);
  }

  if(valx > 320 && valx < 350 && valy > 320 && valy < 350){ //stay
    Serial.write('1');
    Serial.print("\n");
  }

  if(valx > 355 && valx < 365 && valy > 330 && valy < 350){ //forward
    Serial.write('2');
    Serial.print("\n");
  }

  if(valx > 365 && valx < 375 && valy > 330 && valy < 350){ //forward
    Serial.write('3');
    Serial.print("\n");
  }

  if(valx > 375 && valy > 330 && valy < 350){ //forward
    Serial.write('4');
    Serial.print("\n");
  }

  if(valx > 330 && valx < 350 && valy > 390){ //right
    Serial.write('5');
    Serial.print("\n");
  }

  if(valx > 330 && valx < 350 && valy > 375 && valy < 390){ //right
    Serial.write('6');
    Serial.print("\n");
  }

  if(valx > 330 && valx < 350 && valy > 365 && valy < 375){ //right
    Serial.write('7');
    Serial.print("\n");
  }

  if(valx > 330 && valx < 350 && valy < 310 && valy > 295) { //left
    Serial.write('8');
    Serial.print("\n");
  }
  
  if(valx > 330 && valx < 350 && valy < 295 && valy > 285) { //left
    Serial.write('9');
    Serial.print("\n");
  }

  if(valx > 330 && valx < 350 && valy < 285) { //left
    Serial.write("10");
    Serial.print("\n");
  }
  
  if(valy > 330 && valy < 350 && valx < 310 && valx > 295) { //back
    Serial.write("11");
    Serial.print("\n");
  }
  
  if(valy > 330 && valy < 350 && valx < 295 && valx > 285) { //back
    Serial.write("12");
    Serial.print("\n");
  }

  if(valy > 330 && valy < 350 && valx < 285) { //back
    Serial.write("13");
    Serial.print("\n");
  }
  delay(1000);
  Serial.print("\n");
  
}
