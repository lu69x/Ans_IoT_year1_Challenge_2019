#include <Wire.h>
#include <SoftwareSerial.h>
#include <AM2320.h>

AM2320 th;
SoftwareSerial mySerial(10,11);

void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  String T,H,W,G;

  G = String(analogRead(0));
  
  switch(th.Read()) {
    case 0:
      H = String(th.h);
      T = String(th.t);
      break;
    default:
      T = "-1";
      H = "-1";
      break;
  }

  if((digitalRead(6)==LOW)&&(digitalRead(7)==LOW)){
    W = "00";
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }else if((digitalRead(6)==HIGH)&&(digitalRead(7)==LOW)){
    W = "01";
    digitalWrite(4, HIGH);
    analogWrite(5, 100);
  }else if((digitalRead(6)==LOW)&&(digitalRead(7)==HIGH)){
    W = "XX";
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }else if((digitalRead(6)==HIGH)&&(digitalRead(7)==HIGH)){
    W = "11";
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  }

  String buf = T + "T" + H + "H" + W + "W" + G + "G";
  Serial.println(buf);   // read it and send it out Serial (USB)
  mySerial.print(buf);
  delay(3000);
  
}
