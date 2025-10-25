from ast import literal_eval

def gen (tree: tuple):
    yield tree[0]
    for item in tree[1]:
        yield from gen (item)


genVar = gen (literal_eval (input()))
while True:
    try:
        print (next (genVar))
    except StopIteration:
        break
