#include <iostream>
#include "utils.h"

const double Lim = 0.4;

// ------------------- Funções auxiliares -------------------

void imprime_matriz(vector<vector<double>> &M, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Imprimir matriz para a tabela com a linha separadora
void imprime_matriz2(vector<vector<double>> &M, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (j == 0)
            {
                cout << "| " << M[i][j] << " ";
            }
            else
            {
                cout << M[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void imprime_e_copia_matriz(vector<vector<double>> &M, vector<vector<double>> &M_copia, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << M[i][j] << " ";
            M_copia[i][j] = M[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void imprime_e_copia_vetor(vector<double> &v, vector<double> &v_copia, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << v[i] << " ";
        v_copia[i] = v[i];
    }
    cout << endl
         << endl;
}

void imprime_vetor(vector<double> &v, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << endl;
}

bool imprime_resultado_final_com_limite(vector<double> &resultado, int n)
{
    bool explodiu = false;
    for (int i = 0; i < n; ++i)
    {
        if (abs(resultado[i]) > Lim)
        {
            cout << "d" << i << " = " << resultado[i] << " passou do limite de "
                 << Lim << "cm" << endl;
            explodiu = true;
        }
        else
            cout << "d" << i << " = " << resultado[i] << " não passou do limite de "
                 << Lim << "cm" << endl;
    }
    cout << endl;

    return explodiu;
}

void imprime_conclusao(bool explodiu, string metodo)
{
    cout << "Pelo método de " << metodo << ", ";
    if (explodiu)
    {
        cout << "Sérios danos ocorreram e um problema gigantesco aconteceu."
             << endl;
    }
    else
    {
        cout << "Nenhum dano aconteceu." << endl;
    }
}

void cria_matriz(vector<vector<double>> &A, int n)
{
    cout << "Digite os elementos da matriz:" << endl;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << "Matriz[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }
}

vector<double> multiplica_matriz_por_vetor(const vector<vector<double>> &matrix, const vector<double> &vec, int n)
{
    vector<double> result(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i] += matrix[i][j] * vec[j];
        }
    }

    return result;
}
