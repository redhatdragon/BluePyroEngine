# BluePyroEngine

A stab at making a modularized game engine.  Ideally each
component should be detachable/replaceable.  Meaning the
graphics framework should be easy to replace.  Same with
the physics engine and the level editor.
WHILE STILL BEING PLUG'N PLAY!

This should be supported on both windows and at the least
ubuntu linux with the standard modules (the sdl2, sdl2_net,
and the custom physics engins).  Everything MUST be self
contained.  If licence is an issue the module will be
replaced.

INSTILATION:
GCC IS REQUIRED!
--Windows users
If you have not go ahead and install gcc by first installing
mingw then installing the necessary g++ package.  Also don't
forget to set your enviroment variable.  If you have trouble
google or youtube the answer.  Win10 users will have to set
the enviroment variable differently than win7 users.  That's
everything that's required.  Read "--Linux users" for the
rest of the instructions.

--Linux users
IDEALLY all you have to do is clone/download this repo and
first run clean.sh (clean.bat for win users), then proceed
to compile with compile.sh (compile.bat for win users).
TODO: Explain how to change engine modules.



NOTES:
Think of this as a wrapper which you can use too snap things
together any way you see fit.  I wish for a community to be
built around this which allows people to offer their own
modules which should be perfectly easy to support with correct
licence and correct preperations.  So if you wish to replace
any module such as the graphics library or the physics engine
(for optimizations related to your specific needs) it should
be super easy to do if you read the specifications.