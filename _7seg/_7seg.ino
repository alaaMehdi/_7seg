void Aff_7_Seg(int chiffre)
{
  switch(chiffre){
    case 0:{digitalWrite(0,0);digitalWrite(1,1);digitalWrite(2,1);digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,1);digitalWrite(6,1);break;}
    case 1:{digitalWrite(0,0);digitalWrite(1,0);digitalWrite(2,0);digitalWrite(3,0);digitalWrite(4,1);digitalWrite(5,1);digitalWrite(6,0);break;}
    case 2:{digitalWrite(0,1);digitalWrite(1,0);digitalWrite(2,1);digitalWrite(3,1);digitalWrite(4,0);digitalWrite(5,1);digitalWrite(6,1);break;}
    case 3:{digitalWrite(0,1);digitalWrite(1,0);digitalWrite(2,0);digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,1);digitalWrite(6,1);break;}
    case 4:{digitalWrite(0,1);digitalWrite(1,1);digitalWrite(2,0);digitalWrite(3,0);digitalWrite(4,1);digitalWrite(5,1);digitalWrite(6,0);break;}
    case 5:{digitalWrite(0,1);digitalWrite(1,1);digitalWrite(2,0);digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,0);digitalWrite(6,1);break;}
    case 6:{digitalWrite(0,1);digitalWrite(1,1);digitalWrite(2,1);digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,0);digitalWrite(6,1);break;}
    case 7:{digitalWrite(0,0);digitalWrite(1,0);digitalWrite(2,0);digitalWrite(3,0);digitalWrite(4,1);digitalWrite(5,1);digitalWrite(6,1);break;}
    case 8:{digitalWrite(0,1);digitalWrite(1,1);digitalWrite(2,1);digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,1);digitalWrite(6,1);break;}
    case 9:{digitalWrite(0,1);digitalWrite(1,1);digitalWrite(2,0);digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,1);digitalWrite(6,1);break;}
    default:{digitalWrite(0,1);digitalWrite(1,0);digitalWrite(2,0);digitalWrite(3,0);digitalWrite(4,0);digitalWrite(5,0);digitalWrite(6,0);break;}
    }  
  
  
  
  
}

void compteur(){
  for(int i=0;i==9;i++)
  Aff_7_Seg(i);
}

void setup() {
for(int i=0;i<7;i++)
  pinMode(i,OUTPUT);
}

void loop() {

  compteur();


}
