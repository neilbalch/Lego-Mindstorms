# Lego-Mindstorms
Code I have written for the LEGO Mindstorms NXT.

# Compiler
I use [RobotC (robotc.net)](http://www.robotc.net) to compile C code for the NXT, using the 3rd Party Sensor Drivers by @botbench [rdpartyrobotcdr](https://github.com/botbench/rdpartyrobotcdr). All code in this repo only supports RobotC and the `rdpartyrobotcdr` driver suite.

## Repository Map
* `rdpartyrobotcdr/drivers` - Mirror of `botbench/rdpartyrobotcdr` for use with this repo
* `! Startup.c`     - Code I wrote that runs at startup of the brain (b/c of the filename)
* `LineFollower.c`  - Basic line follower for NXT
* `PLineFollower.c` - Proportional line follower for NXT
* `CraneRemote.c`   - Code for my Mindstorms powered tower crane [Video Here](https://www.youtube.com/watch?v=lcgXU30ADzM)
