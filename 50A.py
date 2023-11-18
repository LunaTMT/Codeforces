while True:
    r = 0
    try:
        row = input().split()  
        if '1' in row:
            c = row.index('1')
            print(abs(2 - r) + abs(2 - c))
    except EOFError:
        break