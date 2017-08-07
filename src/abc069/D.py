if __name__ == '__main__':
    W = list(map(int, input().split()))
    N = int(input())
    a = list(map(int, input().split()))
    cnt = 0
    tmp = 0
    ans = [W[0]][W[1]]
    for i in range(W[1]):
        for j in range(W[0]):
            tmp = a[cnt]
            if tmp == 0:
                cnt += 1
                tmp = a[cnt]
            else:
                ans[i][j] = a[cnt]
    fl = True
    for k in range(W[0]):
        fl = not fl
        if fl :
            print(ans[k][::])
        else:
            print(reversed(ans[k][::]))
