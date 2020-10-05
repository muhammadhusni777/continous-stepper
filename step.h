
void steponeanticlockwise(){
  for (int i = 0; i < (stepsPerRevolution/8) ; i++) {
    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);
    
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);
  }
}

void steponeclockwise(){
  for (int i = 0; i < (stepsPerRevolution/8); i++) {
    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);//1
    
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);//2
    
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);//3

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);//4

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);//5

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);//6

    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x); //7

    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);  //8
  }
}


void steptwoanticlockwise(){
  for (int i = 0; i < (stepsPerRevolution/8) ; i++) {
    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//1

    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//2

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//3

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//4


    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//5

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//6

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//7

    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//8

  }
}

void steptwoclockwise(){
  for (int i = 0; i < (stepsPerRevolution/8) ; i++) {
    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x); 

    
    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x); 
}
}

void steponeclockwisesteptwoclockwise(){
  for (int i = 0; i < (stepsPerRevolution/8) ; i++) {
    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    delayMicroseconds (x);//1

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    delayMicroseconds (x);//2

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    delayMicroseconds (x);//3

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//4

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//5

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//6

    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x); //7

    
    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x); //8
}
}
void steponeanticlockwisesteptwoanticlockwise(){
  for (int i = 0; i < (stepsPerRevolution/8) ; i++) {
    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//1

    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//2

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//3

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//4


    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    delayMicroseconds (x);//5

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    delayMicroseconds (x);//6

    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    delayMicroseconds (x);//7

    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    delayMicroseconds (x);//8
}
}
void steponeclockwisesteptwoanticlockwise(){
  for (int i = 0; i < (stepsPerRevolution/8); i++) {
    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);//1
    
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);//2
    
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);//3

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
     digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);//4

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);//5

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    delayMicroseconds (x);//6

    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    delayMicroseconds (x); //7

    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    delayMicroseconds (x);  //8
  }
}



void steponeanticlockwisesteptwoclockwise(){
  for (int i = 0; i < (stepsPerRevolution/8) ; i++) {
    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    delayMicroseconds (x);

    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    delayMicroseconds (x);
    
    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, HIGH);
    delayMicroseconds (x);

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    digitalWrite(A2, LOW);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    
    delayMicroseconds (x);

    digitalWrite(A1, LOW);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A1, HIGH);
    digitalWrite(A1_bar, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(B1_bar, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A2_bar, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(B2_bar, LOW);
    delayMicroseconds (x);
  }
}
