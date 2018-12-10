#include <string.h>

const int LEDpins[] = {9,8,7,6,5,4,3,2};
int rows= 8;
int i,I;
int irPin = 10;

void setup() {
  // put your setup code here, to run once:

    for (i = 0; i < rows; i++){
      pinMode(LEDpins[i], OUTPUT);
  }
pinMode(irPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char str[] = "HRIDOY";
  int L=strlen(str);
  bool currentIR = digitalRead(irPin);
  if(currentIR){
    for(I=0;I<L;)
  {
  if(str[I]=='a'){a();delay(1);space();delay(1);}
  else if(str[I]=='b'){b();delay(1);space();delay(1);}
  else if(str[I]=='c'){c();delay(1);space();delay(1);}
  else if(str[I]=='d'){d();delay(1);space();delay(1);}
  else if(str[I]=='e'){e();delay(1);space();delay(1);}
  else if(str[I]=='f'){f();delay(1);space();delay(1);}
  else if(str[I]=='g'){g();delay(1);space();delay(1);}
  else if(str[I]=='h'){h();delay(1);space();delay(1);}
  else if(str[I]=='i'){ii();delay(1);space();delay(1);}
  else if(str[I]=='j'){j();delay(1);space();delay(1);}
  else if(str[I]=='k'){k();delay(1);space();delay(1);}
  else if(str[I]=='l'){l();delay(1);space();delay(1);}
  else if(str[I]=='m'){m();delay(1);space();delay(1);}
  else if(str[I]=='n'){n();delay(1);space();delay(1);}
  else if(str[I]=='o'){o();delay(1);space();delay(1);}
  else if(str[I]=='p'){p();delay(1);space();delay(1);}
  else if(str[I]=='q'){q();delay(1);space();delay(1);}
  else if(str[I]=='r'){r();delay(1);space();delay(1);}
  else if(str[I]=='s'){s();delay(1);space();delay(1);}
  else if(str[I]=='t'){t();delay(1);space();delay(1);}
  else if(str[I]=='u'){u();delay(1);space();delay(1);}
  else if(str[I]=='v'){v();delay(1);space();delay(1);}
  else if(str[I]=='w'){w();delay(1);space();delay(1);}
  else if(str[I]=='x'){x();delay(1);space();delay(1);}
  else if(str[I]=='y'){y();delay(1);space();delay(1);}
  else if(str[I]=='z'){z();delay(1);space();delay(1);} 

  I++;
  }
}
  //space();
  //delay(187);
}

int setTim()
{
  return 1; 
}

void space()
{
  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());
}

void space2()
{
  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());
}

void a(){
  //2nd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());
  //3rd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());
  //4th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());
  //5th
  
  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //6th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());
  }

void b(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

   //2nd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim()); 

  //3rd

    digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //4th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());
  
  //5th

    digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());
}

void c(){

//1st

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //2nd

    digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //3rd

      digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //4th

      digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //5th

      digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());
  
  }

  void d(){

  //1st

    digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //2nd

        digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //3rd

        digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //4th

        digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //5th

      digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());
    
    }


    void e(){

//1st

    digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //2nd

      digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //3rd

        digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //4th

        digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //5th

        digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());
      
      }

void f(){
  //2nd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());
  //3rd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());
  //4th
  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());
  //5th
  
  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //6th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());
  }

  void g(){

  //1st
  
  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

      //2nd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //3rd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //4th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());
  }

  void h(){

  //1st
 
  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());  

  //2nd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);  

  delay(setTim());

  //3rd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);  

  delay(setTim());

  //4th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);  

  delay(setTim());

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());     

}

void ii(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);  

  delay(setTim());

  //2nd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);  

  delay(setTim());

  //3rd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());   

  //4th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);  

  delay(setTim());        

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);  

  delay(setTim());
  
  }

  void j(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);  

  delay(setTim()); 
   
  //2nd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);  

  delay(setTim());

  //3rd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);  

  delay(setTim());

  //4th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);  

  delay(setTim());

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());        
    
  }

  void k()
  {
  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //2nd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

      //3rd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //4th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());
  }

  void l(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());  

  //2nd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim()); 

  //3rd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //4th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim()); 

  //5th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());
      
}

void m(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());  

  //2nd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());  

  //3rd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());    

  //4th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());    

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());      
    
}

void n(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //2nd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //3rd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //4th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());     
    
}

  void o(){

  //1st

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //2nd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //3rd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //4th
         
  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //5th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());  
     
}

  void p(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim()); 

  //2nd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //3rd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());
       
  //4th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //5th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());  
      
}

  void q(){

  //1st

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //2nd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //3rd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim()); 

  //4th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //5th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());  
    
}

  void r(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());  

  //2nd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //3rd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //4th
      
  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim()); 

  //5th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());
       
}

  void s(){

  //1st

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());  

  //2nd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim()); 

  //3rd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim()); 

  //4th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim()); 

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());   
    
}

  void t(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //2nd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //3rd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //4th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim()); 

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());         
      
}
  
  void u()
  {
  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //2nd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //3rd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //4th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());
}

void v(){
  
  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim()); 

  //2nd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());  

  //3rd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //4th    

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());    
  
}

void w(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //2nd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());  

  //3rd
  
  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim()); 

  //4th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim()); 

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());
        
}

void x(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //2nd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //3rd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim()); 

  //4th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());  
  
}

void y(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim()); 

  //2nd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());  

  //3rd

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //4th

  digitalWrite(LEDpins[0],LOW);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());  

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],LOW);

  delay(setTim());      
  
}

void z(){

  //1st

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());  

  //2nd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],HIGH);
  digitalWrite(LEDpins[6],HIGH);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());  

  //3rd

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],HIGH);
  digitalWrite(LEDpins[4],HIGH);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());  

  //4th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],HIGH);
  digitalWrite(LEDpins[2],HIGH);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());

  //5th

  digitalWrite(LEDpins[0],HIGH);
  digitalWrite(LEDpins[1],LOW);
  digitalWrite(LEDpins[2],LOW);
  digitalWrite(LEDpins[3],LOW);
  digitalWrite(LEDpins[4],LOW);
  digitalWrite(LEDpins[5],LOW);
  digitalWrite(LEDpins[6],LOW);
  digitalWrite(LEDpins[7],HIGH);

  delay(setTim());  
}



