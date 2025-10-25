from ast import literal_eval

queue = []

def dfs (tree):
    if len (tree) == 1:
        print ("Deleting ", end = '')
        for item in queue:
            print (f"/{item}", end = '')
        print (f"/{tree[0]}")
        return
    else:
        queue.append (tree[0])
        for i in range (1, len (tree)):
            dfs (tree[i])
        print ("Deleting ", end = '')
        for item in queue:
            print (f"/{item}", end = '')
        print ()
        queue.pop()

inp = literal_eval (input().strip())
dfs (inp)
