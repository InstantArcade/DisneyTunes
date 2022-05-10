
// Note frequencies
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

// Note durations (relative)
#define FULL_NOTE 400
#define HALF_NOTE 200
#define QUARTER_NOTE 100
#define EIGHTH_NOTE 50
#define SIXTEENTH_NOTE 25;

// Song data - in PROGMEM (FLASH Memory)
const float MMC_March_SpeedMod = 1.5f; // Tempo modifier (not everything is a 4/4 beat)
const PROGMEM int MMC_March_Music[] = {
NOTE_C6, QUARTER_NOTE,   // Who's
  NOTE_C6, EIGHTH_NOTE,   // The
  NOTE_C6, QUARTER_NOTE,  // Lead-
  NOTE_C6, EIGHTH_NOTE,   // -er
  NOTE_C6, QUARTER_NOTE,  // Of
  NOTE_C6, EIGHTH_NOTE,   // The
  NOTE_C6, QUARTER_NOTE,  // Club
  NOTE_C6, EIGHTH_NOTE,   // That's
  
  NOTE_D6, QUARTER_NOTE,  // Made
  NOTE_C6, EIGHTH_NOTE,   // For
  NOTE_B5, QUARTER_NOTE,  // You
  NOTE_A5, EIGHTH_NOTE,   // And
  NOTE_G5, HALF_NOTE,   // Me

  0, QUARTER_NOTE,      // Pause

  NOTE_C6, QUARTER_NOTE,  // M.
  NOTE_C6, EIGHTH_NOTE,   // I.
  NOTE_C6, QUARTER_NOTE,  // C.

  0, EIGHTH_NOTE,       // Pause
  
  NOTE_C6, QUARTER_NOTE,  // K.
  NOTE_C6, EIGHTH_NOTE,   // E.
  NOTE_C6, QUARTER_NOTE,  // Y.
  
  0, EIGHTH_NOTE,       // Pause

  NOTE_E6, QUARTER_NOTE,  // M.
  NOTE_C6, EIGHTH_NOTE,   // O.
  NOTE_D6, QUARTER_NOTE,  // U.
  NOTE_B5, EIGHTH_NOTE,   // S.
  NOTE_C6, HALF_NOTE,   // E.

  0, QUARTER_NOTE,        // Pause

  NOTE_C6, QUARTER_NOTE,  // Who's
  NOTE_C6, EIGHTH_NOTE,   // The
  NOTE_C6, QUARTER_NOTE,  // Lead-
  NOTE_C6, EIGHTH_NOTE,   // -er
  NOTE_C6, QUARTER_NOTE,  // Of
  NOTE_C6, EIGHTH_NOTE,   // The
  NOTE_C6, QUARTER_NOTE,  // Club
  NOTE_C6, EIGHTH_NOTE,   // That's
  
  NOTE_D6, QUARTER_NOTE,  // Made
  NOTE_C6, EIGHTH_NOTE,   // For
  NOTE_B5, QUARTER_NOTE,  // You
  NOTE_A5, EIGHTH_NOTE,   // And
  NOTE_G5, HALF_NOTE,   // Me

  0, QUARTER_NOTE,      // Pause

  NOTE_C6, QUARTER_NOTE,  // M.
  NOTE_C6, EIGHTH_NOTE,   // I.
  NOTE_C6, QUARTER_NOTE,  // C.

  0, EIGHTH_NOTE,       // Pause
  
  NOTE_C6, QUARTER_NOTE,  // K.
  NOTE_C6, EIGHTH_NOTE,   // E.
  NOTE_C6, QUARTER_NOTE,  // Y.
  
  0, EIGHTH_NOTE,       // Pause

  NOTE_E6, QUARTER_NOTE,  // M.
  NOTE_C6, EIGHTH_NOTE,   // O.
  NOTE_D6, QUARTER_NOTE,  // U.
  NOTE_B5, EIGHTH_NOTE,   // S.
  NOTE_C6, HALF_NOTE,   // E.

  0, QUARTER_NOTE,        // Pause
  
  NOTE_C6, QUARTER_NOTE,    // Mick-
  NOTE_C6, EIGHTH_NOTE,     // -ey
  NOTE_A5, FULL_NOTE,       // Mouse

  NOTE_C6, QUARTER_NOTE,    // Mick-
  NOTE_C6, EIGHTH_NOTE,     // -ey
  NOTE_G5, FULL_NOTE,       // Mouse

  NOTE_G5, EIGHTH_NOTE,     // For
  NOTE_A5, QUARTER_NOTE,    // ev-
  NOTE_A5, EIGHTH_NOTE,     // -er
  NOTE_A5, QUARTER_NOTE,    // let
  NOTE_A5, EIGHTH_NOTE,     // us
  NOTE_A5, QUARTER_NOTE,    // hold
  NOTE_A5, EIGHTH_NOTE,     // our
  NOTE_B5, QUARTER_NOTE,    // ban-
  NOTE_C6, EIGHTH_NOTE,     // -ner
  NOTE_D6, FULL_NOTE+QUARTER_NOTE,// high
  
  NOTE_C6, QUARTER_NOTE,  // Who's
  NOTE_C6, EIGHTH_NOTE,   // The
  NOTE_C6, QUARTER_NOTE,  // Lead-
  NOTE_C6, EIGHTH_NOTE,   // -er
  NOTE_C6, QUARTER_NOTE,  // Of
  NOTE_C6, EIGHTH_NOTE,   // The
  NOTE_C6, QUARTER_NOTE,  // Club
  NOTE_C6, EIGHTH_NOTE,   // That's
  
  NOTE_D6, QUARTER_NOTE,  // Made
  NOTE_C6, EIGHTH_NOTE,   // For
  NOTE_B5, QUARTER_NOTE,  // You
  NOTE_A5, EIGHTH_NOTE,   // And
  NOTE_G5, HALF_NOTE,   // Me

  0, QUARTER_NOTE,      // Pause

  NOTE_C6, QUARTER_NOTE,  // M.
  NOTE_C6, EIGHTH_NOTE,   // I.
  NOTE_C6, QUARTER_NOTE,  // C.

  0, EIGHTH_NOTE,       // Pause
  
  NOTE_C6, QUARTER_NOTE,  // K.
  NOTE_C6, EIGHTH_NOTE,   // E.
  NOTE_C6, QUARTER_NOTE,  // Y.
  
  0, EIGHTH_NOTE,       // Pause

  NOTE_E6, QUARTER_NOTE,  // M.
  NOTE_C6, EIGHTH_NOTE,   // O.
  NOTE_D6, QUARTER_NOTE,  // U.
  NOTE_B5, EIGHTH_NOTE,   // S.
  NOTE_C6, HALF_NOTE,   // E.

  0, FULL_NOTE,       // Pause
};

