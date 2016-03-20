#include <iostream>
using namespace std;
int Matriz[103][103];
bool visitado[103][103];
int n, aux, coloresTotal = 0, mod;

int X[4] = {0, 0, 1, -1};
int Y[4] = {1, -1, 0, 0};

void dfs(int i, int j){
    visitado[i][j]=1;
    for(int x = 0; x < 4; x++){
        int newX = i+Y[x];
        int newY = j+X[x];
        if(!visitado[newX][newY] && newX >= 0 && newX < n && newY >= 0 && newY < n && Matriz[i][j]%n == Matriz[newX][newY]%n){
        dfs(newX, newY);
        }
    }
}

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j<n; j++){
            cin >> Matriz[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visitado[i][j]){
            coloresTotal++;
            dfs(i,j);
            }
        }
    }
    cout << coloresTotal << "\n";
    return 0;
}
