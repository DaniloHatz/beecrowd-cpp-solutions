#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX_RUAS = 1000;

struct Rua {
    short idRua;
    vector<short> ruasAlcance;
};

bool visitado[MAX_RUAS + 1];
vector<short> grafo[MAX_RUAS + 1];
vector<short> grafoInverso[MAX_RUAS + 1];

void bfs(int inicio, vector<short> grafo[], bool visitado[]) {
    fill(visitado, visitado + MAX_RUAS + 1, false);
    queue<short> q;
    q.push(inicio);
    visitado[inicio] = true;

    while (!q.empty()) {
        short atual = q.front();
        q.pop();

        for (short vizinho : grafo[atual]) {
            if (!visitado[vizinho]) {
                visitado[vizinho] = true;
                q.push(vizinho);
            }
        }
    }
}

int main() {
    short numeroRuas;
    cin >> numeroRuas;

    vector<Rua> ruas(numeroRuas);
    for (short i = 0; i < numeroRuas; i++) {
        unsigned short qtRuasAlcance;
        cin >> ruas[i].idRua >> qtRuasAlcance;
        ruas[i].ruasAlcance.resize(qtRuasAlcance);
        for (short k = 0; k < qtRuasAlcance; k++) {
            cin >> ruas[i].ruasAlcance[k];
            grafo[ruas[i].idRua].push_back(ruas[i].ruasAlcance[k]);
            grafoInverso[ruas[i].ruasAlcance[k]].push_back(ruas[i].idRua);
        }
    }

    bfs(0, grafo, visitado);
    vector<short> inalcancaveis;
    for (const Rua& rua : ruas) {
        if (!visitado[rua.idRua]) {
            inalcancaveis.push_back(rua.idRua);
        }
    }

    bfs(0, grafoInverso, visitado);
    vector<short> semSaida;
    for (const Rua& rua : ruas) {
        if (!visitado[rua.idRua]) {
            semSaida.push_back(rua.idRua);
        }
    }

    if (inalcancaveis.empty() && semSaida.empty()) {
        cout << "NO PROBLEMS\n";
    }
    else {
        for (short id : semSaida) {
            cout << "TRAPPED " << id << endl;
        }
        for (short id : inalcancaveis) {
            cout << "UNREACHABLE " << id << endl;
        }
    }

    return 0;
}
