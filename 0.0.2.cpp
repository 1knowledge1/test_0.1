#include <iostream>
#include <sstream>

using namespace std;
int main() {
    int numbers[10], num, sum;
    bool failure = false;

    for (string string ; getline(cin, string); ) {
        istringstream stream(string);
        for (int i = 0; i < 10; ++i) {

            if (!(stream >> numbers[i])) {
                cout << "An error has occurred while reading the input sequence";
                return 0;
            }
        }
        break;
    }

   for (int i = 0; i < 9 ; i++)
        if (numbers[i] > numbers[i+1]){
        cout << "The input sequence must be non-decreasing.";
        return 0;
    }

    cin >> num;

    for (int i = 0; i <10; i++)
    {

        for (int j = i + 1; j <10; j++){
            sum = numbers[i]+numbers[j];
            if(sum == num) {
                cout << numbers[i] << ' '<< numbers[j];
                return 0;
            } else failure = true;
        }
    }
    if (failure) cout << "There is no such pair of numbers.";

    return 0;
}
