
#include "polyphonic.h"
// #include "piezomusic.h"
#include "examplemusic.h"

#define USE_SERIAL Serial

#define BUZZER_PIN_ONE D5
#define BUZZER_PIN_TWO D7
#define BUTTON_PIN D3


void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  // pinMode(LED_BUILTIN, OUTPUT);
  
  // digitalWrite(LED_BUILTIN, HIGH);
}

void loop() {
  
  // put your main code here, to run repeatedly:
// Read the value of the input. It can either be 1 or 0
   int buttonValue = digitalRead(BUTTON_PIN);
   if (buttonValue == LOW){
    // playSong(BUZZER_PIN_ONE, imperial_march_melody, imperial_march_rhythm, 50, 40);
      /* playSong(BUZZER_PIN_ONE, twinkle_twinkle_melody, twinkle_twinkle_rythm, 14, 50);
      playSong(BUZZER_PIN_TWO, zelda_main_theme_melody, zelda_main_theme_rythm, 45, 50); */ 

     /* tone(BUZZER_PIN_ONE, NOTE_A4, 400);
      tone(BUZZER_PIN_TWO, NOTE_C5, 2000);
      delay(800);
      tone(BUZZER_PIN_ONE, NOTE_E5, 400);
      delay(800);
      tone(BUZZER_PIN_ONE, NOTE_G5, 400);
      */ 

     playSong();
   } else {
   }
}
