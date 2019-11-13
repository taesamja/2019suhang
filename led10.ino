int led_pin[10]={3,4,5,6,7,8,9,10,11,12} ;

void setup() {
  for(int i=0; i<10;i++) {
    pinMode(led_pin[i],OUTPUT);
  }
}

void loop() {
  int analog_in = analogRead(A0);
  int led_in = map(analog_in, 0, 1023, 0, 10);
  
  if(led_in == 0)                  led_clear();
  if(led_in > 0 && led_in <= 1)    led_state1();
  if(led_in > 1 && led_in <= 2)    led_state2();
  if(led_in > 2 && led_in <= 3)    led_state3();
  if(led_in > 3 && led_in <= 4)    led_state4();
  if(led_in > 4 && led_in <= 5)    led_state5();
  if(led_in > 5 && led_in <= 6)    led_state6();
  if(led_in > 6 && led_in <= 7)    led_state7();
  if(led_in > 7 && led_in <= 8)    led_state8();
  if(led_in > 8 && led_in <= 9)    led_state9();
  if(led_in > 9 && led_in <= 10)   led_state10();
}

void led_clear() {
  digitalWrite(led_pin[0], LOW);
  digitalWrite(led_pin[1], LOW);
  digitalWrite(led_pin[2], LOW);
  digitalWrite(led_pin[3], LOW);
  digitalWrite(led_pin[4], LOW);
  digitalWrite(led_pin[5], LOW);
  digitalWrite(led_pin[6], LOW);
  digitalWrite(led_pin[7], LOW);
  digitalWrite(led_pin[8], LOW);
  digitalWrite(led_pin[9], LOW);
}

void led_state1() {
  digitalWrite(led_pin[0], HIGH);
  digitalWrite(led_pin[1], LOW);
  digitalWrite(led_pin[2], LOW);
  digitalWrite(led_pin[3], LOW);
  digitalWrite(led_pin[4], LOW);
  digitalWrite(led_pin[5], LOW);
  digitalWrite(led_pin[6], LOW);
  digitalWrite(led_pin[7], LOW);
  digitalWrite(led_pin[8], LOW);
  digitalWrite(led_pin[9], LOW);
}

void led_state2() {
  digitalWrite(led_pin[0], HIGH);
  digitalWrite(led_pin[1], HIGH);
  digitalWrite(led_pin[2], LOW);
  digitalWrite(led_pin[3], LOW);
  digitalWrite(led_pin[4], LOW);
  digitalWrite(led_pin[5], LOW);
  digitalWrite(led_pin[6], LOW);
  digitalWrite(led_pin[7], LOW);
  digitalWrite(led_pin[8], LOW);
  digitalWrite(led_pin[9], LOW);
}

void led_state3() {
  digitalWrite(led_pin[0], HIGH);
  digitalWrite(led_pin[1], HIGH);
  digitalWrite(led_pin[2], HIGH);
  digitalWrite(led_pin[3], LOW);
  digitalWrite(led_pin[4], LOW);
  digitalWrite(led_pin[5], LOW);
  digitalWrite(led_pin[6], LOW);
  digitalWrite(led_pin[7], LOW);
  digitalWrite(led_pin[8], LOW);
  digitalWrite(led_pin[9], LOW);
}

void led_state4() {
  digitalWrite(led_pin[0], HIGH);
  digitalWrite(led_pin[1], HIGH);
  digitalWrite(led_pin[2], HIGH);
  digitalWrite(led_pin[3], HIGH);
  digitalWrite(led_pin[4], LOW);
  digitalWrite(led_pin[5], LOW);
  digitalWrite(led_pin[6], LOW);
  digitalWrite(led_pin[7], LOW);
  digitalWrite(led_pin[8], LOW);
  digitalWrite(led_pin[9], LOW);
}

void led_state5() {
  digitalWrite(led_pin[0], HIGH);
  digitalWrite(led_pin[1], HIGH);
  digitalWrite(led_pin[2], HIGH);
  digitalWrite(led_pin[3], HIGH);
  digitalWrite(led_pin[4], HIGH);
  digitalWrite(led_pin[5], LOW);
  digitalWrite(led_pin[6], LOW);
  digitalWrite(led_pin[7], LOW);
  digitalWrite(led_pin[8], LOW);
  digitalWrite(led_pin[9], LOW);
}

void led_state6() {
  digitalWrite(led_pin[0], HIGH);
  digitalWrite(led_pin[1], HIGH);
  digitalWrite(led_pin[2], HIGH);
  digitalWrite(led_pin[3], HIGH);
  digitalWrite(led_pin[4], HIGH);
  digitalWrite(led_pin[5], HIGH);
  digitalWrite(led_pin[6], LOW);
  digitalWrite(led_pin[7], LOW);
  digitalWrite(led_pin[8], LOW);
  digitalWrite(led_pin[9], LOW);
}

void led_state7() {
  digitalWrite(led_pin[0], HIGH);
  digitalWrite(led_pin[1], HIGH);
  digitalWrite(led_pin[2], HIGH);
  digitalWrite(led_pin[3], HIGH);
  digitalWrite(led_pin[4], HIGH);
  digitalWrite(led_pin[5], HIGH);
  digitalWrite(led_pin[6], HIGH);
  digitalWrite(led_pin[7], LOW);
  digitalWrite(led_pin[8], LOW);
  digitalWrite(led_pin[9], LOW);
}

void led_state8() {
  digitalWrite(led_pin[0], HIGH);
  digitalWrite(led_pin[1], HIGH);
  digitalWrite(led_pin[2], HIGH);
  digitalWrite(led_pin[3], HIGH);
  digitalWrite(led_pin[4], HIGH);
  digitalWrite(led_pin[5], HIGH);
  digitalWrite(led_pin[6], HIGH);
  digitalWrite(led_pin[7], HIGH);
  digitalWrite(led_pin[8], LOW);
  digitalWrite(led_pin[9], LOW);
}

void led_state9() {
  digitalWrite(led_pin[0], HIGH);
  digitalWrite(led_pin[1], HIGH);
  digitalWrite(led_pin[2], HIGH);
  digitalWrite(led_pin[3], HIGH);
  digitalWrite(led_pin[4], HIGH);
  digitalWrite(led_pin[5], HIGH);
  digitalWrite(led_pin[6], HIGH);
  digitalWrite(led_pin[7], HIGH);
  digitalWrite(led_pin[8], HIGH);
  digitalWrite(led_pin[9], LOW);
}

void led_state10() {
  digitalWrite(led_pin[0], HIGH);
  digitalWrite(led_pin[1], HIGH);
  digitalWrite(led_pin[2], HIGH);
  digitalWrite(led_pin[3], HIGH);
  digitalWrite(led_pin[4], HIGH);
  digitalWrite(led_pin[5], HIGH);
  digitalWrite(led_pin[6], HIGH);
  digitalWrite(led_pin[7], HIGH);
  digitalWrite(led_pin[8], HIGH);
  digitalWrite(led_pin[9], HIGH);
}
