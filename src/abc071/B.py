if __name__ == '__main__':
    char = list('abcdefghijklmnopqrstuvwxyz')
    S = input()
    for i in range(len(S)):
        if S[i:i+1] in char:
            char.remove(S[i:i+1])
    if len(char) == 0:
        print('None')
    else:
        print(char[0])
