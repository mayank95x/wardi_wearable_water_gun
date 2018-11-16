#define LEDa 9 
#define LEDb 10 
#define LEDc 11 

int current_level;
float wateramount = 10000000;
float previous_levels;

void setup()


{
  pinMode(LEDa, OUTPUT);
  pinMode(LEDb, OUTPUT);
  pinMode(LEDc, OUTPUT);
  Serial.begin(9600);

}

void loop()

{

  int val1 = analogRead(A0); // read input value
  int val2 = analogRead(A1); // read input value
  int total=val1+val2;

  previous_levels+=wateramount-current_level;
 
  if(previous_levels <= wateramount)
  {

  digitalWrite(LEDa,HIGH);
  digitalWrite(LEDb,HIGH);
  digitalWrite(LEDc,HIGH);
    
  }

  else if(previous_levels < wateramount/3)
  {

  digitalWrite(LEDa,LOW);
  digitalWrite(LEDb,HIGH);
  digitalWrite(LEDc,HIGH);
    
  }

  else if(previous_levels < wateramount/3*2)
  {

  digitalWrite(LEDa,LOW);
  digitalWrite(LEDb,LOW);
  digitalWrite(LEDc,HIGH);
    
  }

  else if(previous_levels < wateramount/3*3)
  {

  digitalWrite(LEDa,LOW);
  digitalWrite(LEDb,LOW);
  digitalWrite(LEDc,LOW);
    
  }

  
   
  delay(2000);

}
