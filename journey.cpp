#include <iostream>
#include <ncurses.h>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono_literals;

int journey()
{
while(true){
	// WINDOW * outerwin = newwin(18,32,0,1);
	WINDOW * innerwin = newwin(9,26,1,4);
	// WINDOW * returnkey = newwin(3,7,12,22);

	WINDOW * w1 = newwin(3,5,9,4+32);    WINDOW * w2 = newwin(3,5,9,9+32);   WINDOW * w3 = newwin(3,5,9,14+32);  WINDOW * w4 = newwin(3,5,9,19+32);  WINDOW * w5 = newwin(3,5,9,24+32);
	WINDOW * w6 = newwin(3,5,9,29+32);   WINDOW * w7 = newwin(3,5,9,34+32);  WINDOW * w8 = newwin(3,5,9,39+32);  WINDOW * w9 = newwin(3,5,9,44+32);  WINDOW * w10 = newwin(3,5,9,48+32);
	WINDOW * w11 = newwin(3,5,7,48+32);  WINDOW * w12 = newwin(3,5,7,43+32); WINDOW * w13 = newwin(3,5,7,38+32); WINDOW * w14 = newwin(3,5,7,33+32); WINDOW * w15 = newwin(3,5,7,28+32);
	WINDOW * w16 = newwin(3,5,7,23+32);  WINDOW * w17 = newwin(3,5,7,18+32); WINDOW * w18 = newwin(3,5,7,13+32); WINDOW * w19 = newwin(3,5,7,8+32);  WINDOW * w20 = newwin(3,5,7,3+32);
	WINDOW * w21 = newwin(3,5,5,3+32);   WINDOW * w22 = newwin(3,5,5,8+32);  WINDOW * w23 = newwin(3,5,5,13+32); WINDOW * w24 = newwin(3,5,5,18+32); WINDOW * w25 = newwin(3,5,5,23+32);
	WINDOW * w26 = newwin(3,5,5,28+32);  WINDOW * w27 = newwin(3,5,5,33+32); WINDOW * w28 = newwin(3,5,5,38+32); WINDOW * w29 = newwin(3,5,5,43+32); WINDOW * w30 = newwin(3,5,5,48+32);
	WINDOW * w31 = newwin(3,5,3,48+32);  WINDOW * w32 = newwin(3,5,3,43+32); WINDOW * w33 = newwin(3,5,3,38+32); WINDOW * w34 = newwin(3,5,3,33+32); WINDOW * w35 = newwin(3,5,3,28+32); 
	WINDOW * w36 = newwin(3,5,3,23+32);  WINDOW * w37 = newwin(3,5,3,18+32); WINDOW * w38 = newwin(3,5,3,13+32); WINDOW * w39 = newwin(3,5,3,8+32);  WINDOW * w40 = newwin(3,5,3,3+32); 
	WINDOW * w41 = newwin(3,5,1,3+32);   WINDOW * w42 = newwin(3,5,1,8+32);  WINDOW * w43 = newwin(3,5,1,13+32); WINDOW * w44 = newwin(3,5,1,18+32); WINDOW * w45 = newwin(3,5,1,23+32);
	WINDOW * w46 = newwin(3,5,1,28+32);  WINDOW * w47 = newwin(3,5,1,33+32); WINDOW * w48 = newwin(3,5,1,38+32); WINDOW * w49 = newwin(3,5,1,43+32); WINDOW * w50 = newwin(3,5,1,48+32);
	WINDOW * gamebox = newwin(18,52,0,34);
	WINDOW * message = newwin(5,48,12,36);
	WINDOW * start = newwin(1,7,11,4+34);
	WINDOW * stop = newwin(1,7,3,48+29);

	// box(outerwin, 0, 0);
	box(innerwin, 0, 0);
	// box(returnkey, 0, 0);
	refresh();
	// wattron(outerwin, A_REVERSE);
	// mvwprintw(outerwin, 10, 13, " MAG-C ");
	// wattroff(outerwin, A_REVERSE);
	// mvwprintw(outerwin, 12, 7, "W");
	// mvwprintw(outerwin, 13, 4, "A     D");
	// mvwprintw(outerwin, 14, 7, "S");
	// mvwprintw(returnkey, 1, 2, "<--");
	mvwprintw(innerwin, 1, 1, "Instructions:");
	mvwprintw(innerwin, 2, 1, "------------------------");
	mvwprintw(innerwin, 3, 1, "1.Your jouney will begin");
	mvwprintw(innerwin, 4, 1, " at '1' and and finish");
	mvwprintw(innerwin, 5, 1, " when you'll reach '50'.");
	mvwprintw(innerwin, 6, 1, "2.Press enter to start!");
	mvwprintw(innerwin, 7, 1, "------------------------");
	// mvwprintw(innerwin, 3, 2, "the dice!");
	// mvwprintw(innerwin, 5, 2, "->");

	box(gamebox, 0, 0); 
	wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);

	mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
	mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
	mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
	mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
	mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
	mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
	mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
	mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
	mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
	mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
	mvwprintw(message, 2, 4, "You have to reach 50 but beware of traps!");
	mvwprintw(start,0,0,"^start");
	mvwprintw(stop,0,0,"finish^");

	wrefresh(gamebox); wrefresh(message);
	
	wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
	wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
	wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
	wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
	wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
	wrefresh(start);
	wrefresh(stop);
	wrefresh(innerwin);
	refresh();

	while(true){
		if ( (int)getch() == 10 )
		{
			wclear(start);
			wclear(stop);
			wclear(innerwin);
			wclear(message);
			box(innerwin, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(innerwin, 3, 2, "Press spacebar to roll");
			mvwprintw(innerwin, 4, 2, "the dice!");
			mvwprintw(innerwin, 5, 2, "-> n <-");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(innerwin);
			wrefresh(message);
			wrefresh(start);
			wrefresh(stop);
			beep();
			break;
		}
	}

	static int rolls = 0;
	static int i = 0;
	static int current = 1;
	wclear(w1);
	box(w1, 0, 0);
	mvwprintw(w1, 1, 2, "X");
	wrefresh(w1);

	while(true){

		

		while(1){
			timeout(50);
			i++;
			if( i==7 )
				i=1;
			if( (int)getch() == 32 ){
				current = current+i;
				rolls+=+1;
				if (current>50)
					current = current-i;
				mvwprintw(innerwin, 5, 5, "%d", i);
				wrefresh(innerwin);
				break;
			}
		}
		
rerun:
		
		beep();

		if(current==1){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			// box(gamebox, 0, 0);
			box(w1, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"X"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			 wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w1);
		}

		if(current==2){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w2, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"X"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			// mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			mvwprintw(message, 2, 2, "Take 10 steps forward! (wait couple seconds)");
			wrefresh(w1);  wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w2);

			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current += 10;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==3){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w3, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"X"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2);  wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(w3);
		}

		if(current==4){

			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w4, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"X"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3);  wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(w4);
		}

		if(current==5){

			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w5, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"X");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			// mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			mvwprintw(message, 2, 2, "Take 1 step backward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4);  wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w5);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current -= 1;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==6){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w6, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"X"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message); wrefresh(w6);
		}

		if(current==7){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w7, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"X"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			// mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			mvwprintw(message, 2, 2, "Take 5 steps forward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6);  wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w7);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current += 5;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==8){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w8, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"X"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message); wrefresh(w8);
		}

		if(current==9){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w9, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"X"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8);  wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w9);
		}

		if(current==10){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w10, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"X");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); 
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w10);
		}

		if(current==11){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w11, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2," X"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			// mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			mvwprintw(message, 2, 2, "Take 3 steps backward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			 wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w11);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current -= 3;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==12){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w12, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2," X"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11);  wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w12);
		}

		if(current==13){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w13, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2," X"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			// mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			mvwprintw(message, 2, 2, "Take 12 steps backward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12);  wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w13);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current -= 12;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==14){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w14, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2," X"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13);  wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w14);
		}

		if(current==15){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w15, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2," X");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14);  wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w15);
		}

		if(current==16){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w16, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2," X"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15);  wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w16);
		}

		if(current==17){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w17, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2," X"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 2, "Take 4 steps forward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16);  wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w17);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current += 4;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==18){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w18, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2," X"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17);  wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w18);
		}

		if(current==19){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w19, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2," X"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 2, "Take 6 steps forward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18);  wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w19);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current += 6;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==20){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w20, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2," X");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); 
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w20);
		}

		if(current==21){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w21, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2," X"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			 wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w21);
		}

		if(current==22){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w22, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2," X"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21);  wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w22);
		}

		if(current==23){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w23, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2," X"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 2, "Take 11 steps backward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22);  wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w23);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current -= 11;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==24){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w24, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2," X"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23);  wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w24);
		}

		if(current==25){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w25, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2," X");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24);  wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w25);
		}

		if(current==26){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w26, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2," X"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25);  wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w26);
		}

		if(current==27){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w27, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2," X"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26);  wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w27);
		}

		if(current==28){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w28, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2," X"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27);  wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w28);
		}

		if(current==29){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w29, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2," X"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 2, "Take 4 steps backward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28);  wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w29);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current -= 4;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==30){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w30, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2," X");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); 
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w30);
			
		}

		if(current==31){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w31, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2," X"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 2, "Take 9 steps forward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			 wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w31);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current += 9;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==32){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w32, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2," X"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31);  wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w32);
		}

		if(current==33){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w33, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2," X"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32);  wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w33);
		}

		if(current==34){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w34, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2," X"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33);  wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w34);
		}

		if(current==35){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w35, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2," X");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34);  wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w35);
		}

		if(current==36){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w36, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2," X"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35);  wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w36);
		}

		if(current==37){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w37, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2," X"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 2, "Take 7 steps backward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36);  wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w37);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current -= 7;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==38){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w38, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2," X"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37);  wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w38);
		}

		if(current==39){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w39, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2," X"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38);  wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w39);
		}

		if(current==40){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w40, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2," X");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); 
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);wrefresh(w40);
		}

		if(current==41){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w41, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2," X"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 2, "Take 2 steps forward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current += 2;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==42){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w42, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2," X"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);
		}

		if(current==43){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w43, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2," X"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);
		}

		if(current==44){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w44, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2," X"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);
		}

		if(current==45){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w45, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2," X");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);
		}

		if(current==46){
			
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w46, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2," X"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);
		}

		if(current==47){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w47, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2," X"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 2, "Take 2 steps foward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current += 2;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==48){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w48, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2," X"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 4, "    Roll the dice to move forward!");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);
		}

		if(current==49){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w49, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			refresh();
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2," X"); mvwprintw(w50,1,2,"50");
			mvwprintw(message, 2, 2, "Take 48 steps backward! (wait couple seconds)");
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);
			time_t first = time(0);
			while(true){
				time_t second = time(0);
				if (second == first + 2)
				{
					current -= 48;
					flushinp(); goto rerun; 
				}
			}
		}

		if(current==50){
		
			wclear(w1); wclear(w2); wclear(w3); wclear(w4); wclear(w5); wclear(w6); wclear(w7); wclear(w8); wclear(w9); wclear(w10);
			wclear(w11); wclear(w12); wclear(w13); wclear(w14); wclear(w15); wclear(w16); wclear(w17); wclear(w18); wclear(w19); wclear(w20);
			wclear(w21); wclear(w22); wclear(w23); wclear(w24); wclear(w25); wclear(w26); wclear(w27); wclear(w28); wclear(w29); wclear(w30);
			wclear(w31); wclear(w32); wclear(w33); wclear(w34); wclear(w35); wclear(w36); wclear(w37); wclear(w38); wclear(w39); wclear(w40);
			wclear(w41); wclear(w42); wclear(w43); wclear(w44); wclear(w45); wclear(w46); wclear(w47); wclear(w48); wclear(w49); wclear(w50);
			wclear(message);
			box(w50, 0, 0);
			wborder(message, 126, 126, 126, 126, 126, 126, 126, 126);
			mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3"); mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5");
			mvwprintw(w6,1,2,"6"); mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9"); mvwprintw(w10,1,2,"10");
			mvwprintw(w11,1,2,"11"); mvwprintw(w12,1,2,"12"); mvwprintw(w13,1,2,"13"); mvwprintw(w14,1,2,"14"); mvwprintw(w15,1,2,"15");
			mvwprintw(w16,1,2,"16"); mvwprintw(w17,1,2,"17"); mvwprintw(w18,1,2,"18"); mvwprintw(w19,1,2,"19"); mvwprintw(w20,1,2,"20");
			mvwprintw(w21,1,2,"21"); mvwprintw(w22,1,2,"22"); mvwprintw(w23,1,2,"23"); mvwprintw(w24,1,2,"24"); mvwprintw(w25,1,2,"25");
			mvwprintw(w26,1,2,"26"); mvwprintw(w27,1,2,"27"); mvwprintw(w28,1,2,"28"); mvwprintw(w29,1,2,"29"); mvwprintw(w30,1,2,"30");
			mvwprintw(w31,1,2,"31"); mvwprintw(w32,1,2,"32"); mvwprintw(w33,1,2,"33"); mvwprintw(w34,1,2,"34"); mvwprintw(w35,1,2,"35");
			mvwprintw(w36,1,2,"36"); mvwprintw(w37,1,2,"37"); mvwprintw(w38,1,2,"38"); mvwprintw(w39,1,2,"39"); mvwprintw(w40,1,2,"40");
			mvwprintw(w41,1,2,"41"); mvwprintw(w42,1,2,"42"); mvwprintw(w43,1,2,"43"); mvwprintw(w44,1,2,"44"); mvwprintw(w45,1,2,"45");
			mvwprintw(w46,1,2,"46"); mvwprintw(w47,1,2,"47"); mvwprintw(w48,1,2,"48"); mvwprintw(w49,1,2,"49"); mvwprintw(w50,1,2," X");
			mvwprintw(message, 1, 2, "Congratutions, you've finished your journey");
			mvwprintw(message, 2, 15, "in just %d rolls!", rolls);
			wrefresh(w1); wrefresh(w2); wrefresh(w3); wrefresh(w4); wrefresh(w5); wrefresh(w6); wrefresh(w7); wrefresh(w8); wrefresh(w9); wrefresh(w10);
			wrefresh(w11); wrefresh(w12); wrefresh(w13); wrefresh(w14); wrefresh(w15); wrefresh(w16); wrefresh(w17); wrefresh(w18); wrefresh(w19); wrefresh(w20);
			wrefresh(w21); wrefresh(w22); wrefresh(w23); wrefresh(w24); wrefresh(w25); wrefresh(w26); wrefresh(w27); wrefresh(w28); wrefresh(w29); wrefresh(w30);
			wrefresh(w31); wrefresh(w32); wrefresh(w33); wrefresh(w34); wrefresh(w35); wrefresh(w36); wrefresh(w37); wrefresh(w38); wrefresh(w39); wrefresh(w40);
			wrefresh(w41); wrefresh(w42); wrefresh(w43); wrefresh(w44); wrefresh(w45); wrefresh(w46); wrefresh(w47); wrefresh(w48); wrefresh(w49); wrefresh(w50);
			wrefresh(message);
			
			wclear(innerwin);
			box(innerwin, 0, 0);
			refresh();
			mvwprintw(innerwin, 3, 3, "(press R to restart");
			mvwprintw(innerwin, 4, 3, "   or Q to quit)");
			wrefresh(innerwin);
			break;
		}

	}

	while(1){
		int temp;
		temp = getch();
		if (temp == (int)'q' || temp == (int)'Q')
		{
			beep();
			goto outerWhile;
		}
		if (temp == (int)'r' || temp == (int)'R')
		{
			beep();
			goto innerWhile;
		}
	}

	{
		innerWhile:
			wclear(innerwin); wclear(gamebox); wclear(message);
			i = 0; current = 1; rolls = 0;
			continue;
	}

	{
		outerWhile:
			wclear(innerwin); wclear(gamebox); wclear(message);
			i = 0; current = 1; rolls = 0;
			break;
	}

}

	return 0;
}