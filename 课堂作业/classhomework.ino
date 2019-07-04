
  void setup()
  {
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    Serial.begin(9600);
  }
  void f(){
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
  }
  void b(){
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
  }
  void l(){
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
  }
  void r(){
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
  }
  void s(){
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
  }
  
  
  void loop(){
    if (Serial.available()>0){
       char command;
       command = Serial.read();
      switch (command){
      case 'f':f();break;
      case 'b':b();break;
      case 'l':l();break;
      case 'r':r();break;
      case 's':stop();break;
      default :break;
      }
    }
  }
