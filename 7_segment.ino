void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
  pinMode(9,0);
}

void loop() {
  // put your main code here, to run repeatedly:
zero();
delay (1000);
one();
delay (1000);
}

int zero (){
  digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(4,0);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(7,0);
digitalWrite(8,1);
}


int one (){
  digitalWrite(2,1);
digitalWrite(3,0);
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
}
