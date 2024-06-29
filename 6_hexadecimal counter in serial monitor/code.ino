//byte myByte = 0;//the num give 0 is in decimal
//byte myByte = B00000000;//the num give 00000000 is in binary
//byte myByte = B0;//the num give 0 is in binary//the above one and this one is same
byte myByte = 0x00;//the num give 0 is in hexadecimal
//byte myByte = 16;//the num give 16 is in decimal


int dt = 500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(myByte,DEC);
  Serial.print(" ");
  Serial.print(myByte,BIN);
  Serial.print(" ");
  Serial.print(myByte,HEX);//print hexdecimal number
  Serial.println(" ");
  myByte = myByte+1;
  delay(dt);

}
