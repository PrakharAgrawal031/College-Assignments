vars, terms, i, j, k, m, rep, count, temp = -1, -1, 0, 0, 0, 0, 0, 0, -1
var, term = [], []
lead, trail = [], []

class Grammar:
    def __init__(self, prodno, lhs, rhs):
        self.prodno = prodno
        self.lhs = lhs
        self.rhs = rhs

def get():
    global vars, terms, var, term
    print("\nLEADING AND TRAILING\n")
    vars = int(input("Enter the no. of variables : "))
    print("Enter the variables : ")
    var = list(input().split())
    terms = int(input("Enter the no. of terminals : "))
    print("Enter the terminals : ")
    term = list(input().split())
    print("\nPRODUCTION DETAILS\n")
    for i in range(vars):
        print(f"Enter the no. of production of {var[i]}:", end="")
        prodno = int(input())
        rhs = []
        for _ in range(prodno):
            print(f"{var[i]}->", end="")
            rhs.append(input())
        gram.append(Grammar(prodno, var[i], rhs))

def leading():
    global temp
    for i in range(vars):
        for j in range(gram[i].prodno):
            for k in range(terms):
                if len(gram[i].rhs[j]) > 0 and gram[i].rhs[j][0] == term[k]:
                    lead[i][k] = 1
                if len(gram[i].rhs[j]) > 1 and gram[i].rhs[j][1] == term[k]:
                    lead[i][k] = 1
    for rep in range(vars):
        for i in range(vars):
            for j in range(gram[i].prodno):
                for m in range(1, vars):
                    if gram[i].rhs[j][0] == var[m]:
                        temp = m
                        break
                for k in range(terms):
                    if lead[temp][k] == 1:
                        lead[i][k] = 1

def trailing():
    global temp
    for i in range(vars):
        for j in range(gram[i].prodno):
            count = 0
            while count < len(gram[i].rhs[j]):
                count += 1
            for k in range(terms):
                if gram[i].rhs[j][count-1] == term[k]:
                    trail[i][k] = 1
                else:
                    if gram[i].rhs[j][count-2] == term[k]:
                        trail[i][k] = 1
    for rep in range(vars):
        for i in range(vars):
            for j in range(gram[i].prodno):
                count = 0
                while count < len(gram[i].rhs[j]):
                    count += 1
                for m in range(1, vars):
                    if gram[i].rhs[j][count-1] == var[m]:
                        temp = m
                for k in range(terms):
                    if trail[temp][k] == 1:
                        trail[i][k] = 1

def display():
    global vars, terms
    for i in range(vars):
        print(f"\nLEADING({var[i]}) = ", end="")
        for j in range(terms):
            if lead[i][j] == 1:
                print(f"{term[j]},", end="")
    print()
    for i in range(vars):
        print(f"\nTRAILING({var[i]}) = ", end="")
        for j in range(terms):
            if trail[i][j] == 1:
                print(f"{term[j]},", end="")

gram = []

get()

for _ in range(vars):
    lead.append([0] * terms)
    trail.append([0] * terms)

leading()
trailing()
display()
