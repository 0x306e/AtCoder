if __name__ == '__main__':
    N = int(input())
    D = [int(i) for i in input().split()]
    M = int(input())
    T = [int(j) for j in input().split()]
    for k in T:
        if k in D:
            D.remove(k)
        else:
            print('NO')
            exit(0)
    print('YES')
