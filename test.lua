local numeros = {}
for i = 2, 25000
do
    table.insert(numeros, i)
end

local primo = {}
for n = 1, #numeros
do
    local mult = 0
    for i = 2, numeros[n]
    do
        if numeros[n] % i == 0
        then
            mult = mult +1
        end
    end

    if mult <= 1
    then
        table.insert(primo, numeros[n])
    end
end
   
print(os.clock())