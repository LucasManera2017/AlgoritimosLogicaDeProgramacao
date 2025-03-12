#Calculo do tempo de viagem

vm = float(input('Digite a velocidade média do trajeto em km/h: '))
dist = float(input('Digite a distância do trajeto em km: '))

tempo = dist/vm * 60

print('O tempo da viagem é de: ', tempo, 'min')