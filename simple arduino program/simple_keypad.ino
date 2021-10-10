int ROWS[4] = {10, 11, 12, 13};
int COLS[4] = {6, 7, 8, 9};

void setup()
{
    // put your setup code here, to run once:
    //Make column pins output
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    //Make row pins input
    pinMode(10, INPUT);
    pinMode(11, INPUT);
    pinMode(12, INPUT);
    pinMode(13, INPUT);

    Serial.begin(9600); //For printing out the output
}

void loop()
{
    // put your main code here, to run repeatedly:
    digitalWrite(COLS[0], HIGH);
    digitalWrite(COLS[1], LOW);
    digitalWrite(COLS[2], LOW);
    digitalWrite(COLS[3], LOW);

    if (digitalRead(ROWS[0]) == HIGH && digitalRead(ROWS[1]) == LOW && digitalRead(ROWS[2]) == LOW && digitalRead(ROWS[3]) == LOW)
    {
        Serial.println("1");
    }
    else if (digitalRead(ROWS[0]) == LOW && digitalRead(ROWS[1]) == HIGH && digitalRead(ROWS[2]) == LOW && digitalRead(ROWS[3]) == LOW)
    {
        Serial.println("4");
    }
    else if (digitalRead(ROWS[0]) == LOW && digitalRead(ROWS[1]) == LOW && digitalRead(ROWS[2]) == HIGH && digitalRead(ROWS[3]) == LOW)
    {
        Serial.println("7");
    }
    else if (digitalRead(ROWS[0]) == LOW && digitalRead(ROWS[1]) == LOW && digitalRead(ROWS[2]) == LOW && digitalRead(ROWS[3]) == HIGH)
    {
        Serial.println("*");
    }
    else
    {
        ;
    }
    delay(100);

    digitalWrite(COLS[0], LOW);
    digitalWrite(COLS[1], HIGH);
    digitalWrite(COLS[2], LOW);
    digitalWrite(COLS[3], LOW);

    if (digitalRead(ROWS[0]) == HIGH && digitalRead(ROWS[1]) == LOW && digitalRead(ROWS[2]) == LOW && digitalRead(ROWS[3]) == LOW)
    {
        Serial.println("2");
    }
    else if (digitalRead(ROWS[0]) == LOW && digitalRead(ROWS[1]) == HIGH && digitalRead(ROWS[2]) == LOW && digitalRead(ROWS[3]) == LOW)
    {
        Serial.println("5");
    }
    else if (digitalRead(ROWS[0]) == LOW && digitalRead(ROWS[1]) == LOW && digitalRead(ROWS[2]) == HIGH && digitalRead(ROWS[3]) == LOW)
    {
        Serial.println("8");
    }
    else if (digitalRead(ROWS[0]) == LOW && digitalRead(ROWS[1]) == LOW && digitalRead(ROWS[2]) == LOW && digitalRead(ROWS[3]) == HIGH)
    {
        Serial.println("0");
    }
    else
    {
        ;
    }
    delay(100);

    digitalWrite(COLS[0], LOW);
    digitalWrite(COLS[1], LOW);
    digitalWrite(COLS[2], HIGH);
    digitalWrite(COLS[3], LOW);

    if (digitalRead(ROWS[0]) == HIGH && digitalRead(ROWS[1]) == LOW && digitalRead(ROWS[2]) == LOW && digitalRead(ROWS[3]) == LOW)
    {
        Serial.println("3");
    }
    else if (digitalRead(ROWS[0]) == LOW && digitalRead(ROWS[1]) == HIGH && digitalRead(ROWS[2]) == LOW && digitalRead(ROWS[3]) == LOW)
    {
        Serial.println("6");
    }
    else if (digitalRead(ROWS[0]) == LOW && digitalRead(ROWS[1]) == LOW && digitalRead(ROWS[2]) == HIGH && digitalRead(ROWS[3]) == LOW)
    {
        Serial.println("9");
    }
    else if (digitalRead(ROWS[0]) == LOW && digitalRead(ROWS[1]) == LOW && digitalRead(ROWS[2]) == LOW && digitalRead(ROWS[3]) == HIGH)
    {
        Serial.println("#");
    }
    else
    {
        ;
    }
    delay(100);

    digitalWrite(COLS[0], LOW);
    digitalWrite(COLS[1], LOW);
    digitalWrite(COLS[2], LOW);
    digitalWrite(COLS[3], HIGH);

    if (digitalRead(ROWS[0]) == HIGH && digitalRead(ROWS[1]) == LOW && digitalRead(ROWS[2]) == LOW && digitalRead(ROWS[3]) == LOW)
    {
        Serial.println("A");
    }
    else if (digitalRead(ROWS[0]) == LOW && digitalRead(ROWS[1]) == HIGH && digitalRead(ROWS[2]) == LOW && digitalRead(ROWS[3]) == LOW)
    {
        Serial.println("B");
    }
    else if (digitalRead(ROWS[0]) == LOW && digitalRead(ROWS[1]) == LOW && digitalRead(ROWS[2]) == HIGH && digitalRead(ROWS[3]) == LOW)
    {
        Serial.println("C");
    }
    else if (digitalRead(ROWS[0]) == LOW && digitalRead(ROWS[1]) == LOW && digitalRead(ROWS[2]) == LOW && digitalRead(ROWS[3]) == HIGH)
    {
        Serial.println("D");
    }
    else
    {
        ;
    }
    delay(100);
}