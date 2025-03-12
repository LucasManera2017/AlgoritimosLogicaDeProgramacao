# Calcule o valor final de um produto com desconto

vp = float(input('Digite o valor do produto: '))
desc = float(input('Digite a porcentagem do desconto: '))

vpdesc = vp - (vp * desc/100)

print('O valor com desconto é de: ', vpdesc)