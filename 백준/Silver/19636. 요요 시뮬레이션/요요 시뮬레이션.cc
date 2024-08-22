#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int w, intake0, t;
    int d, intake1, activemr;
    
    cin >> w >> intake0 >> t;
    cin >> d >> intake1 >> activemr;

    int bmr1 = intake0, bmr2 = intake0;
    int w1 = w, w2 = w;

    for (int i = 1; i <= d; i++) {
        w1 += intake1 - (bmr1 + activemr);
        w2 += intake1 - (bmr2 + activemr);

        if (abs(intake1 - (bmr2 + activemr)) > t) {
            bmr2 += float(intake1 - (bmr2 + activemr)) / 2.0;
        }
    }

    if (w1 <= 0) {
        cout << "Danger Diet" << endl;
    } else {
        cout << w1 << " " << bmr1 << endl;
    }

    if (w2 <= 0 || bmr2 <= 0) {
        cout << "Danger Diet";
    } else {
        cout << w2 << " " << bmr2 << " ";
        if (bmr1 > bmr2) {
            cout << "YOYO";
        } else {
            cout << "NO";
        }
    }
    
    return 0;
}