const float Small_World_SpeedMod = 2.25f; // Tempo modifier (not everything is a 4/4 beat)
const PROGMEM int Small_World_music[] = {  
  NOTE_B4, EIGHTH_NOTE,  // It's
  NOTE_C5, EIGHTH_NOTE,  // a
  NOTE_D5, QUARTER_NOTE, // world
  NOTE_B5, QUARTER_NOTE, // of
  NOTE_G5, QUARTER_NOTE, // laugh-
  NOTE_A5, EIGHTH_NOTE,  // -ter
  NOTE_G5, EIGHTH_NOTE,  // a
  NOTE_G5, QUARTER_NOTE, // world
  NOTE_FS5, QUARTER_NOTE,// of
  NOTE_FS5, QUARTER_NOTE,// tears
  
  NOTE_A4, EIGHTH_NOTE,  // It's
  NOTE_B4, EIGHTH_NOTE,  // a
  NOTE_C5, QUARTER_NOTE, // world
  NOTE_A5, QUARTER_NOTE, // of
  NOTE_FS5, QUARTER_NOTE,// hopes
  NOTE_G5, EIGHTH_NOTE,  // and
  NOTE_FS5, EIGHTH_NOTE, // a
  NOTE_E5, QUARTER_NOTE, // world
  NOTE_D5, QUARTER_NOTE, // of
  NOTE_D5, QUARTER_NOTE, // fears

  NOTE_B4, EIGHTH_NOTE,  // There's
  NOTE_C5, EIGHTH_NOTE,  // so
  NOTE_D5, QUARTER_NOTE, // much
  NOTE_G5, EIGHTH_NOTE,  // that
  NOTE_A5, EIGHTH_NOTE,  // we
  NOTE_B5, QUARTER_NOTE, // share

  NOTE_A5, EIGHTH_NOTE,  // That
  NOTE_G5, EIGHTH_NOTE,  // it's
  NOTE_E5, QUARTER_NOTE, // time
  NOTE_A5, EIGHTH_NOTE,  // we're
  NOTE_B5, EIGHTH_NOTE,  // a-
  NOTE_C6, QUARTER_NOTE, // -ware
  
  NOTE_B5, EIGHTH_NOTE,  // It's
  NOTE_A5, EIGHTH_NOTE,  // a
  NOTE_D5, QUARTER_NOTE, // small
  NOTE_C6, QUARTER_NOTE, // world
  NOTE_B5, QUARTER_NOTE, // af-
  NOTE_A5, QUARTER_NOTE, // -ter
  NOTE_G5, HALF_NOTE,    // all

  0, QUARTER_NOTE,           // Pause
  
  NOTE_G5, QUARTER_NOTE+EIGHTH_NOTE,// It's
  NOTE_G5, EIGHTH_NOTE,             // a
  NOTE_B5, QUARTER_NOTE,            // small
  NOTE_G5, QUARTER_NOTE,            // world
  NOTE_A5, QUARTER_NOTE+EIGHTH_NOTE,// af-
  NOTE_A5, EIGHTH_NOTE,             // -ter
  NOTE_A5, HALF_NOTE,               // all

  NOTE_A5, QUARTER_NOTE+EIGHTH_NOTE,// It's
  NOTE_A5, EIGHTH_NOTE,             // a
  NOTE_C6, QUARTER_NOTE,            // small
  NOTE_A5, QUARTER_NOTE,            // world
  NOTE_B5, QUARTER_NOTE+EIGHTH_NOTE,// af-
  NOTE_B5, EIGHTH_NOTE,             // -ter
  NOTE_B5, HALF_NOTE,               // all
  
  NOTE_B5, QUARTER_NOTE+EIGHTH_NOTE,// It's
  NOTE_B5, EIGHTH_NOTE,             // a
  NOTE_D6, QUARTER_NOTE,            // small
  NOTE_B5, QUARTER_NOTE,            // world
  NOTE_C6, QUARTER_NOTE+EIGHTH_NOTE,// af-
  NOTE_C6, EIGHTH_NOTE,             // -ter
  NOTE_C6, QUARTER_NOTE,            // all
  
  NOTE_B5, EIGHTH_NOTE,           // It's
  NOTE_A5, EIGHTH_NOTE,           // a
  NOTE_D5, HALF_NOTE,             // small
  NOTE_FS5, HALF_NOTE,            // small
  NOTE_G5, HALF_NOTE+QUARTER_NOTE,// world
  0, HALF_NOTE,
};

