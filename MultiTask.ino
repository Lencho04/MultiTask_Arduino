/*Declaracion de variables*/
#include "MultiTask.h"

void setup() {
  setup_BLUE();
  setup_GREEN();
  setup_RED();
}

// the loop function runs over and over again forever
void loop() {
  loop_BLUE();
  loop_GREEN();
  loop_RED();
}
