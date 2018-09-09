float val = 0;
int mot11 = 3;
int mot12 = 4;
int mot21 = 5;
int mot22 = 6;
int en1 = 9;
int en2 = 10;


void setup() {
  Serial.begin(38400);
  pinMode(mot11, OUTPUT);
  pinMode(mot12, OUTPUT);
  pinMode(mot22, OUTPUT);
  pinMode(mot21, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
}

void forward(){
  digitalWrite(mot11, HIGH);
  digitalWrite(mot12, LOW);
  digitalWrite(mot21, HIGH);
  digitalWrite(mot22, LOW);
  Serial.print("Forward");
}

void right(){
  digitalWrite(mot11, HIGH);
  digitalWrite(mot12, LOW);
  digitalWrite(mot21, LOW);
  digitalWrite(mot22, LOW);
  Serial.print("Right");
}

void left(){
  digitalWrite(mot11, LOW);
  digitalWrite(mot12, LOW);
  digitalWrite(mot21, HIGH);
  digitalWrite(mot22, LOW);
  Serial.print("Left");
}

void back(){
  digitalWrite(mot11, LOW);
  digitalWrite(mot12, HIGH);
  digitalWrite(mot21, LOW);
  digitalWrite(mot22, HIGH);
  Serial.print("Back");
}

void stay(){
  digitalWrite(mot11, LOW);
  digitalWrite(mot12, LOW);
  digitalWrite(mot21, LOW);
  digitalWrite(mot22, LOW);
  Serial.print("Stop");
}

void loop(){ 
  val = Serial.read();
  if(Serial.available()){
    Serial.println(val);
  }
  /*switch(val){
    case 1:
      stay();
      break;
    case 2:
      analogWrite(en1,85);
      analogWrite(en1,85);
      forward();
    case 3:
      analogWrite(en1,170);
      analogWrite(en1,170);
      forward();
    case 4:
      analogWrite(en1,255);
      analogWrite(en1,255);
      forward();
    case 5:
      analogWrite(en1,255);
      analogWrite(en1,255);
      right();
    case 6:
      analogWrite(en1,170);
      analogWrite(en1,170);
      right();
    case 7:
      analogWrite(en1,85);
      analogWrite(en1,85);
      right();
    case 8:
      analogWrite(en1,85);
      analogWrite(en1,85);
      left();
    case 9:
      analogWrite(en1,170);
      analogWrite(en1,170);
      left();
    case 10:
      analogWrite(en1,255);
      analogWrite(en1,255);
      left();
    case 11:
      analogWrite(en1,85);
      analogWrite(en1,85);
      back();
    case 12:
      analogWrite(en1,170);
      analogWrite(en1,170);
      back();
    case 13:
      analogWrite(en1,255);
      analogWrite(en1,255);
      back();
    
  }*/
  delay(1000);
  Serial.print("\n");
  
}
