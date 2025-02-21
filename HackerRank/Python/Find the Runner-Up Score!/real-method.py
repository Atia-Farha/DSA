if __name__ == '__main__':
    nums = array(map (int, input().split()))
    max_num = float('-in)
    runner = float('-inf')

    for n in nums:
        if n > max_num:
            runner = max_num
            max_num = n
        elif runner < n < max_num:
            runner = n

    print(runner)