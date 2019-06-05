#include "logic.h"
#include "Paint.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main(int argc, char** argv) {
	char mas[] = {'-','-','-','-','-','-','-','-','-'};
 int yach =0;
 int igrok=0;
 int otvet=2;
 while(true)
 {
 primer();
  igrovaya_setka(mas);

  cout<<"1 ili 2 hodit'"<<endl;
  cin>>igrok;
  cout<<"Igra nachalas'"<<endl;
  //Ход ии если игрок ходит 2м
  if(igrok==2)
  {
   mas[rnum()]='O';
   igrovaya_setka(mas);
  }
  //Общий ход
  primer();
  cin>>yach;
  mas[yach-1] = 'X';
  igrovaya_setka(mas);
  ii(mas);
  igrovaya_setka(mas);
  //Общий ход
  primer();
  cin>>yach;
  mas[yach-1] = 'X';
  igrovaya_setka(mas);
  ii(mas);
  igrovaya_setka(mas);
  if(proverka_na_pobedu_o(mas))
  {
   cout<<"Nachat' zanovo?"<<endl;
   cout<<"0-net"<<endl;
   cout<<"1-da"<<endl;
   cin>>otvet;
   if(otvet==1)
   {
  	continue;
   }
   else
   {
  	return 0;
   }
  }
  //Общий ход
  primer();
  cin>>yach;
  mas[yach-1] = 'X';
  igrovaya_setka(mas);
  if(proverka_na_pobedu_x(mas))
  {
   cout<<"Nachat' zanovo?"<<endl;
   cout<<"0-net"<<endl;
   cout<<"1-da"<<endl;
   cin>>otvet;
   if(otvet==1)
   {
  	continue;
   }
   else
   {
  	return 0;
   }
  }
  ii(mas);
  igrovaya_setka(mas);
  if(proverka_na_pobedu_o(mas))
  {
   cout<<"Nachat' zanovo?"<<endl;
   cout<<"0-net"<<endl;
   cout<<"1-da"<<endl;
   cin>>otvet;
   if(otvet==1)
   {
  	continue;
   }
   else
   {
  	return 0;
   }
  }
  //Общий ход
  primer();
  cin>>yach;
  mas[yach-1] = 'X';
  igrovaya_setka(mas);
  if(proverka_na_pobedu_x(mas))
  {
   cout<<"Nachat' zanovo?"<<endl;
   cout<<"0-net"<<endl;
   cout<<"1-da"<<endl;
   cin>>otvet;
   if(otvet==1)
   {
  	continue;
   }
   else
   {
  	return 0;
   }
  }
  ii(mas);
  igrovaya_setka(mas);
  if(proverka_na_pobedu_o(mas))
  {
   cout<<"Nachat' zanovo?"<<endl;
   cout<<"0-net"<<endl;
   cout<<"1-da"<<endl;
   cin>>otvet;
   if(otvet==1)
   {
  	continue;
   }
   else
   {
  	return 0;
   }
  }
  //Завершающий ход игрока если он выбрал ходить первым
  if(igrok==1)
  {
  cin>>yach;
  mas[yach-1] = 'X';
  igrovaya_setka(mas);
  }
  //Ничья
  cout<<"Nich'ya"<<endl;
  cout<<"Nachat' zanovo?"<<endl;
  cout<<"0-net"<<endl;
  cout<<"1-da"<<endl;
  cin>>otvet;
  if(otvet==1)
  {
   continue;
  }
  else
  {
   return 0;
  }
 }
	return 0;
}
