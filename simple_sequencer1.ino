/*
  Simple Sequencer
*/
// define sequencer variables
int step[8] = {0,0,0,0,0,0,0,0};
int beep0 = 33;
int beep1 = 262;
int beep2 = 2093;
int beep3 = 0;
int count = 0;

// set inputs and the output
void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
}

// main loop where you store different variables
void loop()
{
  delay(250);
  
  if (digitalRead(A0) == HIGH) {
    step[count] = beep0;
  }
  
  if (digitalRead(A1) == HIGH) {
    step[count] = beep1;
  }
  if (digitalRead(A2) == HIGH) {
    step[count] = beep2;
  }
  if (digitalRead(A3) == HIGH) {
    step[count] = beep3;
  }
  tone(8, step[count], 100);
  count++;
  if(count == 8)
  {
    count = 0;
  }
  delay(250); // Delay a little bit to improve simulation performance
}