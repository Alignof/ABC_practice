from graphviz import Graph

G=Graph(format='png')
G.attr('node', shape='circle')

def make_tree(lv,ctr,parent):
    if lv==level+1: 
        return ctr

    G.edge(parent,'A'+str(ctr))
    ctr=make_tree(lv+1,ctr+1,'A'+str(ctr))
    G.edge(parent,'B'+str(ctr))
    ctr=make_tree(lv+1,ctr+1,'B'+str(ctr))
    G.edge(parent,'C'+str(ctr))
    ctr+=1

    return ctr


level=5
G.node('start')
make_tree(1,1,'start')
G.view()
