# Systems of Equations - 2nd Project
## 2o Trabalho de Métodos Numéricos I - Sistemas de Equações

## Descrição
Em um fenômeno da natureza os deslocamentos d1, d2,..., dn encontrados são dados pela solução do sistema de equações lineares Ad = b, onde A é a matriz das propriedades, d é o vetor das incógnitas e b é o vetor dos termos independentes (vetor constante). Caso um desses deslocamentos passe de 0,4 cm, em módulo, podem ocorrer sérios danos e um problema gigantesco. Uma das soluções possíveis para achar o vetor d é através da inversa de A (d = (A^-1)b). Se A é uma matriz nxn que possui como inversa uma matriz A^-1 então AA^-1 = I, onde I é a matriz Identidade, e uma maneira de se achar A^-1 é achar se as colunas de A^-1 uma por vez, através de A(A^-1)1 = {1 0 ... 0}T , A(A^-1)2 = {0 1 ... 0}T ... A(A^-1)n = {0 0 ... 1}T, onde (A^-1)1, (A^-1)2 ... (A^-1)n são as n colunas de A^-1. <br/> Desenvolva um sistema para calcular deslocamentos ds dessas partes com os requisitos abaixo:

### <small>a) Implementar algoritmo para calcular A^-1 e depois {d} pelo método de Gauss-Jacobi.</small>  
### <small>b) Implementar algoritmo para calcular A^-1 e depois {d} pelo método de Gauss-Seidel.</small>  
### <small>c) Calibrar o sistema feito usando como padrão matriz [A] e vetor {b} dados abaixo.</small>  
### <small>d) Fornecer um quadro resposta para cada método, variando os valores de [A] e de {b}.</small>  
### <small>e) Analisar o que vai acontecer nesse fenômeno, para esse sistema mencionado abaixo.</small> 

### Dados de entrada: 
n (número de deslocamentos), termos de [A]nxn e de {b}nx1 e epsilon (precisão).
### Dados de saída: 
A^-1 e os termos de {d}nx1 que representam os n deslocamentos d1, d2,..., dn.

# Conceitos Utilizados

## Gauss-Jordan
O **método de Gauss-Jordan** é uma técnica de eliminação para resolver sistemas lineares e calcular a inversa de uma matriz. Ele transforma a matriz aumentada [A | I] (onde A é a matriz do sistema e I é a identidade) em uma forma reduzida. O objetivo é fazer com que a parte esquerda da matriz se torne a matriz identidade, o que revela diretamente a inversa de A.

## Gauss-Jacobi
O **método de Gauss-Jacobi** é um método iterativo para resolver sistemas lineares. A cada iteração, cada incógnita é atualizada utilizando os valores das iterações anteriores. O processo continua até que a diferença entre as iterações consecutivas seja suficientemente pequena, ou até atingir o número máximo de iterações.

## Gauss-Seidel
O **método de Gauss-Seidel** é similar ao de Gauss-Jacobi, mas com uma diferença importante: ele usa os valores atualizados de cada incógnita durante a mesma iteração, o que pode acelerar a convergência do processo.
