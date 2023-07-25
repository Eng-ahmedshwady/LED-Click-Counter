// C++ code
//
int count=2;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(9,INPUT);
}

void loop()
{
  if(digitalRead(9)==1){
  count++;
    if(count<6){
    digitalWrite(count,1);
    }else{
    digitalWrite(3,LOW);
    digitalWrite(4,LOW); 
    digitalWrite(5,LOW);
      count=2;
    }
    while(digitalRead(9)==1);
  }
}