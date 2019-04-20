#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <random>

#define MAX_FILENAME_CHAR 100

using namespace std;
int main(int argc, char** argv) {
    //char filename[MAX_FILENAME_CHAR];
    string filename;
    //unsigned seed = 1234;

    std::random_device rd;
    std::mt19937_64 gen(rd());

    std::uniform_real_distribution<> dis(0.0, 1.0);

    cout << "Enter the filename : ";
    cin >> filename;
    std::cout << "You have entered filename : " << filename << std::endl;

    std::ofstream fout;
    fout.open(filename);

    for (int i=0; i<10; ++i ) {
        fout << std::setprecision(15) << dis(gen) << std::endl;
    }
    fout.close();
}