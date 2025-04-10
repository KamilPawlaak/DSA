#bubble_sort

def bubbleSort(tab):  
    for i in range(n):
        for j in range(0, n - i - 1):
            if tab[j] > tab[j + 1]:  
                temp = tab[j]
                tab[j] = tab[j + 1]
                tab[j + 1] = temp


def addNumbers(tab,n):
    for i in range(n):
        print(f"give me the numbers")
        number = int(input(f"number{i}: "))
        tab.append(number)


n = 5
tab = [n]


addNumbers(tab,n)
print(f"before: \n{tab}")
bubbleSort(tab)  
print(f"after: \n{tab}")

