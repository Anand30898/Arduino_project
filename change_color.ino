String voice;

#define ledRed 4
#define ledGreen 5
#define ledBlue 6
#define ledWhite 7
void setup() 
{                                           
  Serial.begin(9600);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledWhite, OUTPUT);
 }
void loop() {
 while (Serial.available())   //Check if there is an available byte to read
  {                            
  delay(10);                   //Delay added to make thing stable
  char c = Serial.read();      //Conduct a serial read
  voice += c;                  //Shorthand for voice = voice + c
  } 

  if (voice.length() > 0) {
    Serial.println(voice);
   if(voice == "red")                             
     {
     digitalWrite(ledRed,HIGH);
     delay(9000);
     digitalWrite(ledRed,LOW);
    
     }  
  else if(voice == "green")                              
     {
    
    digitalWrite(ledGreen,HIGH);
     delay(9000);
     digitalWrite(ledGreen,LOW);
     }
  else if(voice == "blue")                              
     {
    
    digitalWrite(ledBlue,HIGH);
     delay(9000);
     digitalWrite(ledBlue,LOW);
     }
  else if(voice == "white")                              
     {
    
    digitalWrite(ledWhite,HIGH);
     delay(9000);
     digitalWrite(ledWhite,LOW);
     }
  voice="";                                                       //Reset the variable after initiating
  }}

