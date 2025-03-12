#Escreva um programa para calcular o estoque médio, onde o estoque médido = (Quantidade mínima + Quantidade Máxima) / 2 

qtd_maxima = int(input("Digite a quantidade máxima de peças: "))
qtd_minima = int(input("Digite a quantidade mínima de peças: "))

est_medio = (qtd_maxima + qtd_minima)/2

print("Estoque médio da loja: ", est_medio)