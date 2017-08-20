if __name__ == '__main__':
    X, A, B = [int(i) for i in input().split()]
    if abs(X - A) < abs(X - B):
        print('A')
    else:
        print('B')
