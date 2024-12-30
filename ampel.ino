int DELAY = 1000;
uint8_t mode = HIGH;

int sign_RED = 7;      //for a equals 2
int sign_YELLOW = 6;   //for a equals 1
int sign_GREEN = 5;    //for a equals 0

void printChar(int a){
  if(a == 0){digitalWrite(sign_GREEN, HIGH);}
  else if(a == 1){digitalWrite(sign_YELLOW, HIGH);}
  else if(a == 2){digitalWrite(sign_RED, HIGH);}
  else if(a == 3){digitalWrite(sign_RED, HIGH); digitalWrite(sign_YELLOW, HIGH);}

  
  
}

void setup() {
  Serial.begin(9600);
  Serial.println("Setting up system...");

  pinMode(sign_GREEN, OUTPUT);
  pinMode(sign_YELLOW, OUTPUT);
  pinMode(sign_RED, OUTPUT);

  //Starting test lightning
  digitalWrite(sign_GREEN, HIGH);
  digitalWrite(sign_YELLOW, HIGH);
  digitalWrite(sign_RED, HIGH);
  delay(DELAY);
  digitalWrite(sign_GREEN, LOW);
  digitalWrite(sign_YELLOW, LOW);
  digitalWrite(sign_RED, LOW);
  delay(DELAY);
 

}

void loop() {
  int i = 0;

  while(i<5){
    if(i!=4){
      printChar(i);

      delay(DELAY);
      digitalWrite(sign_GREEN, LOW);
      digitalWrite(sign_YELLOW, LOW);
      digitalWrite(sign_RED, LOW);
    }
   
    

    Serial.println(i);
    if(i==4){i=0;}
    else{i++;}



    
  }

}
