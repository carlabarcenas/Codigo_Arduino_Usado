int ledPin = 13;

int BuzzerPin = 6;		//Pin del buzzer.
int PulsadorPin1 = 10;	//Pin del primer boton.
int PulsadorPin2 = 12;	//Pin del segundo boton.

int Estadoboton1;		//Variables del estado de los botones.
int Estadoboton2;

					//Frecuencia de las notas musicales.
#define Do 261
#define Re 294
#define Mi 329
#define Fa 349
#define Sol 391
#define SolSostenido 415
#define La 440
#define LaSostenido 466
#define Si 494
#define DoAlto 524
#define ReAlto 588
#define MiAlto 660
#define FaAlto 699

					//Duración de las notas.
#define semicorchea 200
#define corchea 400
#define negra 800
#define negraymedia 1200
#define blanca 1600
 

void setup()
{
					//Marcamos los pines como entrada o salida.
  pinMode(ledPin, OUTPUT);
  pinMode(BuzzerPin, OUTPUT);
  pinMode(PulsadorPin1, INPUT);
}
  
void loop()
{
					//Recogemos el estado de los botones (Pulsado o no pulsados).
  Estadoboton1 = digitalRead(PulsadorPin1);
  Estadoboton2 = digitalRead(PulsadorPin2);
					//Si pulsamos un botón que toque su villancico.
  if (Estadoboton1 == HIGH)
  {
    VillancicoCampana();
  }
  if (Estadoboton2 == HIGH)
  {
    VillancicoHaciaBelen();
  }  
}

void beep (unsigned char Pinbuzzer, int frecuencia, long tiempo)
{
    digitalWrite(ledPin, HIGH);	//El led se enciende al ritmo de los tonos.
    
    int x;
    long delayAmount = (long)(1000000/frecuencia);
    long loopTime = (long)((tiempo*negra)/(delayAmount*2));
    for (x=0;x<loopTime;x++)
    {
        digitalWrite(BuzzerPin,HIGH);
        delayMicroseconds(delayAmount);
        digitalWrite(BuzzerPin,LOW);
        delayMicroseconds(delayAmount);
    }
    
    digitalWrite(ledPin, LOW);
    
    delay(15);			//Le damos un pequeño tiempo entre tonos.
}
  
void VillancicoCampana()
{
    					//Tonos del primer villancico.
    beep(BuzzerPin, Fa, negra);
    beep(BuzzerPin, Fa, corchea);
    beep(BuzzerPin, Fa, corchea);
    beep(BuzzerPin, Fa, negra);
    beep(BuzzerPin, Mi, corchea);
    beep(BuzzerPin, Fa, corchea);
    
    beep(BuzzerPin, Sol, negraymedia);
    beep(BuzzerPin, Mi, corchea);
    beep(BuzzerPin, Do, blanca);

    beep(BuzzerPin, Sol, negra);    
    beep(BuzzerPin, Sol, corchea);
    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, Si, negra);
    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, Sol, corchea);
    
    beep(BuzzerPin, La, negraymedia);
    beep(BuzzerPin, Sol, corchea);
    beep(BuzzerPin, Fa, blanca);
    beep(BuzzerPin, Fa, blanca);

    beep(BuzzerPin, Fa, negraymedia);
    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, DoAlto, negra);
    delay(corchea);
    beep(BuzzerPin, DoAlto, corchea);

    beep(BuzzerPin, ReAlto, corchea);
    beep(BuzzerPin, DoAlto, corchea);
    beep(BuzzerPin, Si, corchea);
    beep(BuzzerPin, ReAlto, corchea);
    beep(BuzzerPin, DoAlto, negra);
    delay(corchea);
    beep(BuzzerPin, DoAlto, corchea);

    beep(BuzzerPin, ReAlto, corchea);
    beep(BuzzerPin, DoAlto, corchea);
    beep(BuzzerPin, ReAlto, corchea);
    beep(BuzzerPin, MiAlto, corchea);
    beep(BuzzerPin, FaAlto, negra);
    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, ReAlto, corchea);

    beep(BuzzerPin, DoAlto, corchea);
    beep(BuzzerPin, Si, corchea);
    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, Sol, corchea);
    beep(BuzzerPin, Fa, negra);
    delay(negra);

    beep(BuzzerPin, La, negraymedia);
    beep(BuzzerPin, Si, corchea);
    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, Sol, corchea);
    beep(BuzzerPin, Fa, negra);
    
    beep(BuzzerPin, DoAlto, negraymedia);
    beep(BuzzerPin, ReAlto, corchea);
    beep(BuzzerPin, DoAlto, corchea);
    beep(BuzzerPin, Si, corchea);
    beep(BuzzerPin, La, negra);

    beep(BuzzerPin, DoAlto, negraymedia);
    beep(BuzzerPin, DoAlto, corchea);
    beep(BuzzerPin, Si, negraymedia);
    beep(BuzzerPin, Sol, corchea);

    beep(BuzzerPin, DoAlto, negraymedia);
    beep(BuzzerPin, Si, corchea);
    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, Sol, corchea);
    beep(BuzzerPin, Fa, negra);

    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, Sol, corchea);
    beep(BuzzerPin, Fa, negra);

    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, Sol, corchea);
    beep(BuzzerPin, Fa, corchea);
    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, DoAlto, negra);
    delay(corchea);
    beep(BuzzerPin, DoAlto, corchea);

    beep(BuzzerPin, ReAlto, corchea);
    beep(BuzzerPin, DoAlto, corchea);
    beep(BuzzerPin, Si, corchea);
    beep(BuzzerPin, ReAlto, corchea);
    beep(BuzzerPin, DoAlto, negra);
    delay(corchea);
    beep(BuzzerPin, DoAlto, corchea);

    beep(BuzzerPin, ReAlto, corchea);
    beep(BuzzerPin, DoAlto, corchea);
    beep(BuzzerPin, ReAlto, corchea);
    beep(BuzzerPin, MiAlto, corchea);

    beep(BuzzerPin, FaAlto, negra);
    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, ReAlto, corchea);

    beep(BuzzerPin, DoAlto, corchea);
    beep(BuzzerPin, Si, corchea);
    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, Sol, corchea);
    beep(BuzzerPin, Fa, blanca);

}


