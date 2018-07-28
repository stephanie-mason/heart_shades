#include <FastLED.h>
//FASTLED_USING_NAMESPACE

/*** CONSTANTS ***/
#define DATA_PIN 2
#define LED_TYPE WS2812B
#define COLOR_ORDER GRB
#define NUM_LEDS 54
#define BRIGHTNESS 12
#define ARRAY_SIZE(A) (sizeof(A) / sizeof((A)[0]))

/*** PALETTE DECLARATIONS ***/
extern const TProgmemPalette16 BlueOrange_p PROGMEM;
extern const TProgmemPalette16 BriteNoBlack_p PROGMEM;
extern const TProgmemPalette16 BriteWithBlack_p PROGMEM;
extern const TProgmemPalette16 HardLove_p PROGMEM;
extern const TProgmemPalette16 Purple_p PROGMEM;
extern const TProgmemPalette16 RedTeal_p PROGMEM;
extern const TProgmemPalette16 SoftLove_p PROGMEM;
extern const TProgmemPalette16 Vaporwave_p PROGMEM;
extern const TProgmemPalette16 White_p PROGMEM;

/*** FASTLED SETUP ***/
CRGB leds[NUM_LEDS];
void setup() {
  delay(3000); 
  FastLED.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);  
  FastLED.setBrightness(BRIGHTNESS);
}

/*** PATTERN LIST ***/
uint8_t currentPattern = 0;
uint8_t startIndex = 0; 
uint8_t animationDelay = 0;
uint8_t lastAnimation = 14;




