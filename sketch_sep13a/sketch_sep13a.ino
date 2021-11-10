void setup() {
  /*semua program di void setup hanya akan di jalankan sekali saja*/
  Serial.begin(9600);     
  Serial.println("Welcome to IDN Boarding School");

}

void loop() {
  /*Semua program yang ada di void loop() akan di jalankan berkali-kali secara berkala*/
  Serial.println("Welcome to IDN");
  delay(1000);

}
