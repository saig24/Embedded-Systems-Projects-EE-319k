// Sound.h
// Runs on TM4C123 or LM4F120
// Prototypes for basic functions to play sounds from the
// original Space Invaders.
// Jonathan Valvano
// November 17, 2014


void Sound_Init(void);
void Sound_Play(const unsigned char *pt, unsigned long count);
void Sound_PowerUp(void);
void Sound_OmNom(void);
void Sound_Background(void);

