T = int(input()) 

while T > 0:
    n = int(input())

    if n == 1971:
        print('Joy Bangla')
    elif n % 2 != 0:
        print('Joy')
    else:
        print('Bangla')

    T -= 1