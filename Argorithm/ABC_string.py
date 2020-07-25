def node_num(lv):
    if lv<=0:
        return 1
    else:
        return (pow(2,lv+1)-1)+(pow(2,lv)-1)

def target(ctr):
    return s <= ctr and ctr <= t

def solve(lv,ctr):
    if lv==level+1: return ctr
    if ctr>t:
        print()
        exit()

    nodesum=node_num(level-lv)

    if target(ctr):
        print("A",end="")
    if ctr+nodesum<=s:
        ctr+=nodesum
    else:
        ctr=solve(lv+1,ctr+1)

    if target(ctr):
        print("B",end="")
    if ctr+nodesum<=s:
        ctr+=nodesum
    else:
        ctr=solve(lv+1,ctr+1)

    if target(ctr):
        print("C",end="")
        ctr+=1

    return ctr

level,s,t=map(int,input().split(' '))
solve(1,1)
print()

