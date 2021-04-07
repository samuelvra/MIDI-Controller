//Declara botões. O valor da variável é a porta usada
const int BUTTON1 = 0;
const int BUTTON2 = 1;
const int BUTTON3 = 2;
const int BUTTON4 = 3;
const int BUTTON5 = 4;
const int BUTTON6 = 5;
const int BUTTON7 = 6;

//Declara LEDs. O valor da variável é a porta usada
const int LED1 = 7;
const int LED2 = 8;
const int LED3 = 9;
const int LED4 = 10;
const int LED5 = 11;
const int LED6 = 12;
const int LED7 = 13;

//Define o estado de todos os botões
int BUTTONstate1 = 0;
int BUTTONstate2 = 0;
int BUTTONstate3 = 0;
int BUTTONstate4 = 0;
int BUTTONstate5 = 0;
int BUTTONstate6 = 0;
int BUTTONstate7 = 0;

void setup()
{
  //Define botões como input
  pinMode(BUTTON1, INPUT_PULLUP);
  pinMode(BUTTON2, INPUT_PULLUP);
  pinMode(BUTTON3, INPUT_PULLUP);
  pinMode(BUTTON4, INPUT_PULLUP);
  pinMode(BUTTON5, INPUT_PULLUP);
  pinMode(BUTTON6, INPUT_PULLUP);
  pinMode(BUTTON7, INPUT_PULLUP);
  
  //Define botões como output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
}

void loop()
{
  //Lê o estado do botão
  BUTTONstate1 = digitalRead(BUTTON1);
  //Se o botão foir "LOW", ou seja pressionado
  if(digitalRead(BUTTON1) == LOW){
    {
      //Delay para aguardar a resposta
      delay(300);
      //Define o LED para um status diferente do atual através de negação
      //!digitalRead(LED1)
      //Ou seja, se está ligado, define como desligado e vice-versa.
      digitalWrite(LED1, !digitalRead(LED1));
    } 
  }
  
  if(digitalRead(BUTTON2) == LOW){
    {
      delay(300);
      digitalWrite(LED2, !digitalRead(LED2));
    } 
  }
  
  if(digitalRead(BUTTON3) == LOW){
    {
      delay(300);
      digitalWrite(LED3, !digitalRead(LED3));
    } 
  }
  
  if(digitalRead(BUTTON4) == LOW){
    {
      delay(300);
      digitalWrite(LED4, !digitalRead(LED4));
    } 
  }
  
  if(digitalRead(BUTTON5) == LOW){
    {
      delay(300);
      digitalWrite(LED5, !digitalRead(LED5));
    } 
  }
  
  if(digitalRead(BUTTON6) == LOW){
    {
      delay(300);
      digitalWrite(LED6, !digitalRead(LED6));
    } 
  }
  
  if(digitalRead(BUTTON7) == LOW){
    {
      delay(300);
      digitalWrite(LED7, !digitalRead(LED7));
    } 
  }
}
