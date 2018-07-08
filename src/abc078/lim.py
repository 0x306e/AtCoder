d = 1900
sum = 0
for i in range(50):
    sum += 1900 * i * (2 ** (-i))
print(sum)
