input_csv = []
indices_col = []
is_first = True

while True:
    try:
        tmp = input()
        if tmp.strip() == '':
            continue
        if is_first:
            indices_col = list(map(int, tmp.split()))
            is_first = False
        else:
            input_csv.append (tmp.split(','))
    except EOFError:
        break;

for cur_row in input_csv:
    for i in indices_col:
        if i != indices_col[-1]:
            print (cur_row[i], end=',')
        else:
            print (cur_row[i])

