tab = [3, 28, 1, 34, 15]

print(f"before: ")
for i in tab:
    print(i)

n = len(tab)

def bubbleSort(tab):  
    for i in range(n):
        for j in range(0, n - i - 1):
            if tab[j] > tab[j + 1]:  
                temp = tab[j]
                tab[j] = tab[j + 1]
                tab[j + 1] = temp


bubbleSort(tab)  

print(f"after: ")
for i in tab:
    print(i)
