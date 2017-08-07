if __name__ == '__main__':
    S = input()
    STR = S[0:1] + str(len(S) - 2) + S[-1:]
    print(STR)
