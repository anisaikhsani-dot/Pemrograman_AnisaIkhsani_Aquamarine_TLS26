#include <iostream>

using namespace std;

const float KMS_PER_MILE = 1.6;
    
int main ()
 { 
    float distanceMiles = 0.0;
    float distanceKMS = 0.0;
   
    cout << "Masukan jarak dalammil";
    cin >> distanceMiles;

    distanceKMS = distanceMiles * KMS_PER_MILE;

    if(distanceKMS > 100) {
        cout << "Jarak lebih dari 100km" << endl;
    }

    if(distanceKMS > 50) {
        cout << "Jarak lebih dari 50km" << endl;
    }

    cout << "Jarak dalam KM adalah:" << endl;
    cout << distanceKMS;

    return 0;
 }


