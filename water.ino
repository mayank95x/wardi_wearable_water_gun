#define LEDa 9 
#define LEDb 10 
#define LEDc 11 



void setup()


{
  pinMode(LEDa, OUTPUT);
  pinMode(LEDb, OUTPUT);
  pinMode(LEDc, OUTPUT);
  Serial.begin(9600);

}

void loop()

{

  

  int val2 = analogRead(A0); // read input value

  Serial.print(val2);

           digitalWrite(LEDa,LOW);
         digitalWrite(LEDb,LOW);
         digitalWrite(LEDc,LOW);
 


  

   if( val2>100 ) 
   {
       digitalWrite(LEDa,HIGH);
       digitalWrite(LEDb,HIGH);
       digitalWrite(LEDc,HIGH);
       
   }else {
    
          digitalWrite(LEDa,LOW);
       digitalWrite(LEDb,LOW);
       digitalWrite(LEDc,LOW);
   }

  
  

 

   
 

}
