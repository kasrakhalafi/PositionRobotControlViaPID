double pos=0;

void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  attachInterrupt(0,inter1,RISING);
}

void inter1(){
     //val=digitalRead(3);
      if(digitalRead(3)==LOW){
        pos-=0.1;
      }
      else{
        pos+=0.1;
  }

  //Serial.println(pos);
}


void loop() {

   Serial.println(pos);
}
