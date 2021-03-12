#define song_size 22
#define tempo 50
#define song_name Twinkle Twinkle Little Star

int melody[] = {
    NOTE_C4, NOTE_C3, NOTE_C4, NOTE_G4, NOTE_C3, NOTE_G4, NOTE_A4, NOTE_F3, NOTE_A4, NOTE_G4, NOTE_C3, NOTE_F4, NOTE_G3, NOTE_F4, NOTE_E4, NOTE_C3, NOTE_E4, NOTE_D4, NOTE_G3, NOTE_D4, NOTE_C4, NOTE_C3
};

int rhythm[] = {
    4, 2, 4, 4, 2, 4, 4, 2, 4, 2, 2, 4, 2, 4, 4, 2, 4, 4, 2, 4, 2, 2
};

int pins[] = {
    D5, D7, D5, D5, D7, D5, D5, D7, D5, D5, D7, D5, D7, D5, D5, D7, D5, D5, D7, D5, D5, D7
};

float waits[] = {
    0.0, 0.25, 0.25, 0.0, 0.25, 0.25, 0.0, 0.25, 0.25, 0.0, 0.5, 0.0, 0.25, 0.25, 0.0, 0.25, 0.25, 0.0, 0.25, 0.25, 0.0, 0.0
};
