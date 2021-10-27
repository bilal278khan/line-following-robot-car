#define LS A0
#define RS A1
#define LM1 3
#define RM1 5
#define LM2 7
#define RM2 9 
void setup() {
  // put your setup code here, to run once:
pinMode(LS,INPUT);
pinMode(RS,INPUT);
pinMode(LM1,OUTPUT);
pinMode(LM2,OUTPUT);
pinMode(RM1,OUTPUT);
pinMode(RM2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(analogRead(LS)<500&&analogRead(RS)<500){
analogWrite(LM1,130);
analogWrite(RM1,130);
}
else if(analogRead(LS)<500&&analogRead(RS)>=500){
analogWrite(LM1,100);
analogWrite(RM1,LOW);
}
else if(analogRead(LS)>=500&&analogRead(RS)<500){
analogWrite(LM1,LOW);
analogWrite(RM1,100);
}
else{
  analogWrite(LM1,LOW);
  analogWrite(RM1,LOW);
}
}
