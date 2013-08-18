This is a hack port for Doom3 to simply try to get it working.

Some notes:

1) I've had to disable all input as DirectInput isn't supported on Windows RT, this needs to be re-written to use the message loop. Bit of effort, but do-able.

2) It uses the 'generic' cpu.. meaning no NEON optimizations for ARM .. not sure how this will affect performance.

3) Crash reporting / debugging is mostly stubbed out.. and does not work... easy to fix though.

4) the game will load and started with the Mesa opengl32 driver.. however it renders slower than you can imagine.. and does not play :(

5) the gldirect opengl32 driver is missing required functionality and therefore will not work

6) i've removed any required glut code..

Should MS ever release an opengl32 driver for Windows RT, I'll revist this and fix the above issues..