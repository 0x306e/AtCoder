def solve(N, a):
    cnt = 0
    for i in a:
        if (N - 1 == i) or (N == i) or (N + 1 == i):
            cnt += 1
    return cnt


if __name__ == '__main__':
    N = int(input())
    a = list(map(int, input().split()))
    max = 0
    for j in range(a.__len__()):
        tmp = solve(a[j], a)
        if tmp >= max:
            max = tmp
    print(max)
