const int botão = 2;
const int ledVm = 3;
const int ledVm = 4;

void setup()
{
  pinMode(botao, INPUT);
  pinMode(ledVa, OUTPUT);
  prinMode(ledVm, OUTPUT);
}

int var;

void loop()
{
 var = digitalRead(2);
 if(var)[
    digitalWrite(ledVd,HIGH);
    digitalWrite(ledVm,Low);
 }else{
    digitalWrite(ledVm,HIGH);
     digitalWrite(ledVd,LOW);
  }
  delay(10);
}
