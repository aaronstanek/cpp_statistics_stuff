infile = open("table.txt","rb")
d = infile.read()
infile.close()

i = 0
g = []

for v in range(len(d)):
    if d[v]>=46 and d[v]<=57:
        g.append(d[v])
    elif len(g)!=0:
        r = bytes(g).decode("UTF-8")
        print("table["+str(i)+"] = "+r+";")
        del(r)
        g = []
        i += 1
