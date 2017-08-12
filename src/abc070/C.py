def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def lcm(a, b):
    return a * b // gcd (a, b)


if __name__ == '__main__':
    N = int(input())
    T = []
    for i in range(N):
        T.append(int(input()))
    tmp = T[0]
    for j in range(N - 1):
        tmp = lcm(tmp, T[j+1])
    print(tmp)
