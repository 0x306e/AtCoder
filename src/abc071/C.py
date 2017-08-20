if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))
    mx = 0
    cnt = 0
    d = [0, 0]
    while cnt < 2:
        try:
            mx = max(A)
        except ValueError:
            break
        if A.count(mx) >= 2:
            d[cnt] = mx
            cnt += 1
        while mx in A:
            A.remove(mx)
    print(d[0] * d[1])
