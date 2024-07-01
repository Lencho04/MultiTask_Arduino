#define GREEN 5

/*Variables de tiempo*/
unsigned long tiempo2; //Tiempos de secuencia
unsigned long t1=0; //Variable de referencia
int estadoL2=LOW; //Estado actual del led

void setup_GREEN() {
}

// the loop function runs over and over again forever
void loop_GREEN() {
  tiempo2 = millis();
  digitalWrite(GREEN, estadoL2);

  if(tiempo2-t1==200){
    t1=tiempo2;
    estadoL2=!estadoL2;
  }
}