int mois;
int mois_sum = 0;
int counter = 0;
int mois_av;

void setup() {
  // put your setup code here, to run once:
  pinMode(34, INPUT);
  pinMode(21, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  counter ++;
  mois = analogRead(34);
  mois_sum = mois_sum + mois;
  
  if (counter == 5) {
    mois_av = mois_sum/counter;
    Serial.println(mois_av);
  
    if (mois_av > 300) {
      digitalWrite(21, 1);
      }
    else {
      digitalWrite(21, 0);
      }
      counter = 0;
      mois_sum = 0;
  }
}
