#include <iostream>
#include <vector>

using namespace std;

vector<int> EnkripsiVig(const vector<int>& P, const vector<int>& K){
    int n = P.size();
    int m = K.size();

    vector<int> C(n);

    for(int i=0; i < n; i++){
        int indeks_kunci = i % m;

        C[i] = (P[i] + K[indeks_kunci] % 26);
    }

    return C;
}

int main(){
    vector<int> P={12, 4, 4, 19};
    vector<int> K={10, 4, 24};

    vector<int> C=EnkripsiVig(P, K);

    cout << "Hasil Enkripsi : ";
    for(int i = 0; i< C.size(); i++){
        cout << C[i] << " ";
    }

    cout << endl;

    return 0;
}
