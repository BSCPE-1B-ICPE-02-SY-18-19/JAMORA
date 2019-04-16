#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {13, 12, 11, 10}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {9,8,7,6}; //connect to the column pinouts of the keypad
const int trigPin =23;
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
}

    int sum=0,a,x,r,temp,c=0,c1=0,i=2;
void loop(){
  char key = keypad.getKey();

    // just print the pressed key
   if (key){
    Serial.println(key);
  } 
  
  // this checkes if 4 is pressed, then do something. Here  we print the text but you can control something.


    if (key =='1'){
      digitalWrite(27, LOW);
      digitalWrite(28, LOW);
      digitalWrite(29, LOW);
      digitalWrite(30, LOW);
      digitalWrite(31, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(33, HIGH);
      digitalWrite(34, HIGH);
      digitalWrite(35, HIGH);
      digitalWrite(36, HIGH);
      digitalWrite(37, HIGH);
      digitalWrite(38, LOW);
      digitalWrite(39, LOW);
      digitalWrite(40, HIGH);
      digitalWrite(41, LOW);
      a=key-48;
      sum=a+sum*10;
      Serial.println(sum);
    } 
  
    if (key =='2'){
      digitalWrite(27, HIGH);
      digitalWrite(28, HIGH);
      digitalWrite(29, HIGH);
      digitalWrite(30, LOW);
      digitalWrite(31, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(33, LOW);
      digitalWrite(34, HIGH);
      digitalWrite(35, LOW);
      digitalWrite(36, HIGH);
      digitalWrite(37, HIGH);
      digitalWrite(38, LOW);
      digitalWrite(39, HIGH);
      digitalWrite(40, HIGH);
      digitalWrite(41, HIGH);
      a=key-48;
      sum=a+sum*10;
      Serial.println(sum);
    } 
    
    if (key =='3'){
      digitalWrite(27, HIGH);
      digitalWrite(28, HIGH);
      digitalWrite(29, HIGH);
      digitalWrite(30, HIGH);
      digitalWrite(31, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(33, LOW);
      digitalWrite(34, HIGH);
      digitalWrite(35, LOW);
      digitalWrite(36, HIGH);
      digitalWrite(37, HIGH);
      digitalWrite(38, LOW);
      digitalWrite(39, HIGH);
      digitalWrite(40, HIGH);
      digitalWrite(41, LOW);
      a=key-48;
      sum=a+sum*10;
      Serial.println(sum);
    } 
    
    if (key =='4'){
      digitalWrite(27, HIGH);
      digitalWrite(28, HIGH);
      digitalWrite(29, HIGH);
      digitalWrite(30, HIGH);
      digitalWrite(31, HIGH);
      digitalWrite(32, LOW);
      digitalWrite(33, LOW);
      digitalWrite(34, HIGH);
      digitalWrite(35, LOW);
      digitalWrite(36, LOW);
      digitalWrite(37, HIGH);
      digitalWrite(38, HIGH);
      digitalWrite(39, HIGH);
      digitalWrite(40, LOW);
      digitalWrite(41, LOW);
      a=key-48;
      sum=a+sum*10;
      Serial.println(sum);
    } 
  
     if (key =='5'){
      digitalWrite(27, HIGH);
      digitalWrite(28, LOW);
      digitalWrite(29, HIGH);
      digitalWrite(30, HIGH);
      digitalWrite(31, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(33, LOW);
      digitalWrite(34, HIGH);
      digitalWrite(35, LOW);
      digitalWrite(36, HIGH);
      digitalWrite(37, HIGH);
      digitalWrite(38, HIGH);
      digitalWrite(39, HIGH);
      digitalWrite(40, HIGH);
      digitalWrite(41, LOW);
      a=key-48;
      sum=a+sum*10;
      Serial.println(sum);
    } 
  
     if (key =='6'){
      digitalWrite(27, HIGH);
      digitalWrite(28, LOW);
      digitalWrite(29, HIGH);
      digitalWrite(30, HIGH);
      digitalWrite(31, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(33, LOW);
      digitalWrite(34, HIGH);
      digitalWrite(35, LOW);
      digitalWrite(36, HIGH);
      digitalWrite(37, HIGH);
      digitalWrite(38, HIGH);
      digitalWrite(39, HIGH);
      digitalWrite(40, HIGH);
      digitalWrite(41, HIGH);
      a=key-48;
      sum=a+sum*10;
      Serial.println(sum);
    } 
  
     if (key =='7'){
      digitalWrite(27, HIGH);
      digitalWrite(28, HIGH);
      digitalWrite(29, HIGH);
      digitalWrite(30, HIGH);
      digitalWrite(31, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(33, LOW);
      digitalWrite(34, LOW);
      digitalWrite(35, LOW);
      digitalWrite(36, LOW);
      digitalWrite(37, HIGH);
      digitalWrite(38, HIGH);
      digitalWrite(39, HIGH);
      digitalWrite(40, LOW);
      digitalWrite(41, LOW);
      a=key-48;
      sum=a+sum*10;
      Serial.println(sum);
    } 
  
     if (key =='8'){
      digitalWrite(27, HIGH);
      digitalWrite(28, HIGH);
      digitalWrite(29, HIGH);
      digitalWrite(30, HIGH);
      digitalWrite(31, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(33, LOW);
      digitalWrite(34, HIGH);
      digitalWrite(35, LOW);
      digitalWrite(36, HIGH);
      digitalWrite(37, HIGH);
      digitalWrite(38, HIGH);
      digitalWrite(39, HIGH);
      digitalWrite(40, HIGH);
      digitalWrite(41, HIGH);
      a=key-48;
      sum=a+sum*10;
      Serial.println(sum);
    } 
  
     if (key =='9'){
      digitalWrite(27, HIGH);
      digitalWrite(28, HIGH);
      digitalWrite(29, HIGH);
      digitalWrite(30, HIGH);
      digitalWrite(31, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(33, LOW);
      digitalWrite(34, HIGH);
      digitalWrite(35, LOW);
      digitalWrite(36, LOW);
      digitalWrite(37, HIGH);
      digitalWrite(38, HIGH);
      digitalWrite(39, HIGH);
      digitalWrite(40, LOW);
      digitalWrite(41, LOW);
      a=key-48;
      sum=a+sum*10;
      Serial.println(sum);
    } 
  
     if (key =='0'){
      digitalWrite(27, HIGH);
      digitalWrite(28, HIGH);
      digitalWrite(29, HIGH);
      digitalWrite(30, HIGH);
      digitalWrite(31, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(33, LOW);
      digitalWrite(34, LOW);
      digitalWrite(35, LOW);
      digitalWrite(36, HIGH);
      digitalWrite(37, HIGH);
      digitalWrite(38, HIGH);
      digitalWrite(39, HIGH);
      digitalWrite(40, HIGH);
      digitalWrite(41, HIGH);
      a=key-48;
      sum=a+sum*10;
      Serial.println(sum);
    } 
   
  if (key=='D'){
    digitalWrite(22, LOW);
    digitalWrite(23, LOW);
    digitalWrite(24, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(28, LOW);
    digitalWrite(29, LOW);
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, LOW);
    digitalWrite(37, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(40, LOW);
    digitalWrite(41, LOW);
    digitalWrite(42, LOW);
    digitalWrite(43, LOW);
    digitalWrite(44, LOW);
    digitalWrite(45, LOW);
    digitalWrite(46, LOW);
    sum=0;
    }
 

 if (key == 'A')
 {
   digitalWrite(22, LOW);
    digitalWrite(23, LOW);
    digitalWrite(24, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(28, LOW);
    digitalWrite(29, LOW);
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, LOW);
    digitalWrite(37, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(40, LOW);
    digitalWrite(41, LOW);
    digitalWrite(42, LOW);
    digitalWrite(43, LOW);
    digitalWrite(44, LOW);
    digitalWrite(45, LOW);
    digitalWrite(46, LOW);
  temp=sum;
  while (temp!=0)
  {
    temp=temp/10;
    c++;
  }
  Serial.println(sum);
  while (sum!=1)
  {
    if (sum%i==0)
    {
      c1++;
      sum=sum/i;
    }
    else if (sum%i!=0)
    {
      i++;
    }
  }
  Serial.println(c);
  Serial.println(c1);

  if (c1>c)
  {
//LA
    digitalWrite(22, HIGH);
    digitalWrite(23, LOW);
    digitalWrite(24, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, HIGH);
    digitalWrite(28, LOW);
    digitalWrite(29, LOW);
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, HIGH);
    digitalWrite(33, LOW);
    digitalWrite(34, HIGH);
    digitalWrite(35, LOW);
    digitalWrite(36, HIGH);
    digitalWrite(37, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(39, LOW);
    digitalWrite(40, LOW);
    digitalWrite(41, HIGH);
    digitalWrite(42, HIGH);
    digitalWrite(43, LOW);
    digitalWrite(44, LOW);
    digitalWrite(45, LOW);
    digitalWrite(46, LOW);
    delay(1000);
//ma
    digitalWrite(22, HIGH);
    digitalWrite(23, LOW);
    digitalWrite(24, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(28, HIGH);
    digitalWrite(29, HIGH);
    digitalWrite(30, HIGH);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, HIGH);
    digitalWrite(35, LOW);
    digitalWrite(36, HIGH);
    digitalWrite(37, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, HIGH);
    digitalWrite(40, HIGH);
    digitalWrite(41, LOW);
    digitalWrite(42, LOW);
    digitalWrite(43, HIGH);
    digitalWrite(44, HIGH);
    digitalWrite(45, HIGH);
    digitalWrite(46, LOW);
    delay(1000); 
//na
    digitalWrite(22, LOW);
    digitalWrite(23, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(26, HIGH);
    digitalWrite(27, HIGH);
    digitalWrite(28, LOW);
    digitalWrite(29, LOW);
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, HIGH);
    digitalWrite(33, HIGH);
    digitalWrite(34, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(36, HIGH);
    digitalWrite(37, HIGH);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(40, LOW);
    digitalWrite(41, LOW);
    digitalWrite(42, LOW);
    digitalWrite(43, HIGH);
    digitalWrite(44, HIGH);
    digitalWrite(45, HIGH);
    digitalWrite(46, HIGH);
    delay(1000); 
//nga
    digitalWrite(22, LOW);
    digitalWrite(23, LOW);
    digitalWrite(24, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(28, LOW);
    digitalWrite(29, HIGH);
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, HIGH);
    digitalWrite(34, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(36, LOW);
    digitalWrite(37, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(39, LOW);
    digitalWrite(40, HIGH);
    digitalWrite(41, HIGH);
    digitalWrite(42, HIGH);
    digitalWrite(43, HIGH);
    digitalWrite(44, LOW);
    digitalWrite(45, HIGH);
    digitalWrite(46, HIGH);
    delay(1000); 
//sa
    digitalWrite(22, HIGH);
    digitalWrite(23, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(26, HIGH);
    digitalWrite(27, HIGH);
    digitalWrite(28, LOW);
    digitalWrite(29, HIGH);
    digitalWrite(30, LOW);
    digitalWrite(31, HIGH);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, HIGH);
    digitalWrite(35, LOW);
    digitalWrite(36, LOW);
    digitalWrite(37, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(39, HIGH);
    digitalWrite(40, HIGH);
    digitalWrite(41, HIGH);
    digitalWrite(42, HIGH);
    digitalWrite(43, LOW);
    digitalWrite(44, LOW);
    digitalWrite(45, LOW);
    digitalWrite(46, LOW);
    delay(1000); 
//ta
    digitalWrite(22, LOW);
    digitalWrite(23, HIGH);
    digitalWrite(24, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(28, HIGH);
    digitalWrite(29, LOW);
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, HIGH);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, LOW);
    digitalWrite(37, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, HIGH);
    digitalWrite(40, HIGH);
    digitalWrite(41, HIGH);
    digitalWrite(42, LOW);
    digitalWrite(43, LOW);
    digitalWrite(44, HIGH);
    digitalWrite(45, LOW);
    digitalWrite(46, LOW);
    delay(1000); 
//a
    digitalWrite(22, LOW);
    digitalWrite(23, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(26, LOW);
    digitalWrite(27, HIGH);
    digitalWrite(28, LOW);
    digitalWrite(29, LOW);
    digitalWrite(30, LOW);
    digitalWrite(31, HIGH);
    digitalWrite(32, HIGH);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, HIGH);
    digitalWrite(37, HIGH);
    digitalWrite(38, LOW);
    digitalWrite(39, HIGH);
    digitalWrite(40, HIGH);
    digitalWrite(41, HIGH);
    digitalWrite(42, LOW);
    digitalWrite(43, LOW);
    digitalWrite(44, HIGH);
    digitalWrite(45, LOW);
    digitalWrite(46, LOW);
    delay(1000); 
//ya
    digitalWrite(22, HIGH);
    digitalWrite(23, LOW);
    digitalWrite(24, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(28, HIGH);
    digitalWrite(29, HIGH);
    digitalWrite(30, HIGH);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, HIGH);
    digitalWrite(37, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(40, HIGH);
    digitalWrite(41, LOW);
    digitalWrite(42, LOW);
    digitalWrite(43, LOW);
    digitalWrite(44, LOW);
    digitalWrite(45, HIGH);
    digitalWrite(46, LOW);
    delay(1000); 
   digitalWrite(22, LOW);
    digitalWrite(23, LOW);
    digitalWrite(24, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(28, LOW);
    digitalWrite(29, LOW);
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, LOW);
    digitalWrite(37, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(40, LOW);
    digitalWrite(41, LOW);
    digitalWrite(42, LOW);
    digitalWrite(43, LOW);
    digitalWrite(44, LOW);
    digitalWrite(45, LOW);
    digitalWrite(46, LOW);
  }
  
  sum=0;
  c=0; 
  c1=0;
  i=2;
 }
}
