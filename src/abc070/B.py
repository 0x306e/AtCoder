if __name__ == '__main__':
    Num = list(map(int, input().split()))
    st = [Num[0], Num[2]]
    en = [Num[1], Num[3]]
    if min(en) - max(st) > 0:
        print(min(en) - max(st))
    else:
        print('0')
