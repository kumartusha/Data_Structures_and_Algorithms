# Here we need to find the floor of the element that we have given.




if __name__ == "__main__":
    array = [1, 2, 8, 10, 10, 12, 19]
    floor = 20

    last = len(array) - 1


    for i in range(last, -1, -1):
        if floor >= array[i]:
            print("The floor element is:- ", i)
            break