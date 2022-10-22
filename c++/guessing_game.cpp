#include <cstdlib>
#include <iostream>
#include <string> 
using namespace std;

int main() {
  srand(time(0));
  int secret = rand() % 100;

  string guess;
  int num_guess;
  while (true) {
    cout << "guess a number: " << endl;
    
    cin >> guess;

    try {
      num_guess = stoi(guess);
    } catch (exception error) {
      cout << "please type a number!" << endl;
      continue;
    }

    cout << "you guess:" << guess << endl;
    if (num_guess > secret) cout << "Too Big!" << endl;
    else if (num_guess < secret) cout << "Too Small!" << endl;
    else {
      cout << "Too Won!" << endl;
      break;
    }
  }
}
