if __name__ == '__main__':
    nums = list(map(int, input().split()))  

    max_num = float('-inf')
    runner = float('-inf')

    for n in nums:
        if n > max_num:
            runner = max_num
            max_num = n
        elif runner < n < max_num:
            runner = n

    print(runner)