#include <vector>
#include <string>
#ifndef UTILS_H // Para prevenir múltiplas inclusões
#define UTILS_H

using namespace std;

void imprime_matriz(vector<vector<double>> &M, int n);
void imprime_matriz2(vector<vector<double>> &M, int n);
void imprime_e_copia_matriz(vector<vector<double>> &M, vector<vector<double>> &M_copia, int n);
void imprime_e_copia_vetor(vector<double> &v, vector<double> &v_copia, int n);
void imprime_vetor(vector<double> &v, int n);
bool imprime_resultado_final_com_limite(vector<double> &resultado, int n);
void imprime_conclusao(bool explodiu, string metodo);
void cria_matriz(vector<vector<double>> &A, int n);
vector<double> multiplica_matriz_por_vetor(const vector<vector<double>> &matrix, const vector<double> &vec, int n);

#endif // UTILS_H
