#include <iostream>
using namespace std;

int main(){

    bool field [4][4] = {
    {0, 1, 0, 1},
    {0, 1, 0, 1},
    {0, 1, 0, 0 },
    {0, 1, 0, 0}
    };
    
    int hits = 0;
    int turns = 0;
    int misses = 0;
    
  	while(hits<6){
    	int rows;
    	int collums;
      cout << "Select a row: " ;
      cin >> rows;

      cout << "Select a collum: " ;
      cin  >> collums;


      if(field[rows - 1][collums - 1] == 1){
          hits ++;
          cout << "You have HIT a ship! \n";
          field[rows - 1][collums - 1] = 0;
      }
      else{
          misses ++;
          cout << "You have Missed a ship! \n";
      }
      turns++;
     }
     
     if(hits == 6){
         cout << "\n ! You have won the game in " << turns << " turns";
     }
    return 0;
}

//REMEMBER
/* 
- Do While
-For takes constraints
-Multi dimensinoal arrays
- Cout <<
- Cin <<
- ++ (+1)
-Switch(Cases, and brek)






 */