void VillancicoHaciaBelen()
{
    					//Tonos del segundo villancico.

    beep(BuzzerPin, Do, corchea);
    beep(BuzzerPin, Fa, corchea);
    beep(BuzzerPin, Fa, corchea);
    beep(BuzzerPin, Fa, corchea);


    beep(BuzzerPin, Fa, negra);
    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, Si, corchea);
    beep(BuzzerPin, La, corchea);


    beep(BuzzerPin, Sol, semicorchea);
    delay(corchea);
    beep(BuzzerPin, Sol, semicorchea);
    beep(BuzzerPin, Fa, semicorchea);
    beep(BuzzerPin, Mi, semicorchea);
    beep(BuzzerPin, Fa, semicorchea);
    beep(BuzzerPin, Sol, semicorchea);
    beep(BuzzerPin, La, semicorchea);
    beep(BuzzerPin, Sol, semicorchea);
    beep(BuzzerPin, Fa, semicorchea);
    beep(BuzzerPin, Mi, semicorchea);
    beep(BuzzerPin, Fa, semicorchea);

    beep(BuzzerPin, Sol, semicorchea);
    delay(corchea);
    beep(BuzzerPin, Sol, semicorchea);
    beep(BuzzerPin, Fa, semicorchea);
    beep(BuzzerPin, Mi, semicorchea);
    beep(BuzzerPin, Fa, semicorchea);
    beep(BuzzerPin, Sol, semicorchea);
    beep(BuzzerPin, La, semicorchea);
    beep(BuzzerPin, Sol, semicorchea);
    beep(BuzzerPin, Fa, semicorchea);
    beep(BuzzerPin, Mi, semicorchea);
    beep(BuzzerPin, Fa, semicorchea);

    beep(BuzzerPin, Sol, corchea);
    delay(corchea);
    beep(BuzzerPin, Sol, corchea);
    beep(BuzzerPin, La, corchea);
    beep(BuzzerPin, Si, corchea);
    beep(BuzzerPin, ReAlto, corchea);


    beep(BuzzerPin, DoAlto, negra);
    beep(BuzzerPin, Si, corchea);
    beep(BuzzerPin, La, negra);
    beep(BuzzerPin, Sol, corchea);

    beep(BuzzerPin, Fa, negra);
    beep(BuzzerPin, Fa, negra);

    beep(BuzzerPin, La, semicorchea);
    beep(BuzzerPin, La, semicorchea);
    beep(BuzzerPin, DoAlto, corchea);
    beep(BuzzerPin, DoAlto, corchea);
    beep(BuzzerPin, Sol, corchea);
    

    beep(BuzzerPin, La, corchea);
    delay(corchea);
    beep(BuzzerPin, La, semicorchea);
    beep(BuzzerPin, La, semicorchea);    
    beep(BuzzerPin, DoAlto, corchea);
    beep(BuzzerPin, DoAlto, corchea);
    beep(BuzzerPin, Sol, corchea);

    beep(BuzzerPin, La, corchea);
    delay(corchea);
    beep(BuzzerPin, Fa, semicorchea);
    beep(BuzzerPin, Fa, semicorchea);    
    beep(BuzzerPin, Si, corchea);
    beep(BuzzerPin, Si, corchea);
    beep(BuzzerPin, Sol, corchea);

    beep(BuzzerPin, La, corchea);
    delay(corchea);
    beep(BuzzerPin, Fa, semicorchea);
    beep(BuzzerPin, Fa, semicorchea); 
    beep(BuzzerPin, Sol, corchea);
    beep(BuzzerPin, Sol, corchea);
    beep(BuzzerPin, Mi, corchea);

    beep(BuzzerPin, Fa, corchea);
    beep(BuzzerPin, Fa, corchea);
}
