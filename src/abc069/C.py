if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))
    cnt = 0
    cntSub = 0
    for i in range(N):
        if A[i] % 4 == 0:
            cnt += 1
        if A[i] == 2:
            cntSub += 1
    cnt += (cntSub // 2)
    if cnt >= (N//2):
        print('Yes')
    else:
        print('No')
