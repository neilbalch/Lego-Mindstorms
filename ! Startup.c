
task main()
{
 UnmuteSound();
 PlaySoundFile("! Startup.rso");
 PlaySoundFile("! Attention.rso");
 nxtDisplayCenteredTextLine(1, "This NXT Is");
 nxtDisplayCenteredTextLine(2, "Property Of");
 nxtDisplayCenteredTextLine(4, "Neil Balch");
 nxtDisplayCenteredTextLine(6, "Please Return");
 nxtDisplayCenteredTextLine(7, "If Lost");
 wait1Msec(6000);
 eraseDisplay();
 PlaySoundFile("! Attention.rso");
 nxtDisplayCenteredTextLine(2, "Email:");
 nxtDisplayCenteredTextLine(3, "neilbalch");
 nxtDisplayCenteredTextLine(4, "@gmail.com");
 nxtDisplayCenteredTextLine(5, "Phone: (650)");
 nxtDisplayCenteredTextLine(6, "966-1146");
 wait1Msec(7000);
}
