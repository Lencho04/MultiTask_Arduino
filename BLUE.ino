#define BLUE 3

/*Variables de tiempo*/
unsigned long tiempo1; //Tiempos de secuencia
unsigned long t0=0; //Variable de referencia
int estadoL1=LOW; //Estado actual del led

void setup_BLUE() {
}

// the loop function runs over and over again forever
void loop_BLUE() {
  tiempo1 = millis();
  digitalWrite(BLUE, estadoL1);

  if(tiempo1-t0==100){
    t0=tiempo1;
    estadoL1=!estadoL1;
  }
}