#include "logic.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rnum()
{
	int rand_num=0;	
	srand(time(NULL));
	rand_num=rand()%4;
	rand_num*=2;
	if(rand_num==4)
	rand_num*=2;
	return rand_num;
}

void ii(char* mas)
{
	if(((mas[0]=='X'&& mas[2]=='-'&& mas[6]=='-'&& mas[8]=='-')||
	    (mas[0]=='-'&& mas[2]=='X'&& mas[6]=='-'&& mas[8]=='-')||
	    (mas[0]=='-'&& mas[2]=='-'&& mas[6]=='X'&& mas[8]=='-')||
	    (mas[0]=='-'&& mas[2]=='-'&& mas[6]=='-'&& mas[8]=='X'))&&
	    (mas[1]=='-'&& mas[3]=='-'&& mas[5]=='-'&& mas[7]=='-'))
	{
	    mas[4]='O'; 
	}
	else if(mas[0]=='-'&& mas[1]=='O' && mas[2]=='O')
	{
		mas[0]='O';
	}
	else if(mas[0]=='O'&& mas[1]=='-' && mas[2]=='O')
	{
		mas[1]='O';	
	}
	else if(mas[0]=='O'&& mas[1]=='O' && mas[2]=='-')
	{
		mas[2]='O';
	}
	else if(mas[3]=='-'&& mas[4]=='O' && mas[5]=='O')
	{
		mas[3]='O';
	}
	else if(mas[3]=='O'&& mas[4]=='-' && mas[5]=='O')
	{
		mas[4]='O';
	}
	else if(mas[3]=='O'&& mas[4]=='O' && mas[5]=='-')
	{
		mas[5]='O';
	}
	else if(mas[6]=='-'&& mas[7]=='O' && mas[8]=='O')
	{
		mas[6]='O';
	}
	else if(mas[6]=='O'&& mas[7]=='-' && mas[8]=='O')
	{
		mas[7]='O';
	}
	else if(mas[6]=='O'&& mas[7]=='O' && mas[8]=='-')
	{
		mas[8]='O';
	}	
	else if(mas[0]=='-'&& mas[3]=='O' && mas[6]=='O')
	{
		mas[0]='O';
	}
	else if(mas[0]=='O'&& mas[3]=='-' && mas[6]=='O')
	{
		mas[3]='O';
	}
	else if(mas[0]=='O'&& mas[3]=='O' && mas[6]=='-')
	{
		mas[6]='O';
	}
	else if(mas[1]=='-'&& mas[4]=='O' && mas[7]=='O')
	{
		mas[1]='O';
	}
	else if(mas[1]=='O'&& mas[4]=='-' && mas[7]=='O')
	{
		mas[4]='O';
	}
	else if(mas[1]=='O'&& mas[4]=='O' && mas[7]=='-')
	{
		mas[7]='O';
	}
	else if(mas[2]=='-'&& mas[5]=='O' && mas[8]=='O')
	{
		mas[2]='O';
	}
	else if(mas[2]=='O'&& mas[5]=='-' && mas[8]=='O')
	{
		mas[5]='O';
	}
	else if(mas[2]=='O'&& mas[5]=='O' && mas[8]=='-')
	{
		mas[8]='O';
	}
	else if(mas[0]=='-'&& mas[4]=='O' && mas[8]=='O')
	{
		mas[0]='O';
	}
	else if(mas[0]=='O'&& mas[4]=='-' && mas[8]=='O')
	{
		mas[4]='O';
	}
	else if(mas[0]=='O'&& mas[4]=='O' && mas[8]=='-')
	{
		mas[8]='O';
	}
	else if(mas[2]=='-'&& mas[4]=='O' && mas[6]=='O')
	{
		mas[2]='O';
	}
	else if(mas[2]=='O'&& mas[4]=='-' && mas[6]=='O')
	{
		mas[4]='O';
	}
	else if(mas[2]=='O'&& mas[4]=='O' && mas[6]=='-')
	{
		mas[6]='O';
	}
	else if(mas[0]=='-'&& mas[1]=='X' && mas[2]=='X')
	{
		mas[0]='O';
	}
	else if(mas[0]=='X'&& mas[1]=='-' && mas[2]=='X')
	{
		mas[1]='O';
	}
	else if(mas[0]=='X'&& mas[1]=='X' && mas[2]=='-')
	{
		mas[2]='O';
	}
	else if(mas[3]=='-'&& mas[4]=='X' && mas[5]=='X')
	{
		mas[3]='O';
	}
	else if(mas[3]=='X'&& mas[4]=='-' && mas[5]=='X')
	{
		mas[4]='O';
	}
	else if(mas[3]=='X'&& mas[4]=='X' && mas[5]=='-')
	{
		mas[5]='O';
	}
	else if(mas[6]=='-'&& mas[7]=='X' && mas[8]=='X')
	{
		mas[6]='O';
	}
	else if(mas[6]=='X'&& mas[7]=='-' && mas[8]=='X')
	{
		mas[7]='O';
	}
	else if(mas[6]=='X'&& mas[7]=='X' && mas[8]=='-')
	{
		mas[8]='O';
	}
	else if(mas[0]=='-'&& mas[3]=='X' && mas[6]=='X')
	{
		mas[0]='O';
	}
	else if(mas[0]=='X'&& mas[3]=='-' && mas[6]=='X')
	{
		mas[3]='O';
	}
	else if(mas[0]=='X'&& mas[3]=='X' && mas[6]=='-')
	{
		mas[6]='O';
	}
	else if(mas[1]=='-'&& mas[4]=='X' && mas[7]=='X')
	{
		mas[1]='O';
	}
	else if(mas[1]=='X'&& mas[4]=='-' && mas[7]=='X')
	{
		mas[4]='O';
	}
	else if(mas[1]=='X'&& mas[4]=='X' && mas[7]=='-')
	{
		mas[7]='O';
	}
	else if(mas[2]=='-'&& mas[5]=='X' && mas[8]=='X')
	{
		mas[2]='O';
	}
	else if(mas[2]=='X'&& mas[5]=='-' && mas[8]=='X')
	{
		mas[5]='O';
	}
	else if(mas[2]=='X'&& mas[5]=='X' && mas[8]=='-')
	{
		mas[8]='O';
	}
	else if(mas[0]=='-'&& mas[4]=='X' && mas[8]=='X')
	{
		mas[0]='O';
	}
	else if(mas[0]=='X'&& mas[4]=='-' && mas[8]=='X')
	{
		mas[4]='O';
	}
	else if(mas[0]=='X'&& mas[4]=='X' && mas[8]=='-')
	{
		mas[8]='O';
	}
	else if(mas[2]=='-'&& mas[4]=='X' && mas[6]=='X')
	{
		mas[2]='O';
	}
	else if(mas[2]=='X'&& mas[4]=='-' && mas[6]=='X')
	{
		mas[4]='O';
	}
	else if(mas[2]=='X'&& mas[4]=='X' && mas[6]=='-')
	{
		mas[6]='O';
	}
	else
	{
	    while(true)
	    {
			srand(time(NULL));
			int rand_num=rand()%4;
			rand_num*=2;
			if(rand_num==4)
			rand_num*=2;
	
			switch(rand_num)
    		{
			    case 0:
			    if(mas[0]=='-')
	 			{
					mas[0]='O';
					return ;	
	 			} 
	 			else
	 			{
	 				continue;
	 			};
     			case 2:
     			if(mas[2]=='-')
	 			{
					mas[2]='O';
					return ;	
	 			}
	 			else
	 			{
	 				continue;
	 			};
     			case 6:
			    if(mas[6]=='-')
				{
					mas[6]='O';
					return ;	
				}
				else
				{
					continue;
				};
    			case 8:
    			if(mas[8]=='-')
				{
					mas[8]='O';
					return ;	
				}
				else
				{
				 	continue;
				};
    		}
		}
	}	
}

