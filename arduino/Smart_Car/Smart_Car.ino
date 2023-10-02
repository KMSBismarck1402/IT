#include "path.h"
#define ENR 6   //chân cắm cho module động cơ//
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 10
#define ENL 11

#define sR 12    //chân cắm cho sensor//
#define sF 4      //sF: trước; R: phải; L: trái; B: sau
#define sL 2

#define line_68 2000;
String ways[20];
byte Speed = 100, Speed1 =86, Speed2 = 78,n , LEngth[20];
//speed1 = right
void setup() {
  Serial.begin(115200);     //m ko cần phải đụng đến phần setup này//
  pinMode(ENR, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENL, OUTPUT);
  pinMode(sR, INPUT);
  pinMode(sF, INPUT);
  pinMode(sL, INPUT);
  pinMode(5, INPUT_PULLUP);
  n = path.SETUP();
  for(byte i = 0; i < n; ++i){
    ways[i] = path.Direction(i);    //lấy hướng robot nên đi//          
    LEngth[i] = path.length_of_path(i); //lấy độ dài các đoạn cần đi//
  }

  //đoạn này m có thể xóa hoặc tùy chỉnh tùy m//
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
void carStop() {      //dừng
  //Serial.println("STOP");
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void track_line_sec1(){      //thuật toán dò line
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  if(digitalRead(sL) == 0 && digitalRead(sR) == 0 && digitalRead(sF) == 1){
    analogWrite(ENR, Speed1);
    analogWrite(ENL, Speed2);
  }
  else if(digitalRead(sL) != 0 && digitalRead(sR) == 0){
    while(digitalRead(sL) != 0){
      analogWrite(ENR, 80);
      analogWrite(ENL, 0);
    }
  }
  else if(digitalRead(sL) == 1 && digitalRead(sR) == 1 && digitalRead(sF) == 1){
    analogWrite(ENR, Speed1);
    analogWrite(ENL, Speed2);
  }
}
void track_line_sec2(){      //thuật toán dò line
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  if(digitalRead(sL) == 0 && digitalRead(sR) == 0 && digitalRead(sF) == 1){
    analogWrite(ENR, Speed1-5);
    analogWrite(ENL, Speed2);
  }
  else if(digitalRead(sL) == 1 && digitalRead(sR) == 1 && digitalRead(sF) == 1){
    analogWrite(ENR, Speed1);
    analogWrite(ENL, Speed2);
  }
  else if(digitalRead(sL) != 0 && digitalRead(sR) == 0){
    while(digitalRead(sL) != 0){
      analogWrite(ENR, 80);
      analogWrite(ENL, 0);
    }
  }
  else if(digitalRead(sL) == 0 && digitalRead(sR) != 0){
    while(digitalRead(sR) != 0){
      analogWrite(ENR, 0);
      analogWrite(ENL,80);
    }
  }
  else if(digitalRead(sL) == 0 && digitalRead(sR) != 0){
      analogWrite(ENR, Speed1-5);
      analogWrite(ENL, Speed2);
  }
}

void loop() { 

//--------------------------thuật toán in gía trị của các sensor------------------------------------------------------------------//
  long long now=millis();
  /*
  while (millis()-now<=2000) track_line_sec2();
  while (millis()-now<=4200) {
    analogWrite(ENR, Speed1);
    analogWrite(ENL, Speed2);
  }
  carStop();
  while (millis()-now<=5500) track_line_sec1();
  carStop();*/
  track_line_sec2();
}
