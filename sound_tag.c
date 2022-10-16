int micpin=10;//for sense sound

int buzz=12;// give an alert

void setup()
{

pinMode (micpin, INPUT);

pinMode (buzz, OUTPUT);

}

void loop()
{

    if (digitalRead (micpin)==HIGH)
        {
           if (digitalRead(buzz)==LOW)
              {
                  digitalWrite (buzz, HIGH);
                  delay(1000);
                  digitalWrite(buzz,LOW);
                  delay(1000);
                  digitalWrite (buzz, HIGH);
                  delay(1000);
                  digitalWrite(buzz,LOW);
                  delay(1000);
                  digitalWrite (buzz, HIGH);
                  delay(1000);
                  digitalWrite(buzz,LOW);
              }
           else
              {
                  digitalWrite(buzz,LOW);
              }

           delay(1000);
          }

}