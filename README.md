# mag-c
**My Amateur Gaming Collection** (using ncurses in C++)

Just a little side project I did, when I was getting bored at home during holidays due to Internet ban in my region as per government order. 

It currently comprises of following games:
1. Purr - the cake eater (try eat * as many times as possible within 100 steps)
2. Tic-tac-toe
3. Jumpman (jump over obstacles as many times as possible while it's speed is constantly increasing or decreasing)
4. Snake (your regular snake game)
5. An unexpected journey (something like snakes and ladders)

**Note:** Make sure you've got [ncurses](https://invisible-island.net/ncurses/announce.html) library in your system.

I've added makefile for easy installation.
Just run 
```make```
in the respective directory.

If you it doesn't work, you might need to install build essential / development tools / it's equivalent for your distribution.

Btw, compilation command goes like
```g++ home.cpp -o home -lncurses```

Check code [here](https://github.com/wolfian/mag-c)!

Screenshots:
<p float="left">
  <img src="https://wolfian.github.io/mag-c/screenshots/mag-c01.png" width="450" height="255"/>
  <img src="https://wolfian.github.io/mag-c/screenshots/mag-c02.png" width="450" height="255"/>
</p>
<p float="left">
  <img src="https://wolfian.github.io/mag-c/screenshots/mag-c03.png" width="450" height="255"/>
  <img src="https://wolfian.github.io/mag-c/screenshots/mag-c04.png" width="450" height="255"/>
</p>
