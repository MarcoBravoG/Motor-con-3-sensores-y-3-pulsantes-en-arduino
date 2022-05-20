const int sensor1 = 2;
const int sensor2 =3;
const int sensor3 =4;
const int sensor4 =5;

const int pulsante1 =6;
const int pulsante2 =7;
const int pulsante3 =8;
const int pulsante4 =9;





const int Motor = 13;
 
int s1 = 0;
int s2 = 0;
int s3 = 0;
int s4 = 0;


 
int p1 = 0;
int p2 = 0;
int p3 = 0;
int p4 = 0;
 
void setup() {
  Serial.begin(9600);
  
    // Activamos los pines de entrada y salida
    pinMode(sensor1, INPUT);
    pinMode(sensor2, INPUT);
    pinMode(sensor3, INPUT);
    pinMode(sensor4, INPUT);

    pinMode(pulsante1, INPUT);
    pinMode(pulsante2, INPUT);
    pinMode(pulsante3, INPUT);
    pinMode(pulsante4, INPUT);
    pinMode(Motor, OUTPUT);
    digitalWrite(Motor, LOW);

//////////////////////////////////////





}




    

 
void loop() {
   
 // Leemos el valor del pin
    s1 = digitalRead(sensor1);
    s2 = digitalRead(sensor2);
    s3 = digitalRead(sensor3);
    s4 = digitalRead(sensor4);
    
    p1 = digitalRead(pulsante1);
    p2 = digitalRead(pulsante2);
    p3 = digitalRead(pulsante3);
    p4 = digitalRead(pulsante4);
    

   //////////////////////////////////////////////

    if (p1== LOW)
    {
        digitalWrite(Motor, HIGH);
     
        if (s1 == LOW && s2 == HIGH && s3 == HIGH ) {
        digitalWrite(Motor, LOW);
    //  p1=1;
        delay (1100);
        
        }
    }
   ////////////////////////////////////////////// 

        if (p2== LOW)
    {
        digitalWrite(Motor, HIGH);
    
        if (s1 == HIGH && s2 == LOW && s3 == HIGH) {
        digitalWrite(Motor, LOW);
     //    p2=1;
        delay(1100);
      
        }
    }

   //////////////////////////////////////////////
    
        if (p3== LOW)
    {
        digitalWrite(Motor, HIGH);
     //   p3=1;
        if ( s1 == HIGH && s2 == HIGH && s3 == LOW ) {
        digitalWrite(Motor, LOW);
   //   p3=1;
        delay(1100);
        
        }
    }

    
}
