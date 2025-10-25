def pun (sentences: list, queries: list) -> None:
    for k in queries:
        a = k[0]
        b = k[1]
        len_of_sen = len (sentences)
        if a < len_of_sen:
            for i in range (a, len_of_sen):
                j = min (b, len (sentences[i]) - 1)
                if (i < len_of_sen - 1):
                    print (sentences[i][j], end=' ')
                else:
                    print (sentences[i][j])
        else:
            print()


(line, query) = map (int, input().split())
sentences = []
queries = []
for i in range (line):
    sentences.append (input().split())
for i in range (query):
    queries.append (list(map (int, input().split())))
pun (sentences, queries)