bool proverka_na_pobedu_x(const char* mas)
{
	if(
	mas[0]=='X'&&mas[3]=='X'&&mas[6]=='X'||
	mas[1]=='X'&&mas[4]=='X'&&mas[7]=='X'||
	mas[2]=='X'&&mas[5]=='X'&&mas[8]=='X'||
	mas[0]=='X'&&mas[2]=='X'&&mas[1]=='X'||
	mas[3]=='X'&&mas[5]=='X'&&mas[4]=='X'||
	mas[6]=='X'&&mas[8]=='X'&&mas[7]=='X'||
	mas[0]=='X'&&mas[8]=='X'&&mas[4]=='X'||
	mas[2]=='X'&&mas[6]=='X'&&mas[4]=='X')
	{
		cout<<"igrok 1 pobedil";
		return true;
	}
	else
	return false;
}

bool proverka_na_pobedu_o(const char* mas)
{
	if(mas[0]=='O'&&mas[3]=='O'&&mas[6]=='O'||
	   mas[1]=='O'&&mas[4]=='O'&&mas[7]=='O'||
	   mas[2]=='O'&&mas[8]=='O'&&mas[5]=='O'||
	   mas[0]=='O'&&mas[2]=='O'&&mas[1]=='O'||
	   mas[3]=='O'&&mas[5]=='O'&&mas[4]=='O'||
	   mas[6]=='O'&&mas[8]=='O'&&mas[7]=='O'||
	   mas[0]=='O'&&mas[8]=='O'&&mas[4]=='O'||
	   mas[2]=='O'&&mas[6]=='O'&&mas[4]=='O')
	{
		cout<<"igrok 2 pobedil";
		return true;
	}
	else
	return false;
}
