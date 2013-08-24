	NewWolf: Wolenstein 3D for OpenGL by DarkOne the Hacker
Version 0.73 (02/March/2006) (c) 1999-2006 DarkOne

WebPage: http://newwolf.sourceforge.net/
 E-mail: DarkOne@navigators.lv

/Wolfenstein was, Wolfenstein is, Wolfenstein will.../

Sorry for my English. I'm Russian. (Русские на войне своих не бросают! :)))

********************************************************************
 Users of this program must accept this disclaimer of warranty:
 this program is supplied as is.  The author disclaims all
 warranties, expressed or implied, including, without limitation,
 the warranties of merchantability and of fitness for any purpose.
 The author assumes no liability for damages, direct or conse-
 quential, which may result from the use of this program.
*******************************************************************

	Hello, thanks for testing NewWolf project!

	NewWolf is a conversion of the best PC 3D action game ever: Wolf3D
by ID software. It is still in a very early development stage, so lots of features are
absent in this release, not even all Wolf3D original things (no finish for example).
It requires:

// ------------------------- * Requirements * -------------------------

	1) Full or shareware Wolf3D version, Spear of Destiny or Spear demo.
		 Wolf3D versions 1.1, 1.2 and 1.4 are supported.
		 Wolf3D version 1.0 is NOT supported.
		 Wolf3D 3 episeode version (wl3) is NOT supported.
		 In fact you can use any data files from conversions.
		 You can download Wolfenstein3D shareware version 1.4 form my site [http://wolfgl.narod.ru]
		 You also can download Spear of Destiny Demo from the same site /download section/

	2) PC Running MS Windows 95/98/ME/2000/XP.
		(Was not tested on Windws NT).

	3) OpenGL compatible Video Card (tested on 3Dfx Voodoo1 & nVIDIA RIVA TNT2),
	no software rendering yet available.

	4) DirectX compatible Sound Card /optional/

	5) DirectX version 5 or later (perfectly works on DX7.0 and DX8.0)
	You can download DirectX somewhere on the www.microsoft.com

	P.S. Alternativly you can use Wine on Linux

	NewWolf was tested on:

  P4-630 3Ghz/1.0Gb RAM/nVIDIA GeGorce6200 TC 64Mb/Intel Azalia/WindowsXP SP2   [playable:)]
	PIII 500Mhz/256Mb RAM/nVIDIA GeForce2 MX400 64Mb/Creative SB-128/Wine@Linux   [135 fps]
	PIII 500Mhz/256Mb RAM/nVIDIA GeForce2 MX400 64Mb/Creative SB-128/Windows XP   [100 fps]
	PIII 500Mhz/256Mb RAM/nVIDIA GeForce2 MX400 64Mb/Creative SB-128/Windows 98SE [135 fps]
	PIII 500MHz/256Mb RAM/nVIDIA RIVA TNT2 32Mb/Creative SB-128/Windows XP        [40 fps]
	PIII 500MHz/256Mb RAM/nVIDIA RIVA TNT2 32Mb/Creative SB-128/Windows Me        [50 fps]
	PIII 500MHz/256Mb RAM/nVIDIA RIVA TNT2 32Mb/Creative SB-128/Windows 2000      [70 fps]
	PIII 500MHz/128Mb RAM/nVIDIA RIVA TNT2 32Mb/Creative SB-AWE32/Windows 98 SE   [55 fps]
	PMMX 200MHz/ 48Mb RAM/3dfx Voodoo 1 4Mb/Creative SB-16/Windows 95 ORS2        [23 fps]

	It ran perfectly on those systems!

// ------------------------- * Installation * -------------------------
	Unpack this archive with directory structure
	to your Wolf3D directory (shareware v1.4; Wolf3D v1.4; Spear or Spear Demo).

