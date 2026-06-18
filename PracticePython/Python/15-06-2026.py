# Find the duplicate from the list.

def find_duplicate(list1):
    freq = {}
    
    for i in range(len(list1)):
        if list1[i] in freq:
            freq[list1[i]] += 1
        else:
            freq[list1[i]] = 1
            
    # Now traverse the dictionary.
    for key, value in freq.items():
        if value > 1:
            print(key)

if __name__ == "__main__":
    list1 = [1, 2, 2, 3, 3, 3, 4, 4, 5]
    result = find_duplicate(list1)
