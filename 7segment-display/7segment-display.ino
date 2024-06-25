const int s1 = 2;
const int s2 = 3;
const int s3 = 4;
const int s4 = 5;

const int s5 = 6;
const int s6 = 7;
const int s7 = 8;
const int s8 = 9;

const int s9 = 10;
const int s10 = 11;
const int s11 = 12;
const int s12 = 13;

const int input = A0;
const int select = A1;
const int enable = A2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(s4, OUTPUT);

  pinMode(s5, OUTPUT);
  pinMode(s6, OUTPUT);
  pinMode(s7, OUTPUT);
  pinMode(s8, OUTPUT);

  pinMode(s9, OUTPUT);
  pinMode(s10, OUTPUT);
  pinMode(s11, OUTPUT);
  pinMode(s12, OUTPUT);

  pinMode(input, INPUT);
  pinMode(select, INPUT);
  pinMode(enable, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int p_input = analogRead(input);
  int p_select = analogRead(select);
  int p_enable = analogRead(enable);

  if (p_input < 900){
    digitalWrite(s1, LOW);
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s4, HIGH);
  }
  else if (p_input < 800){
    digitalWrite(s1, LOW);
    digitalWrite(s2, LOW);
    digitalWrite(s3, HIGH);
    digitalWrite(s4, LOW);
  }
  else if (p_input < 700){
    digitalWrite(s1, LOW);
    digitalWrite(s2, LOW);
    digitalWrite(s3, HIGH);
    digitalWrite(s4, HIGH);
  }
  else if (p_input < 600){
    digitalWrite(s1, LOW);
    digitalWrite(s2, HIGH);
    digitalWrite(s3, LOW);
    digitalWrite(s1, LOW);
  }
  else if (p_input < 500){
    digitalWrite(s1, LOW);
    digitalWrite(s2, HIGH);
    digitalWrite(s3, LOW);
    digitalWrite(s4, HIGH);
  }
  else if (p_input < 400){
    digitalWrite(s1, LOW);
    digitalWrite(s2, HIGH);
    digitalWrite(s3, HIGH);
    digitalWrite(s4, LOW);
  }
  else if (p_input < 300){
    digitalWrite(s1, LOW);
    digitalWrite(s2, HIGH);
    digitalWrite(s3, HIGH);
    digitalWrite(s4, HIGH);
  }
  else if (p_input < 200){
    digitalWrite(s1, HIGH);
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s4, LOW);
  }
  else if (p_input < 100){
    digitalWrite(s1, HIGH);
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s4, HIGH);
  }
  else {
    digitalWrite(s1, LOW);
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s4, LOW);
  }
}
