//delay time variable
#define d 500

//led pins:
int led1=A0; 
int led2=A1;
int led3=A2;
int led4=A3;
int led5=A4;
int led6=A5;
//button pin:
int button=2;
//variable of the result:
int result;



void setup() {
  //leds as OUTPUT
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  //button as INPUT_PULLUP (sends LOW when pressed)
  pinMode(button, INPUT_PULLUP);

         
}

void loop() {

  
  if(digitalRead(button)==LOW){ //if button pressed:
    result=random(7); //result will generate a random number between 0 and 6
    //random function just select a random number
  }

  
  switch(result){
        case 0: //case result = 0
        //leds turn on 1, 3, & 5 to test - then turn them off
         
         digitalWrite(led6, LOW);
         digitalWrite(led5, HIGH);
         digitalWrite(led4, LOW);
         digitalWrite(led3, HIGH);
         digitalWrite(led2, LOW);
         digitalWrite(led1, HIGH); 
         delay(d);       //wait 200 milliseconds   
                   
         digitalWrite(led6, LOW);
         digitalWrite(led5, LOW);
         digitalWrite(led4, LOW);
         digitalWrite(led3, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led1, LOW);                
      

          break;
        case 1: //case result = 1
        //one led turn on
         digitalWrite(led6, HIGH);
         digitalWrite(led5, LOW);
         digitalWrite(led4, LOW);
         digitalWrite(led3, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led1, LOW); 
         delay(d);         //wait 200 milliseconds     
                   
         digitalWrite(led6, LOW);
         digitalWrite(led5, LOW);
         digitalWrite(led4, LOW);
         digitalWrite(led3, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led1, LOW);                
      
                    
         
   
          break;
        //two leds turn on
        case 2: //case result = 2  
          digitalWrite(led6, HIGH);
          digitalWrite(led5, HIGH);        
          digitalWrite(led4, LOW);
          digitalWrite(led3, LOW);
          digitalWrite(led2, LOW);
          digitalWrite(led1, LOW);   
          delay(d);      //wait 200 milliseconds    
                   
         digitalWrite(led6, LOW);
         digitalWrite(led5, LOW);
         digitalWrite(led4, LOW);
         digitalWrite(led3, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led1, LOW);                
      
               


          break;
        //three leds turn on
        case 3:  //case result = 3
          digitalWrite(led6, HIGH);
          digitalWrite(led5, HIGH);      
          digitalWrite(led4, HIGH);
          digitalWrite(led3, LOW);
          digitalWrite(led2, LOW);
          digitalWrite(led1, LOW);   
          delay(d);     //wait 200 milliseconds      
                   
         digitalWrite(led6, LOW);
         digitalWrite(led5, LOW);
         digitalWrite(led4, LOW);
         digitalWrite(led3, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led1, LOW);                
      
            


          break;
          //four leds turn on
        case 4:  //case result = 4
          digitalWrite(led6, HIGH);   
          digitalWrite(led5, HIGH);      
          digitalWrite(led4, HIGH);
          digitalWrite(led3, HIGH);
          digitalWrite(led2, LOW);
          digitalWrite(led1, LOW);    
          delay(d);    //wait 200 milliseconds    
                   
         digitalWrite(led6, LOW);
         digitalWrite(led5, LOW);
         digitalWrite(led4, LOW);
         digitalWrite(led3, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led1, LOW);                
      
               

          break;
          //five leds turn on
        case 5: //case result = 5
          digitalWrite(led6, HIGH); 
          digitalWrite(led5, HIGH);      
          digitalWrite(led4, HIGH);
          digitalWrite(led3, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led1, LOW);   
          delay(d);   //wait 200 milliseconds    
                   
         digitalWrite(led6, LOW);
         digitalWrite(led5, LOW);
         digitalWrite(led4, LOW);
         digitalWrite(led3, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led1, LOW);                
      
                
         

          break;

/*
          
          //six leds turn on
        case 6: //case result = 6
          digitalWrite(led6, HIGH);
          digitalWrite(led5, HIGH);      
          digitalWrite(led4, HIGH);
          digitalWrite(led3, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led1, HIGH);
          delay(d);       //wait 200 milliseconds   
                   
         digitalWrite(led6, LOW);
         digitalWrite(led5, LOW);
         digitalWrite(led4, LOW);
         digitalWrite(led3, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led1, LOW);                
      
              


          break;              //seven leds turn on
        case 7: //case result = 7
          digitalWrite(led6, HIGH);
          digitalWrite(led5, HIGH);      
          digitalWrite(led4, HIGH);
          digitalWrite(led3, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led1, HIGH);
          delay(d);       //wait 200 milliseconds     
                   
         digitalWrite(led6, LOW);
         digitalWrite(led5, LOW);
         digitalWrite(led4, LOW);
         digitalWrite(led3, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led1, LOW);                
      
            


          break;           //eight leds turn on
*/     
  }

  
}