Note: from now on you do NOT need to copy	Wolfenstein data files (*.wl6)
      to the \BaseWgl\Data subdirectory (as in earlier versions).

	*** 3dfx card owners: ***
	If you have 3Dfx video card you may need an OpenGL driver 'opengl32.dll' in
	NewWolf directory (it will not work on Quake OpenGL miniport drivers, but you can try)
	You can get drivers somewhere on www.3dfx.com (I think...)
	You can download required driver (works great for Voodoo 1) form my site
	[http://wolfgl.narod.ru]
	P.S. As long as 3dfx is R.I.P. now it can become a problem supporting it....

// ------------------------- * Running * -------------------------
	
	Run newwolf.exe file from the NewWolf directory.

// ------------------------- * Controls: * -------------------------
	The default layout is:

	E or UpArrow    - Move Forward
	D or DownArrow  - Backpedal
	S               - Strafe Left
	F               - Strafe Right
	LeftArrow       - Turn Left
	RightArrow      - Turn Right
	Space           - Use Key (Open Doors)
	Tab             - Map
	~               - Console
	F2              - Save Game
	F3              - Load Game
	F4              - Video Options
	F8              - Quick Save
	F9              - Quick Load
	F12             - Screenshot
	LMouse or Ctrl  - Fire
	Mouse           - Mouse Look (Left-Right)
	
	/It is my Quake layout!/
	You can remap controls & changes will be saved!

	There are some console commands:
	You can use cmdlist command to get all commands!

	god        - toggle God mode
	noclip     - toggle Noclip mode (walk through walls)
	notarget   - toggle Notarget mode (enemy don't see you) - useful for testing new levels
	maptoggle  - same as Tab key
	goobers    - all keys & ammo & health & weapon :)))
	screenshot - formats your hard drive :))) just kidding, it writes a nice .tga picture to the BaseWgl dir
	hurt       - leaves you with only 1% health & no ammo (for debug, but challenging!)
	map xy     - goto map y on episode x-1 (or just xy map)
	revealmap  - opens all automap
	hidemap    - resets an automap

	allwaysrun - cvar, which sets autorun on/off

