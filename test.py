from time import process_time

numeros = []
for i in range(2, 25000):
    numeros.append(i)

primo = []
for n in numeros:
    mult = 0
    for i in range(2, n+1):
        if n % i == 0:
            mult += 1

    if mult <= 1:
        primo.append(n)

print(process_time())
