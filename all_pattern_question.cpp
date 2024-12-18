// Print a rectangle of * symbols.
// #include <iostream>
// using namespace std;
// int main() {
//   int length, width;
//   cout << "enter length of rectangle:";
//   cin >> length;
//   cout << "enter width of rectangle:";
//   cin >> width;
//   for (int i = 1; i <= length; i++) {
//     for (int j = 1; j <= width; j++) {
//     cout << "*";
//     }
//     cout << "\n";
//   }
// }


// Print a square of * symbols.
// #include <iostream>
// using namespace std;
// int main() {
//   int length;
//   cout << "enter length of rectangle:";
//   cin >> length;
//   cout << "enter length of rectangle:";
//   cin >> length;
//   for (int i = 1; i <= length; i++) {
//     for (int j = 1; j <= length; j++) {
//     cout << "*";
//     }
//     cout << "\n";
//   }
// }

// Print a right-angled triangle of *.
// #include <iostream>
// using namespace std;
// int main() {
//   int altitude,base;
//   cout << "enter altitude:";
//   cin >> altitude;
//   for (int i = 1; i <= altitude; i++) {
//     for (int j = 1; j <= i; j++) {
//     cout << "*";
//     }
//     cout << "\n";
//   }
// }


// Print an inverted right-angled triangle of *.
// #include <iostream>
// using namespace std;
// int main() {
//   int altitude;
//   cout << "enter altitude:";
//   cin >> altitude;
//   for (int i = altitude; i >=1; i--) {
//     for (int j = i; j >= 1; j--) {
//     cout << "*";
//     }
//     cout << "\n";
//   }
// }


// Print a mirrored right-angled triangle of *.
// #include <iostream>
// using namespace std;
// int main() {
//   int altitude;
//   //  k = "0";
//   cout << "enter altitude:";
//   cin >> altitude;
//   for (int i = altitude; i >=1; i--) {
//      for (int j = 1; j <= altitude - i; j++) {
//             cout << " ";
//         }
//         // Print stars
//       for (int k = 1; k <= i; k++) {
//         cout << "*";
//       }
  
//     cout << "\n";
//   }
// }


// Print a half pyramid of numbers. left side 
// #include <iostream>
// using namespace std;
// int main() {
//   int a;
//   cout << "enter number:";
//   cin >> a;
//   for (int i = 1; i<=a; i++) {
//     for (int j = 1; j <=i; j++) {
//     cout << i;
//     }
//     cout << "\n";
//   }
// }



// Print a half pyramid of numbers. right side
// #include <iostream>
// using namespace std;
// int main() {
//   int a;
//   cout << "enter number:";
//   cin >> a;
//   for (int i = 1; i<=a; i++) {
//     for(int k = 1; k <= a-i; k++){
//       cout<<" ";
//     }
//     for (int j = 1; j <=i; j++) {
//     cout << j;
//     }
//     cout << "\n";
//   }
// }

// Print a full pyramid of *.
//     *    
//    ***   
//   *****  
//  ******* 
// *********

// #include <iostream>
// using namespace std;
// int main() {
//   int a;
//   cout << "enter number:";
//   cin >> a;
//   for (int i = 1; i<=a; i++) {
//     for(int k = 1; k <= a-i; k++){
//       cout<<" ";
//     }
//     for (int j = 1; j <=2*i-1; j++) {
//     cout << "*";
//     }
//     cout << "\n";
//   }
// }


// Print an inverted full pyramid of *.
// *********
//  ******* 
//   *****  
//    ***   
//     *    

// #include <iostream>
// using namespace std;
// int main() {
//   int a;
//   cout << "enter number:";
//   cin >> a;
//   for (int i =a; i>=1; i--) {
//     for(int k = 1; k <= a-i; k++){
//       cout<<" ";
//     }
//     for (int j = 1; j <=2*i-1; j++) {
//     cout << "*";
//     }
//     cout << "\n";
//   }
// }


// Print a diamond of *.
// #include <iostream>
// using namespace std;
// int main() {
//   int a;
//   cout << "enter number:";
//   cin >> a;
//   for (int i = 1; i<=a; i++) {
//     for(int k = 1; k <= a-i; k++){
//       cout<<" ";
//     }
//     for (int j = 1; j <=2*i-1; j++) {
//     cout << "*";
//     }
//     cout << "\n";
//   }
//   for (int i =a; i>=1; i--) {
//     for(int k = 1; k <= a-i; k++){
//       cout<<" ";
//     }
//     for (int j = 1; j <=2*i-1; j++) {
//     cout << "*";
//     }
//     cout << "\n";
//   }
// }


// Print a hollow square of *.
#include <iostream>
using namespace std;
int main() {
  int length, width;
  cout << "enter length of rectangle:";
  cin >> length;
  cout << "enter width of rectangle:";
  cin >> width;
  for (int i = 1; i <= length; i++) {
    for (int j = 1; j <= width; j++) {
    if( i==1 or j==1 or j ==5 or i == 5){
      cout<<"*";
    }

    }
    cout << "\n";
  }
}