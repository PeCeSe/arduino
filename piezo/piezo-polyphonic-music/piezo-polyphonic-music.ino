
#include "notes.h"
// #include "twinkleTwinkle.h"
// #include "imperialMarch.h"
#include "raidersMarch.h"

#define USE_SERIAL Serial

#define BUZZER_PIN_ONE D5
#define BUZZER_PIN_TWO D7
#define BUTTON_PIN D3


void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
  
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
   int buttonValue = digitalRead(BUTTON_PIN);
   if (buttonValue == LOW){
     playSong();
   }
}

void playSong() {
  int tempoMillis = 60000.0/tempo;
  for (int thisNote = 0; thisNote < song_size; thisNote++) {
    int noteDuration = tempoMillis / rhythm[thisNote];
    tone(pins[thisNote], melody[thisNote], noteDuration);
    delay(tempoMillis * waits[thisNote] * 1.30);
  }
}
