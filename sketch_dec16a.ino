int counter = 0;
int mois_sum = 0;
int mois;


void setup() {
  // put your setup code here, to run once:
  pinMode(34, INPUT);
  Serial.begin(9600);
}

void loop() {
  delay(200);
  counter++;
  mois_sum = mois_sum + analogRead(34);
  if (counter == 5) {
    mois = mois_sum/5;
    Serial.println(mois);
    counter = 0;
    mois_sum = 0;
    }

   


}
