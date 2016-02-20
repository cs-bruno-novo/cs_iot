int ledInput[4]={3,2,4,6};
int ledRead[4]={8,10,12,13};
int contador = 0;
bool callPisca = false;
void setup() {
 Serial.begin(9600);
 // put your setup code here, to run once:
 int cont = 0;
 for(cont;cont<4;cont++){
   pinMode(ledInput[cont], OUTPUT);
   pinMode(ledRead[cont], INPUT);
 }

}

void pisca(){
 callPisca = true;
}
 

void loop() {
 // put your main code here, to run repeatedly:

 int cont = 0;
// Serial.print(digitalRead(ledRead[0]));
//  Serial.print(digitalRead(ledRead[1]));
//  Serial.print(digitalRead(ledRead[2]));
//  Serial.print(digitalRead(ledRead[3]));
 for(cont;cont<4;cont++){ 
   if(digitalRead(ledRead[cont]) == HIGH){
     Serial.print(ledInput[cont]);
     //digitalWrite(ledInput[cont], HIGH);
     pisca();
   }
   else{
//    digitalWrite(ledInput[cont], LOW);
   }
   
   
 }

 if (callPisca){
 digitalWrite(ledInput[0], HIGH);
   digitalWrite(ledInput[1], HIGH);
   digitalWrite(ledInput[2], HIGH);
   digitalWrite(ledInput[3], HIGH);
   delay(1000);
   digitalWrite(ledInput[0], LOW);
   digitalWrite(ledInput[1], LOW);
   digitalWrite(ledInput[2], LOW);
   digitalWrite(ledInput[3], LOW);
   delay(1000);
   }
 
}
