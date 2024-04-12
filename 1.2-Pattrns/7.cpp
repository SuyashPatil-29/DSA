
#include <bits/stdc++.h>

using namespace std;

int main() {
  for (int i = 0; i < 5; i++) {
    for (int j = i; j <5; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}


/*  For n=5
 
     |____*____|  => 4 spaces, 1 stars  => i=0; 4 spaces, 1 stars => (n-i-1) spaces, 2*i+1 stars
     |___***___|  => 3 spaces, 3 stars  => i=1; 3 spaces, 3 stars => (n-i-1) spaces, 2*i+1 stars   
     |  *****  |  .
     | ******* |  .
     |*********|  .
     ***********  .
 
  We can see that we need to go something like Space, Star, Space.
  Lets Calculate the number of spaces and stars we need in each line based upon i and j

  Let the values of i be 0,1,2,3,4
 
  To calc no of stars per line

  2n - 1 - 2(n - i - 1)
  2n - 1 - 2n + 2i + 2

  = > (n - i -1) space's  => i to n
  = > 2 * i + 1 star's
  = > (n - i -1) space's  => i to n => can be ignored as we dont need to print spaces here

*/
