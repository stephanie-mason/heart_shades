void addGlitter( fract8 chanceOfGlitter) 
{
  if( random8() < chanceOfGlitter) {
    leds[ random16(NUM_LEDS) ] += CRGB::White;
  }
}

void addShine() {
  leds[22] = CRGB::White;  
  leds[23] = CRGB::White;
  leds[49] = CRGB::White; 
  leds[50] = CRGB::White;
}

void paletteFill(uint8_t colorIndex, const CRGBPalette16& palette, uint8_t gradientSteps) {  
  for( int i = 0; i < NUM_LEDS; i++) {
    leds[i] = ColorFromPalette( palette, colorIndex, 255, LINEARBLEND);
    colorIndex -= gradientSteps;              
  }
}

void paletteFillReverse(uint8_t colorIndex, const CRGBPalette16& palette, uint8_t gradientSteps) {  
  for( int i = 0; i < NUM_LEDS; i++) {
    leds[i] = ColorFromPalette( palette, colorIndex, 255, LINEARBLEND);
    colorIndex += gradientSteps;              
  }
}

void sparkle() 
{ 
  fadeToBlackBy( leds, NUM_LEDS, 10);
  int pos = random16(NUM_LEDS);
  leds[pos] += CRGB::White;
}
