27/06/2024
Comezamos a ver el multitask en arduino, en este dcaso está en un solo archivo, se procura dividir las tareas en cada uno de los documentos, y a su vez incrementar el brillo del led, por que el brillo es muy bajo.

30/06/2024

El uso de funciones y ejecucion de las mismas no funciona para ejecutar las tareas como un RTOS lo indica, por lo que se opta por usar la función millis()

función millis()

Esta función devuelve el número de milisegundos desde que la placa arduino comenzó a ejecutar el programa actual. Este número volvera a cero después de aproximadamente 50 días. No tiene parametros

**La funcion millis y multitareas.**

Al no detener el sistema como se hace con el uso de "delays", la función milis  permite controlar nuestro programa con el uso de tiempos, aun sin el uso de inerrupciones externas.

Se consigui el multitask, pero el brillo del led sigue mas bajo de lo normal.
