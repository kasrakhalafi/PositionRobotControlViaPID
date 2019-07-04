long int s = 127;
double ee=0;
double ePrior=0;
double eLatter=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
float in = 4;
float st = 2.5;
pinMode(A3, INPUT );
pinMode(5 , OUTPUT);

    
}

void loop() {
  // put your main code here, to run repeatedly:
int a = analogRead(A3);
float x = (a/1024.0)*30.0;
//float x = (v - 0.22)*(27/4.31);
double p = 15;
double e = p-x;
ePrior = (e - eLatter);

eLatter = e;
ee += e;
s = 60*e  - 0.1*ee- 2*ePrior ;
s=(s+30)*255/60;
if(s > 255){
  s = 255;
}
if(s < 0){
  s = 0;
}
Serial.println(x);

analogWrite(5 , s);
delay(100);
//
//if(e < -0.2)
//{
//analogWrite(5 , s);
//}
//
//else if(e > 0.2)
//{
//analogWrite(5 , s);
//}
//
//else
//{
//  analogWrite(5 , 127);
////  
//}
//Serial.print("this is e: ");
//Serial.println(e);
//Serial.print("this is s: ");
//Serial.println(s);
//Serial.print("x : ");
//Serial.println(x);
//delay(10);

}