// ------------------------- * Screen layout: * -------------------------

	NewWolf displays a lot of debugging information on the screen. It is:

	Player Position (x, y, angle);
	Number of Polygons, Sprites & Objects drawn every frame
	FPS (frames per second)
	Kill, Treasure & Secret ratios for current level
	List of floors occupied by player (0 means player won't be heard on this floor, 1 will be heard)
	Floor number, player is on
	Time elapsed from the start of the level.

	This info can be used by level designers, so I left it in the game.
	It can be turned on with "developer 1" console command.

// ------------------------- * Known Bugs & Problems * -------------------------
	
	* Time Synchronization (due to Windows time management issues, will be fixed soon)
	* No ending (DeathCam & BJ running & jumping not currently present. Will be added soon!
	* A lot of other problems I do/don't know about & want to hear about them from you! (it's a beta testing afer all)

// ------------------------- * Contact Author: * -------------------------

	Please give me some feedback on this program.
	My e-mail is <DarkOne@navigators.lv>

	Bugs, questions or comments are always welcomed!

// ------------------------- * To-Do List * -------------------------

	1. Finish structurizing existing code!
	2. Adding some origianal Wolf3D features, which are absent now
	3. Scripting language with shaders support
	4. Particles
	5. Model support
	6. MP3 music support
	7. Network, period.
	8. Demo recording & playing, preferrably through console

// ------------------------- * History * -------------------------

 +	- new feature
 -	- bug fix
 !	- rewritten section
 :( - disadvantage

v 0.73		// Changed by DarkOne on 17:40 Thursday, March 02, 2006
  - fixed bug with borders around images.
  + Added new resolution 1280x1024. It's video mode 13.

v 0.72		// Changed by DarkOne on 12/14/2002 16:20:49
	+ Video settings menu /requires engine restarting to take effect/
	+ gamma control and vertical synchronization control /if supported in hardware/
	- Spear of Destiny support fixed /was broken in v 0.7/
	! video initialization
	+ datadir and gametype cvars to define game data path and extension (sod, wl6, etc)
	  you should define them in command line /+set gamedir "c:\wolf3d" +set gametype wl6/
	- some minor bugs fixed
	! almost Q3 style console autocompletion
	+ r_texturemode variable to set texture look (values are identical to Quake2)

v 0.7			// Changed by DarkOne on 11/25/2002 12:03:34
	! Player handling code
	- Door opening/closing bug fixed
	+ hi-color/hi-res TGA texture support
	+ MD2 models support
	! Mouse wheel support under Win95 /not tested but should work, any feedback on this is appreciated/
	!- Screen shot code is now resolution independent /only source code hackers would notice this/
	! Texture loading
	+ Partice effects
	+ Demo recording and playing; Still very buggy, can fall out of sync
	+ PAK file support

v 0.69		// Changed by DarkOne on 10/5/2002 15:03:26
	- Elevator switch bug finally fixed (is it?)
	! Wine compatibility

v 0.68		// Changed by DarkOne on 9/20/2002 13:26:49
	- Return form Secret floor in spear is now correct (hope so)
	! Sprite loading code (better compatibility)
	- Elevator switch and level intermission bug fixed

v 0.666		// Changed by DarkOne on 8/21/2002 17:32:19
	! OpenGL initialization code rewritten
	! elevator switch animation added

v 0.66		// Changed by DarkOne on 8/6/2002 01:45:33
	- Main menu cursor was allingned wrong.

v 0.65		// Changed by DarkOne on 8/4/2002 22:17:35
	+ 'God mode' and 'Ouch' BJ faces for Spear of Destiny
	! fps counter better code
  + menu sound (still need work)
  - load menu
  - you can die now
  - you cann't save game while dead
  ! better intermission screens
  ! better Spear of Destiny support
  + Wolfenstein3D v1.1 support (v1.2 is also supported)

v 0.6			// Changed by DarkOne on 7/28/2002 23:47:51
	+ Save/Load (may be some bugs with this, if you spoted one, drop me a line please)
	- Music not restored after menu
	+ texture anisotropic filtering (enable it in drivers, tested on nVIDIA cards only)
	! guards moving issues
	+ weapon change
	+ Channel Sound system (makes less sound blocking)

v 0.51b		// Changed by DarkOne on 11/25/2001 01:06:44
	! Improved Windows XP compatibility

v 0.51		// Changed by DarkOne on 8/11/2001 00:04:35
	It is the last version of NewWolf as it is now. Next version will
	introduce dll virtual machines (like in Quake 2 & Quake 3)
	This will be a big step towards multiplayer game logic
	It will separate engine from the game & AI.

	+ Added Next weapon command, it lets you switch weapons /Like in Quake it is impulse 10/
	+ Spear of Destiny & Spear Demo support /with autodetection!/
	! a lot of code to make autodetection work.

v 0.50		// Changed by DarkOne on 7/4/2001 02:01:48
	It was almost 2 month since last update!
	Finaly all of my Exams are over & I can work on NewWolf again!
	I set up Windows ME on my PC & tested NewWolf on it (Perfect!)

	+ Support for shareware version (with version autodetection)!!!
	+ I've finaly written info pages viewer (Read This! in shareware version)
	! Now you do not need to put data files to basewgl\data directory!
	  (just unzip newwolf to the dir where you have wolf & run!)
	! It now overwrites previous condump.txt file
	- Secret Elevator Entrance bug
	+ Sound Menu is now working (you can turn music/sound off)
	  but changes are not saved :(
	!- Many other things

v 0.39a		// Changed by DarkOne on 5/12/2001 12:28:29
	- It is more stable!!!

v 0.39		// Changed by DarkOne on 4/22/01 18:21:18
	! PWall Code: Now PWall's speed depends on game speed (fps)
	! Raycaster speed-up!
	+ Finaly I've found some time to implement real automap.
		That means that map initialy is closed & is revealed
		as you advence through the level!

v 0.38		// Changed by DarkOne on 4/13/01 01:41:48
	+ New console command: playimf <filename>
	  it will play imf music from file 'BaseWgl\Music\<filename>' 
	+ New console command: dir <mask>
		it will do the same as dos command dir does.
		Now you do not need to exit to windows, if you forget a filename!

v 0.37		// Changed by DarkOne on 4/8/2001 12:38:07
	- AdLib sound crack is gone
	! Small changes in raycaster

v 0.35N		// Changed by DarkOne on 3/31/2001 18:20:21
	Project renamed form WolfGL to NewWolf...
	I'll miss an old name, but the reality is that
	I had to do this, I'll likely will talk about NewWolf
	as about WolfGL long time after now, because I got used
	to the old name.

v 0.35L		// Changed by DarkOne on 3/27/01 00:54:39
	! Guards Spawning functions
	- AdLib Sound Cracks

v 0.35		// Changed by DarkOne on 3/24/01 11:27:15
	+ Controls & cvars are now saved in config.cfg file (buggy code, though)
	!- AI shoot routines
	! fog is back, console cvars: fog, fog_mode, fog_density, fog_start, fog_end,
		fog_r, fog_g, fog_b, fog_a, no menu now, will fix soon!
	! you can change weapons!!!
	+ debug info can be switch on/off (developer cvar) (default off)

v 0.32a		// Changed by DarkOne on 3/19/01 16:49:43
	! DigiMap loading Code! (form datafiles, not HardCoded)

v 0.32		// Changed by DarkOne on 3/18/2001 22:25:18
	+ Added AdLib Sound caching (cache behind, do not read ahead! :)
	- A couple of small
	+ dynamic FOV (console) but not stable, do not play, unless you know
		what you are doing!
	:( You can't save/load & change weapons...

v 0.30		// Changed by DarkOne on 3/15/2001 01:57:42
	+ Finaly Music & AdLib sound effects support! Cool, it now rocks! I can play Wolf under NT!!!
		But it slows engine & No way to turn it off (now). Will be fixed/optimized/rewritten...
	+ VGA graphics are read from data file now. So conversions
		will look right!
	! Normal HUD (I regret about semi-transparent HUD, may be it will be back,
		but now HUD is definetly better!)
	! My Font Manager
	! Console
	+ key binding, configs. Like in Quake
	+ cvars (buggy code)
	:( no save/load, intermission is half-cut, video config menu (fog)
		all is due to my new menu code, will return in later versions!

v 0.23		// Changed by DarkOne on 2/4/01 00:45:39
	! Rewritten door handling stuff. Faster, easyer & more reliable
	! 3D sound is back!!! Will be even better soon!
	- Small door error, still exist, but not so dangerouse!
	+ started writing cvar stuff.

v 0.22a		// Changed by DarkOne on 1/25/01 00:49:27
	! Rewritten & standatrized some loading & math stuff.
	  No visible changes.

v 0.22		// Changed by DarkOne on 1/16/01 00:33:18
	! - I made it! Adv math with additional OpenGL call & now I got rid of that annoying
	bug! Now sprites are handled & clipped right! This also helped me to find another bug
	with doors! It now draws them 200% faster, but in whole engine scale no speed up. ;(
	- Small memory leak, ~1Kb during programm execution, may be lost. Fixed!

v 0.20  - starting to rewrite 0.18 form scratch (14/01/01)
	!  Console stuff, Sound stuff (now you can play without sound)
	!  New Source code layout (lots of separate c files vs one c & lots of h,
		project is growing & must be kept clean.
	+  CPU & OS detection stuff (Portions form Zdoom sources, but mainly my own code)
		added MMX & PIII instruction set detection, when math stuff will be rewritten
		I'll use them.
	:( Bad news: 3D sound (some sort of) will not work for some time, due to
		sound manager changes (better make it good later, than bad now & rewrite again later
		please wait...
	!  Texture Binding speed up (a bit)
	!  I finaly converted original Wolf3D's Assembler raycaster to C & added it to my
		project! Earlier I used my own raycaster who was slower & had some disadvanages!
		I hate self modifying stuff, when it is not mine (but it is beautifull!)...
		This gave a significant speed up to engine and opened a way for new features,
		will be soon!

v 0.18  - enhanced 0.15  (25/12/00)
	+ Save, Load, Menu
	+ Wolf original Fonts from VGA* files
	- some minor

v 0.15  - enhanced 0.10  (29/09/00-)
  + DirectSound !!!
  - Guard State change.
  ! Sounds from Page File.

v 0.10a - extended 0.10 (23/09/00-28/09/00)
  - No screen flash when picking up dropped things.
  + A splash screen, icon & version.
  - Wrong kills counter.

v 0.10  - base version with basic possibilities (before 23/09/00)

Prehistoric:

30.05.2000	Project Started (Version 0.0)
02.06.2000	Ported my old raycaster code: lots of bugs ;(
03.06.2000	Added Mip-Maps
03.06.2000	Added 2D drawing & text rendering
03.06.2000	Fixed some bugs & major headache: player instability, static is a master!
04.06.2000	Added HUD, fixed map loading problems, speed up!!
05.06.2000	Added solid sprites & fixed some problems with HUD & sprites!
13.08.2000	Added wolf data file support, now walls & sprites are read from them
			Ported & almost completely rewritten almost all AI from original Wolf sources;
			Added level intermission, started menu coding.
			Rewritten FINE angle stuff, some minor bug fixes
