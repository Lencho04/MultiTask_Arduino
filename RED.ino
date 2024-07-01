#define RED 6

/*Variables de tiempo*/
unsigned long tiempo3; //Tiempos de secuencia
unsigned long t2=0; //Variable de referencia
int estadoL3=LOW; //Estado actual del led

void setup_RED() {
}

// the loop function runs over and over again forever
void loop_RED() {
  tiempo3 = millis();
  digitalWrite(RED, estadoL3);

  if(tiempo3-t2==300){
    t2=tiempo3;
    estadoL3=!estadoL3;
  }
}