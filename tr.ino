
/*
intL_pin=6; //pins of left line trackingsensor
intM_pin=7; //pins of middle line trackingsensor
intR_pin=8; //pins of right line trackingsensor

intval_L,val_R,val_M; //define the sevariables 77www.keyestudio.com

voidsetup(){
    Serial.begin(9600); //initialize serialcommunicationat9600 bits persecond 
    pinMode(L_pin,INPUT); //make the L_pin as an input 
    pinMode(M_pin,INPUT); //make the M_pin as an input
    pinMode(R_pin,INPUT); //make the R_pin as an input
}

void loop(){
    val_L=digitalRead(L_pin); //read the L_pin:
    val_R = digitalRead(R_pin); //read the R_pin:
    val_M = digitalRead(M_pin); //read the M_pin:
    Serial.print("left:");
    Serial.print(val_L);
    Serial.print("middle:");
    Serial.print(val_M);
    Serial.print("right:");
    Serial.println(val_R);
    delay(500); //delay in between reads for stability
}
*\