const float Pirates_SpeedMod = 1.5f; // Tempo modifier (not everything is a 4/4 beat)
const PROGMEM int Pirates_Music[] ={
  NOTE_A5, QUARTER_NOTE+EIGHTH_NOTE,  // Yo!
  NOTE_C6, QUARTER_NOTE+EIGHTH_NOTE,  // Ho!
  NOTE_D6, QUARTER_NOTE+EIGHTH_NOTE,  // Yo!
  NOTE_C6, QUARTER_NOTE,              // Ho!

  NOTE_AS5, EIGHTH_NOTE,              // A
  NOTE_A5,  QUARTER_NOTE,             // Pi-
  NOTE_A5,  EIGHTH_NOTE,              // -rate's
  NOTE_G5,  QUARTER_NOTE,             // life
  NOTE_G5,  EIGHTH_NOTE,              // for
  NOTE_F5,  QUARTER_NOTE+EIGHTH_NOTE, // me
  0, QUARTER_NOTE,

  NOTE_F5, EIGHTH_NOTE,             // We
  NOTE_A5, QUARTER_NOTE,            // Pil-
  NOTE_A5, EIGHTH_NOTE,             // -lage
  NOTE_A5, EIGHTH_NOTE,             // Plun-
  NOTE_A5, EIGHTH_NOTE,             // -der
  NOTE_A5, EIGHTH_NOTE,             // we
  NOTE_A5, EIGHTH_NOTE,             // ri-
  NOTE_A5, EIGHTH_NOTE,             // -fle
  NOTE_A5, EIGHTH_NOTE,             // and
  NOTE_A5, QUARTER_NOTE,            // loot
  NOTE_A5, EIGHTH_NOTE,             // Drink
  NOTE_D6, QUARTER_NOTE,            // up
  NOTE_A5, EIGHTH_NOTE,             // me
  NOTE_F5, EIGHTH_NOTE,             // 'eart-
  NOTE_F5, EIGHTH_NOTE,             // -ies
  NOTE_G5, EIGHTH_NOTE,             // yo
  NOTE_A5, QUARTER_NOTE+EIGHTH_NOTE,// ho.
  0, QUARTER_NOTE,

  NOTE_A5, EIGHTH_NOTE,             // We
  NOTE_AS5, EIGHTH_NOTE,            // kid-
  NOTE_AS5, EIGHTH_NOTE,            // -nap
  NOTE_AS5, EIGHTH_NOTE,            // and
  NOTE_G5, EIGHTH_NOTE,             // Rav-
  NOTE_G5, EIGHTH_NOTE,             // -age
  NOTE_G5, EIGHTH_NOTE,             // and
  NOTE_A5, EIGHTH_NOTE,             // don't
  NOTE_A5, EIGHTH_NOTE,             // give
  NOTE_A5, EIGHTH_NOTE,             // a
  NOTE_F5, QUARTER_NOTE,            // hoot
  NOTE_F5, EIGHTH_NOTE,             // Drink
  NOTE_G5, QUARTER_NOTE,            // up
  NOTE_G5, EIGHTH_NOTE,             // me
  NOTE_G5, EIGHTH_NOTE,             // 'eart-
  NOTE_A5, EIGHTH_NOTE,             // -ies
  NOTE_B5, EIGHTH_NOTE,             // yo
  NOTE_C6, QUARTER_NOTE+EIGHTH_NOTE,// ho
  0, QUARTER_NOTE,
};
