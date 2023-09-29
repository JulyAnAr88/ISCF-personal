int pulsador;
int sgnl_barrera = 10;
int LED = 13;
int pin_salida = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);                //Salida desde el pin 13
  digitalWrite(LED,HIGH);             //Encender pin
  digitalWrite(pin_salida,OUTPUT);      
  pinMode(sgnl_barrera,INPUT);        //Barrera óptica al pin 10
}

void loop() {
  // put your main code here, to run repeatedly:
  pulsador = digitalRead(sgnl_barrera);

  if(pulsador==LOW){
    digitalWrite(LED,HIGH);
    digitalWrite(pin_salida,HIGH);
  }else{
    digitalWrite(LED,LOW);
    digitalWrite(pin_salida,HIGH);
  }
}
