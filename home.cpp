#include <ncurses.h>
#include "purr.cpp"
#include "tictactoe.cpp"
#include "jumpman.cpp"
#include "journey.cpp"

int main(int argc, char const *argv[])
{

	initscr();
	cbreak();
	noecho();	
	WINDOW * outerwin = newwin(18,32,0,1);
	WINDOW * innerwin = newwin(9,26,1,4);
	WINDOW * returnkey = newwin(3,7,12,22);
	box(outerwin, 0, 0);
	box(innerwin, 0, 0);
	box(returnkey, 0, 0);
	refresh();
	wattron(outerwin, A_REVERSE);
	mvwprintw(outerwin, 10, 13, " MAG-C ");
	wattroff(outerwin, A_REVERSE);
	mvwprintw(outerwin, 12, 7, "W");
	mvwprintw(outerwin, 13, 4, "A     D");
	mvwprintw(outerwin, 14, 7, "S");
	mvwprintw(returnkey, 1, 2, "<--");
	mvwprintw(innerwin, 3, 1, "   Welcome to MAG-C!!!"); // MY AMATEUR GAMING COLLECTION
	mvwprintw(innerwin, 4, 1, "   Press any key to");
	mvwprintw(innerwin, 5, 1, "   continue ...");
	wrefresh(outerwin);
	wrefresh(returnkey);
	wrefresh(innerwin);
	getch();
	beep();
	clear();
	refresh();
	endwin();

	while(1){

		initscr();
		noecho();	

		char names[5][24]={"PURR - THE CAKE EATER", "TIC-TAC-TOE", "JUMPMAN", "Unexpected Journey", "EXIT"};

		WINDOW * outerwin = newwin(18,32,0,1);
		WINDOW * innerwin = newwin(9,26,1,4);
		WINDOW * returnkey = newwin(3,7,12,22);
		box(outerwin, 0, 0);
		box(innerwin, 0, 0);
		box(returnkey, 0, 0);
		refresh();
		wattron(outerwin, A_REVERSE);
		mvwprintw(outerwin, 10, 13, " MAG-C ");
		wattroff(outerwin, A_REVERSE);
		mvwprintw(outerwin, 12, 7, "W	        ");
		mvwprintw(outerwin, 13, 4, "A     D	     ");
		mvwprintw(outerwin, 14, 7, "S	        ");
		mvwprintw(returnkey, 1, 2, "<--");
		wrefresh(outerwin);
		wrefresh(returnkey);

		while(1){
			static int i=0;
			int h, j;
			if (i==0)
				h = 4;
			else
				h = i-1;
			if (i==4)
				j = 0;
			else
				j = i+1;

			wclear(innerwin);
			box(innerwin, 0, 0);
			mvwprintw(innerwin, 1, 1, "(W for up)");
			mvwprintw(innerwin, 3, 1, "%s", names[h]);
			wattron(innerwin, A_REVERSE);
			mvwprintw(innerwin, 4, 1, ">%s<", names[i]);
			wattroff(innerwin, A_REVERSE);
			mvwprintw(innerwin, 5, 1, "%s", names[j]);
			mvwprintw(innerwin, 7, 1, "(S for down)");
			wrefresh(innerwin);
			int temp;
			temp = getch();

			if (temp==10)
			{
				beep();
				if (i==0)
				{
					wclear(innerwin);
					box(innerwin, 0, 0);
					wrefresh(innerwin);
					purr();
					clear();
					goto reincarnationArea;
				}
				else if (i==1)
				{
					wclear(innerwin);
					box(innerwin, 0, 0);
					wrefresh(innerwin);
					tictactoe();
					clear();
					goto reincarnationArea;
				}
				else if (i==2)
				{
					wclear(innerwin);
					box(innerwin, 0, 0);
					wrefresh(innerwin);
					jumpman();
					clear();
					goto reincarnationArea;
				}
				else if (i==3)
				{
					wclear(innerwin);
					box(innerwin, 0, 0);
					wrefresh(innerwin);
					journey();
					clear();
					goto reincarnationArea;
				}
				else if (i==4)
				{
					clear();
					goto exitArea;
				}
			}
			

			if (temp==int('w') || temp ==int('W'))
			{
				i--;
				if (i==-1)
					i=4;
				beep();
			}
			if (temp==int('s') || temp ==int('S'))
			{
				i++;
				if (i==5)
					i=0;
				beep();
			}
		}

		{
			exitArea:
			break;
		}

		{
			reincarnationArea:
			clear();
			refresh();
			endwin();
			continue;
		}

		clear();
		refresh();
		endwin();
	}

	system("clear");

	return 0;
}