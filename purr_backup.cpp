#include <ncurses.h>
#include <fstream>

int check_purrhighscore(int score){
	int old_score, new_score, highscore;
	std::string temp;
	bool flag = false;

	new_score = score;
	std::fstream reader;
	reader.open("purr_highscore.txt", std::ios::in);

	while(getline(reader, temp)){
		if (temp.size()>0)
		{
			flag = true;
		}else{
			flag = false;
		}
		reader.close();
	}

	if (flag == false)
	{
		int temp1 = 0;
		std::fstream writer;
		writer.open("purr_highscore.txt", std::ios::out);
		writer<<temp1;
		writer.close();
		highscore = 0;
	}
	else if (flag == true)
	{
		std::fstream reader;
		reader.open("purr_highscore.txt", std::ios::in);
		reader>>old_score;
		if (new_score > old_score)
		{
			std::fstream writer;
			writer.open("purr_highscore.txt", std::ios::out);
			writer<<new_score;
			writer.close();
			highscore = new_score;
		}
		else{
			highscore = old_score;
		}
	}

	return highscore;
}

int purr()
{
	// initscr();
	// noecho();

	while(1){

		// WINDOW * win0 = newwin(5, 20, 1, 5);
		// WINDOW * win1 = newwin(10, 20, 6, 5);
		WINDOW * win1 = newwin(7, 24, 2, 5);
		WINDOW * win2 = newwin(6, 20, 2, 35);
		refresh();
		// box(win0, 0, 0);
		// box(win1, 0, 0);
		box(win2, 0, 0);

		static int score = 0, life=100, highscore;
		highscore = check_purrhighscore(0);

		// attron(A_REVERSE);
		// mvwprintw(win0, 1, 1, "Everytime Purr");
		// attron(A_REVERSE);
		// mvwprintw(win0, 2, 1, "eats, you gain a");
		// mvwprintw(win0, 3, 1, "score!(w, a, s, d)");
		mvwprintw(win1, 3, 12, ":3");
		mvwprintw(win1, 1, 20, "*");
		mvwprintw(win2, 1, 1, "Your score = %d", score);
		mvwprintw(win2, 2, 1, "Purr's life = %d", life);
		mvwprintw(win2, 3, 1, "Highscore = %d", highscore);
		// wrefresh(win0);
		wrefresh(win1);
		wrefresh(win2);


		static int y=3, x=12, c_y=1, c_x=20;
		const int y_max = 7, x_max = 23, y_min = -1, x_min = -1;

		while(1){
			int c;
			c = getch();
			if (c == (int)'d' || c==(int)'D')
			{
				life--;
				x++;
				if (x == x_max){
					x = 0;
				}
				// x++;
				if ((y == c_y && x == c_x-1) || (y == c_y && x == c_x))
				{
					score++;
					beep();
					c_y = y+3;
					c_x = x+8;
					if (c_y >= y_max)
					{
						int temp = c_y - y_max;
						c_y = temp;
					}
					if (c_x >= x_max)
					{
						int temp = c_x - x_max;
						c_x = temp+1;
					}
				}
				wclear(win1);
				// box(win1, 0, 0);
				mvwprintw(win1, y, x, ":3");
				mvwprintw(win1, c_y, c_x, "*");
				refresh();
				wrefresh(win1);
			}
			if (c==(int)'a' || c==(int)'A')
			{
				life--;
				x--;
				if (x == x_min){
					x = 22;
				}
				// x--;
				if ((y == c_y && x == c_x-1) || (y == c_y && x == c_x))
				{
					score++;
					beep();
					c_y = y+4;
					c_x = x+9;
					if (c_y >= y_max)
					{
						int temp = c_y - y_max;
						c_y = temp;
					}
					if (c_x >= x_max)
					{
						int temp = c_x - x_max;
						c_x = temp+1;
					}
				}
				wclear(win1);
				// box(win1, 0, 0);
				mvwprintw(win1, y, x, ":3");
				mvwprintw(win1, c_y, c_x, "*");
				refresh();
				wrefresh(win1);
			}
			if (c==(int)'s' || c==(int)'S')
			{
				life--;
				y++;
				if (y == y_max){
					y = 0;
				}
				// y++;
				if ((y == c_y && x == c_x-1) || (y == c_y && x == c_x))
				{
					score++;
					beep();
					c_y = y+6;
					c_x = x+11;
					if (c_y >= y_max)
					{
						int temp = c_y - y_max;
						c_y = temp;
					}
					if (c_x >= x_max)
					{
						int temp = c_x - x_max;
						c_x = temp+1;
					}
				}
				wclear(win1);
				// box(win1, 0, 0);
				mvwprintw(win1, y, x, ":3");
				mvwprintw(win1, c_y, c_x, "*");
				refresh();
				wrefresh(win1);
			}
			if (c==(int)'w' || c==(int)'W')
			{
				life--;
				y--;
				if (y == y_min){
					y = 6;
				}
				// y--;
				if ((y == c_y && x == c_x-1) || (y == c_y && x == c_x))
				{
					score++;
					beep();
					c_y = y+5;
					c_x = x+7;
					if (c_y >= y_max)
					{
						int temp = c_y - y_max;
						c_y = temp;
					}
					if (c_x >= x_max)
					{
						int temp = c_x - x_max;
						c_x = temp+1;
					}
				}
				wclear(win1);
				// box(win1, 0, 0);
				mvwprintw(win1, y, x, ":3");
				mvwprintw(win1, c_y, c_x, "*");
				refresh();
				wrefresh(win1);
			}

			wclear(win2);
			box(win2, 0, 0);
			mvwprintw(win2, 1, 1, "Your score = %d", score);
			mvwprintw(win2, 2, 1, "Purr's life = %d", life);
			mvwprintw(win2, 3, 1, "Highscore = %d", highscore);
			wrefresh(win2);

			if (life == 0)
				{
					wclear(win1);
					// box(win1, 0, 0);

					// attron(A_BOLD);
					mvwprintw(win1, 2, 7, "GAME OVER!");
					// attroff(A_BOLD);
					mvwprintw(win1, 3, 3, "(press R to restart");
					mvwprintw(win1, 4, 3, "   or Q to quit)");
					refresh();
					wrefresh(win1);

					highscore = check_purrhighscore(score);

					wclear(win2);
					box(win2, 0, 0);
					mvwprintw(win2, 1, 1, "Your score = %d", score);
					mvwprintw(win2, 2, 1, "Purr's life = %d", life);
					mvwprintw(win2, 3, 1, "Highscore = %d", highscore);
					wrefresh(win2);

					break;
				}


		} //inner while end

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
				wclear(win1); wclear(win1);
				score = 0, life = 100, y=3, x=12, c_y=1, c_x=20;
				continue;
		}

		{
			outerWhile:
				wclear(win1); wclear(win2);
				score = 0, life = 100, y=3, x=12, c_y=1, c_x=20;
				break;
		}

	}//outer while end

	// endwin();

	return 0;
}