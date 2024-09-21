import matplotlib.pyplot as plt

soma = 0
percentual = []

valores = [['SP', 67836.43], ['RJ', 36678.66], ['MG', 29229.88], ['ES', 27165.48], ['Outros', 19849.53]]

for valor in valores:
    soma += valor[1]

for valor in valores:
    percentual.append((valor[1] / soma) * 100)

print(percentual)
print(soma)

labels = ['SP', 'RJ', 'MG', 'ES', 'Outros']
colors = ['#FAF4D3','#E94F37','#A5402D','#6A8EAE','#004643']

plt.pie(percentual, labels=labels, colors=colors,
        autopct='%1.1f%%', shadow=True, startangle=140)

plt.axis('equal')  
plt.title('FATURAMENTO MENSAL')
plt.show()
