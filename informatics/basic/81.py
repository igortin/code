with open('input.txt','r') as file:
        print(len(set(file.readline().split()) & set(file.readline().split())))