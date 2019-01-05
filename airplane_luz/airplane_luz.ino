int led_verde = 6;
int led_rojo = 3;
int led_base_blanco = 5;
int led_atras_rojo = 4;
int led_farola_blanco = 2;
int led_llantas = 10;

void setup() {
 pinMode(led_verde,OUTPUT);
 pinMode(led_rojo,OUTPUT);
 pinMode(led_base_blanco,OUTPUT);
 pinMode(led_atras_rojo,OUTPUT);
 pinMode(led_farola_blanco,OUTPUT);
 pinMode(led_llantas,OUTPUT);
 digitalWrite(led_llantas,HIGH);
 digitalWrite(led_farola_blanco,HIGH);
 Serial.begin(9600);
}

void loop() {

led_alerones();
 
}

void led_alerones(){
    
for(int i=0; i<6; i++){
  
  digitalWrite(led_verde,HIGH);
  digitalWrite(led_rojo,HIGH);
  digitalWrite(led_atras_rojo,HIGH);
  delay(300);
  
  digitalWrite(led_verde,LOW);
  digitalWrite(led_rojo,LOW);
  delay(100);

  digitalWrite(led_atras_rojo,HIGH);
  delay(100);

  switch (i){
    case 5:
        digitalWrite(led_verde,HIGH);
        digitalWrite(led_rojo,HIGH);
        digitalWrite(led_atras_rojo,LOW);
        delay(300);
        
        digitalWrite(led_verde,LOW);
        digitalWrite(led_rojo,LOW);
        digitalWrite(led_atras_rojo,LOW);
        delay(100);

        digitalWrite(led_base_blanco,HIGH);
        delay(80);
        digitalWrite(led_base_blanco,LOW);
        delay(80);

        digitalWrite(led_base_blanco,HIGH);
        delay(80);
        digitalWrite(led_base_blanco,LOW);
        delay(80);
      break;   
  }
}

}

