if __name__ == '__main__':
    N = int(input())
    p = list(map(int, input().split()))
    flag = [False] * 100000
    cnt = 0
    for i in range(p.__len__()):
        if p[i] == i+1:
            flag[i] = True

    for j in range(p.__len__()):
        if flag[j]:
            if flag[j+1]:
                p[j], p[j+1] = p[j+1], p[j]
                cnt += 1
                flag[j], flag[j+1] = True, True
            else:
                if p[j+1] != j+2:
                    p[j], p[j+1] = p[j+1], p[j]
                    cnt += 1
                else:
                    p[j], p[j-1] = p[j-1], p[j]
                    cnt += 1
    print(cnt)
