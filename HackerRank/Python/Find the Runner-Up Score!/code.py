if __name__ == '__main__':
    n = int(input())
    a = sorted(set (map (int, input().split())))
    print(a[-2])