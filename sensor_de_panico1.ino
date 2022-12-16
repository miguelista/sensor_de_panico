// C++
/*-------------------------|
|---VALORES E DEFINIÇÕES---|
|-------------------------*/


const int pino_fotosensor = A5; //define o pino do sensor de luz
const int triggerdeluz = 400; //nivel onde o fotosensor ativa
const int pino_ledvermelho = 2; //pino led vermelho
const int buzzer = 3; //Atribui o valor 11 a variavel buzzer

int valoranalogico; //le os niveis de luz



/*------------------------|
|----------SETUP----------|
|------------------------*/
void setup()  
{
  
 	pinMode(LED_BUILTIN, OUTPUT); //led integrado
  
    // saidas 
	pinMode(pino_ledvermelho, OUTPUT); //LED
	pinMode(3, OUTPUT); //buzzer
 
  
}

/*-------------------------|
|----------CODIGO----------|
|-------------------------*/
void loop()
  
 
  
{
	{
	//pisca a luz do arduino. deixei aqui
  	digitalWrite(LED_BUILTIN, HIGH);
  	delay(1000); 
  	digitalWrite(LED_BUILTIN, LOW);
  	delay(1000);
      
      
    //instancia a leitura de luz
    valoranalogico = analogRead(pino_fotosensor); 
    
    
  }
  
  	if(valoranalogico < triggerdeluz) {
    digitalWrite(pino_ledvermelho, HIGH); // liga o LED
    tone(buzzer, 800); //liga o buzzer; 800hz
    
  }
  	else {
    digitalWrite(pino_ledvermelho, LOW); //desliga o LED
    noTone(buzzer); //desliga o buzzer
  }
  
  
  
  
  
}