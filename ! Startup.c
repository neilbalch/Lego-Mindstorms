void delayAndErase(float seconds) {
  wait1Msec(seconds * 1000);
  eraseDisplay();
  PlaySoundFile("! Attention.rso");
}

task main() {
 UnmuteSound();
 PlaySoundFile("! Startup.rso");
 delayAndErase(0.0);
 nxtDisplayCenteredTextLine(1, "This NXT Is");
 nxtDisplayCenteredTextLine(2, "Property Of");
 nxtDisplayCenteredTextLine(4, "Neil Balch");
 nxtDisplayCenteredTextLine(6, "Please Return");
 nxtDisplayCenteredTextLine(7, "If Lost");
 delayAndErase(6.0);
 nxtDisplayCenteredTextLine(2, "Email:");
 nxtDisplayCenteredTextLine(3, "neilbalch");
 nxtDisplayCenteredTextLine(4, "@gmail.com");
 nxtDisplayCenteredTextLine(5, "Phone: (650)");
 nxtDisplayCenteredTextLine(6, "537-5906");
 delayAndErase(7.0);
}
