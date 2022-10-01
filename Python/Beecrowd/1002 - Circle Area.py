#A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:

#- Efetue o cálculo da área, elevando o valor de raio ao
# quadrado e multiplicando por π.

#Entrada
#A entrada contém um valor de ponto flutuante (dupla precisão)
# , no caso, a variável raio.

#Saída
#Apresentar a mensagem "A=" seguido pelo valor da variável
#area, conforme exemplo abaixo, com 4 casas após o ponto decimal.
#Utilize variáveis de dupla precisão (double). Como todos
#os problemas, não esqueça de imprimir o fim de linha após
#o resultado, caso contrário, você receberá
#"Presentation Error".

n = 3.14159
raio = float(input())
area = n * raio ** 2

print('A={:.4f}'.format(area))

#SUBMISSÃO # 26248069
#PROBLEMA: 1002 - Área do Círculo
#RESPOSTA: Accepted
#LINGUAGEM: Python 3.9 (Python 3.9.4) [+1s] {beta}
#TEMPO: 0.393s
#TAMANHO: 90 Bytes
#MEMÓRIA: -
#SUBMISSÃO: 12/02/2022 12:18:20