void setup()
{
randomSeed(analogRead(A0));
Serial.begin(9600);
}

void loop()
{
//Motor 1
int Motor_yon_1 = random(0,2);
int Motor_hiz_1 = random(1,255);
String Motor_yon_1_str;
String Motor_hiz_1_str;
  
Motor_yon_1_str = String(Motor_yon_1);
Motor_hiz_1_str = String(Motor_hiz_1);
if ( Motor_hiz_1 <100){
   Motor_hiz_1_str = "0" + String(Motor_hiz_1);
}
else if (Motor_hiz_1 <10){
    Motor_hiz_1_str = "00" +String( Motor_hiz_1);
}

//Motor 2
int Motor_yon_2 = random(0,2);
int Motor_hiz_2 = random(1,255);
String Motor_yon_2_str;
String Motor_hiz_2_str;
  
Motor_yon_2_str = String(Motor_yon_2);
Motor_hiz_2_str = String(Motor_hiz_2);
if (Motor_hiz_2 <100){
   Motor_hiz_2_str = "0" +String( Motor_hiz_2);
}
else if (Motor_hiz_2 <10){
   Motor_hiz_2_str = "00" +String( Motor_hiz_2);
}


//Motor 3
int Motor_yon_3 = random(0,2);
int Motor_hiz_3 = random(1,255);  
String Motor_yon_3_str;
String Motor_hiz_3_str;
  
Motor_yon_3_str = String(Motor_yon_3);
Motor_hiz_3_str = String(Motor_hiz_3);
if (Motor_hiz_3 <100){
   Motor_hiz_3_str = "0" + String(Motor_hiz_3);
}
else if (Motor_hiz_3 <10){
   Motor_hiz_3_str = "00" +String(Motor_hiz_3);
}

//Motor 4
int Motor_yon_4 = random(0,2);
int Motor_hiz_4 = random(1,255);
String Motor_yon_4_str;
String Motor_hiz_4_str;

Motor_yon_4_str = String(Motor_yon_4);
Motor_hiz_4_str = String(Motor_hiz_4);
if (Motor_hiz_4 <100){
   Motor_hiz_4_str = "0" + String(Motor_hiz_4);
}
else if (Motor_hiz_4 <10){
   Motor_hiz_4_str = "00" +String(Motor_hiz_4);
}


Serial.println("S "+ Motor_yon_1_str + Motor_hiz_1_str +" "+ Motor_yon_2_str + Motor_hiz_2_str +" "+ Motor_yon_3_str + Motor_hiz_3_str +" "+ Motor_yon_4_str + Motor_hiz_4_str+ " F");
Serial.print("");
delay(1000);
}
