const int led0 = 2;
const int led1 = 3;
const int led2 = 4;
const int led3 = 5;
const int led4 = 6;
const int led5 = 7;
const int led6 = 9;
const int led7 = 10;

// RODRIGO ROBERT ALEX
void setup()
{
  Serial.begin(9600);
  pinMode(A2,INPUT);
  pinMode(A1,INPUT);
  pinMode(A0,OUTPUT);
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  
}

void loop()
{
   if (digitalRead(A2) == HIGH||digitalRead(A1)== HIGH)
   {
    digitalWrite(led0, HIGH);
    delay(500);
    digitalWrite(led0, LOW);
  
   digitalWrite(led1,HIGH);
     delay(500);
    digitalWrite(led1,LOW);
     
   digitalWrite(led2,HIGH);
      delay(500);
   digitalWrite(led2,LOW);
       
    digitalWrite(led3,HIGH);
      delay(500);
      digitalWrite(led3,LOW);

    digitalWrite(led4,HIGH);
      delay(500);
      digitalWrite(led4,LOW);

    digitalWrite(led5,HIGH);
       delay(500);
       digitalWrite(led5,LOW);

    digitalWrite(led6,HIGH);
     delay(500);
      digitalWrite(led6,LOW);

    digitalWrite(led7,HIGH);
    delay(500);
     digitalWrite(led7,LOW);
     delay(500);
     digitalWrite(A0,HIGH);
     delay(500);
     digitalWrite(A0,LOW);

     }
}
 
     
  
   

    
   
   
   
  

  
   

   
   

  
   
   
