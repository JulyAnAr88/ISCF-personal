int sgnl_barrera_1 = 1;
int sgnl_barrera_2 = 10;
int LED = 13;
int pin_salida = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,INPUT);                //Entrada desde el pin 13
  digitalWrite(LED,HIGH);             //Encender pin
  digitalWrite(pin_salida,OUTPUT);      
  pinMode(sgnl_barrera_1,INPUT);        //Barrera óptica al pin 1 para probar delay
  pinMode(sgnl_barrera_2,INPUT);        //Barrera óptica al pin 10 para for
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(sgnl_barrera_1)==HIGH){
    digitalWrite(LED,HIGH);
    digitalWrite(pin_salida,HIGH);
  }else{
    digitalWrite(LED,LOW);
    digitalWrite(pin_salida,HIGH);
    delay(100);
    digitalWrite(LED, HIGH);
    digitalWrite(pin_salida, LOW);
    delay(100);
    digitalWrite(LED,LOW);
    digitalWrite(pin_salida,HIGH);
  }

  if(digitalRead(sgnl_barrera_2)==HIGH){
    digitalWrite(LED,HIGH);
    digitalWrite(pin_salida,HIGH);
  }else{
    digitalWrite(LED,LOW);
    digitalWrite(pin_salida,HIGH);
    for(int i = 0; i<1000;++i){
      
    }
    digitalWrite(LED, HIGH);
    digitalWrite(pin_salida, LOW);
    for(int i = 0; i<1000;++i){
    }
    digitalWrite(LED,LOW);
    digitalWrite(pin_salida,HIGH);
  }
}
