if __name__ == '__main__':
    STR = input()
    ans = ''
    for i in range(0, STR.__len__(), 2):
        ans += STR[i:i+1]
    print(ans)
