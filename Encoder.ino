void setup()
{
randomSeed(analogRead(A0));
Serial.begin(9600);
}

void loop()
{
//Motor 1
int Motor1_yon = random(0,2);
int Motor1_hiz = random(1,255);
String Motor1_yon_str;
String Motor1_hiz_str;
  
Motor1_yon_str = String(Motor1_yon);
Motor1_hiz_str = String(Motor1_hiz);
if ( Motor1_hiz <100){
   Motor1_hiz_str = "0" + String(Motor1_hiz);
}
else if (Motor1_hiz <10){
    Motor1_hiz_str = "00" +String( Motor1_hiz);
}

//Motor 2
int Motor2_yon = random(0,2);
int Motor2_hiz = random(1,255);
String Motor2_yon_str;
String Motor2_hiz_str;
  
Motor2_yon_str = String(Motor2_yon);
Motor2_hiz_str = String(Motor2_hiz);
if (Motor2_hiz <100){
   Motor2_hiz_str = "0" +String( Motor2_hiz);
}
else if (Motor2_hiz <10){
   Motor2_hiz_str = "00" +String( Motor2_hiz);
}


//Motor 3
int Motor3_yon = random(0,2);
int Motor3_hiz = random(1,255);  
String Motor3_yon_str;
String Motor3_hiz_str;
  
Motor3_yon_str = String(Motor3_yon);
Motor3_hiz_str = String(Motor3_hiz);
if (Motor3_hiz <100){
   Motor3_hiz_str = "0" + String(Motor3_hiz);
}
else if (Motor3_hiz <10){
   Motor3_hiz_str = "00" +String(Motor3_hiz);
}

//Motor 4
int Motor4_yon = random(0,2);
int Motor4_hiz = random(1,255);
String Motor4_yon_str;
String Motor4_hiz_str;

Motor4_yon_str = String(Motor4_yon);
Motor4_hiz_str = String(Motor4_hiz);
if (Motor4_hiz <100){
   Motor4_hiz_str = "0" + String(Motor4_hiz);
}
else if (Motor4_hiz <10){
   Motor4_hiz_str = "00" +String(Motor4_hiz);
}


Serial.println("S "+ Motor1_yon_str + Motor1_hiz_str +" "+ Motor2_yon_str + Motor2_hiz_str +" "+ Motor3_yon_str + Motor3_hiz_str +" "+ Motor4_yon_str + Motor4_hiz_str+ " F");
Serial.print("");
delay(1000);
}
