void loop()
{ 
  startIndex = startIndex + 1;
  /* Pick Random */
  EVERY_N_SECONDS( 6 ) { currentPattern = random(lastAnimation); }

  /* Cycle Through Patterns
  EVERY_N_SECONDS(5) { 
    if (currentPattern < lastAnimation) {
      currentPattern++; 
    } else {
      currentPattern = 0;
    }   
  }
  */  

  
  switch (currentPattern) {
    case 0:
      /* BRITE N SHINE */   
      paletteFill(startIndex, BriteNoBlack_p, 5);
      addShine();
      break; 
    case 1:
      /* BRITE RAIN */ 
      paletteFill(startIndex, BriteWithBlack_p, 10);   
      break;
    case 2:
      paletteFill(startIndex, BriteWithBlack_p, 1);
      break;
    case 3:
      paletteFill(startIndex, Vaporwave_p, 10);
      break;
    case 4:
      paletteFill(startIndex, Vaporwave_p, 1);
      break;
    case 5:
      paletteFill(startIndex, SoftLove_p, 1);
      break;
    case 6:
      paletteFill(startIndex, HardLove_p, 10);
      addShine();
      break;   
    case 7:
      paletteFillReverse(startIndex, Purple_p, 1);
      addGlitter(40);
      break;
    case 8:
      paletteFillReverse(startIndex, RainbowColors_p, 1);
      addShine();  
      break;
    case 9:
      paletteFill(startIndex, RainbowColors_p, 5);
      addGlitter(20);  
      break;
    case 10:
      sparkle();
      break;
    case 11:
      paletteFillReverse(startIndex, White_p, 8);
      break;
    case 12:
      paletteFillReverse(startIndex, LavaColors_p, 10);
      break;
    case 13:
      paletteFill(startIndex, RedTeal_p, 4);
      addShine();
      break;
    case 14:
      paletteFill(startIndex, BlueOrange_p, 4);
      addShine();
      break;
  }

  
  FastLED.show();    
  FastLED.delay(animationDelay); 
}

