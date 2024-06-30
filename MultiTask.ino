/*Declaracion de variables*/
#define BLUE 3
#define GREEN 5
#define RED 6
/*Variables de tiempo*/
unsigned long tiempo1, tiempo2, tiempo3; //Tiempos de secuencia
unsigned long t0=0, t1=0, t3=0; //Variable de referencia
int estadoL1=LOW, estadoL2=LOW, estadoL3=LOW; //Estado actual del led

void setup() {
}

// the loop function runs over and over again forever
void loop() {
  tiempo1 = tiempo2 = tiempo3 = millis();
  digitalWrite(BLUE, estadoL1);
  digitalWrite(GREEN, estadoL2);
  digitalWrite(RED, estadoL3);

  if(tiempo1-t0==250){
    t0=tiempo1;
    estadoL1=!estadoL1;
  }

  if(tiempo2-t1==750){
    t1=tiempo2;
    estadoL2=!estadoL2;
  }

  if(tiempo3-t3==100){
    t3=tiempo3;
    estadoL3=!estadoL3;
  }
}
