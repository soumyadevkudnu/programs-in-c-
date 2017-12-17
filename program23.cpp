#include < iostream.h>
int main()


{

int choice ;
cout <<"Year in Anime released"<<"\n";

cout << "1.  2015 " << "\n" ;

cout << "2.  2016 " << "\n" ;

cout << "3.  2017 " << "\n" ;

cout << " Enter your choice (1-3): " ;




cin >> choice ;

cout << "\n" ;
switch (choice)




{

case 1: cout << "\n" << "1.ONE PUNCH MAN  " ;
		  cout << "\n" << "2.FOOD WARS!: SHOKUGEKI NO SOMA  " ;
		  cout << "\n" << "3.CHARLOTTE " ;
		  cout << "\n" << "4.DRAGON BALL SUPER " ;

		  break;


case 2: cout << "\n" << " 1. ERASED " ;
		  cout << "\n" << " 2. ASSASSINATION CLASSROOM " ;
		  cout << "\n" << " 3. GATES " ;
		  cout << "\n" << " 4. MAGI SINBAD NO BUOKEN " :
		  cout << "\n" << " 5. BERSERK " ;
		  cout << "\n" << " 6. MOB PSYCO 100 " ;

		  break ;



case 3: cout << "\n" << " 1.BLACK BUTLER " ;
		  cout << "\n" << " 2.GENOCIDAL ORGAN " ;
		  cout << "\n" << " 3.KIZUMONOGATARI 3 : REIKETSU HEN " ;
		  cout << "\n" << " 4.ATTACK ON TITAN : season 2 " ;
		  cout << "\n" << " 5.CLOCKWORK PLANET " ;


		  break ;


	default : cout << "WRONG CHOICE!!!!" ;

     break ;


}

return 0 ;

}
