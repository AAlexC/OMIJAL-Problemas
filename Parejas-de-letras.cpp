#include <iostream>
using namespace std;
int repite[228];
char aux;
long long int total, i, j, c, n, pasa;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n;
    total = 0;
    for(i = 0; i < n; i++){
    cin >> aux;
        c = 0;
        for(j = aux+1; j <= 'z'; j++){
        c += repite[j];
        }
        j = aux;
        repite[j]++;
        total += c;
    }
    cout << total << "\n";
    return 0;
}
