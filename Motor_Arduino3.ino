/* 
 Ejemplo de control de motor DC usando modulo L298
 http://electronilab.co/tienda/driver-dual-para-motores-full-bridge-l298n/

 
 Creado 16/05/14
 por Andres Cruz
 ELECTRONILAB.CO
 
 Modificado por Dario 04/04/2016
 
 */

int IN3 = 5;    // Input3 conectada al pin 5
int IN4 = 4;    // Input4 conectada al pin 4 
int ENB = 3;    // ENB conectada al pin 3 de Arduino
int var;
void setup()
{
 pinMode (ENB, OUTPUT); 
 pinMode (IN3, OUTPUT);
 pinMode (IN4, OUTPUT);
}
void loop()
{
  //Preparamos la salida para que el motor gire en un sentido
  //digitalWrite (IN3, HIGH);
  //digitalWrite (IN4, LOW);
  //Preparamos la salida para que el motor gire en un sentido
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
  
  // Aplicamos PWM al pin ENB, haciendo girar el motor, cada 2 seg aumenta la velocidad
  //analogWrite(ENB,55);
  //delay(2000);
  //analogWrite(ENB,105);
  //delay(2000);
  //analogWrite(ENB,255);
  //delay(2000);
  // Apagamos el motor y esperamos 5 seg
  //analogWrite(ENB,0);
  //delay(5000);
  
  analogWrite(ENB,255);
  delay(10000);
  analogWrite(ENB,0);
  
  
  
  digitalWrite (IN4, LOW);
  digitalWrite (IN3, HIGH);
  delay(2000);
  
  
  analogWrite(ENB,255);
  delay(10000);
  analogWrite(ENB,0);

delay(2000);
  
}

