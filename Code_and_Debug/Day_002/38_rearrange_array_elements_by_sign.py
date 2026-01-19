
def rearrange_array(nums):
    # apply the two pointer approach in this question.
    final_result = [0] * len(nums)

    positive = 0
    negative = 1

    for i in range(len(nums)):
        if nums[i] > 0:
            final_result[positive] = nums[i]
            positive += 2
        else:
            final_result[negative] = nums[i]
            negative += 2
    
    return final_result

if __name__ == "__main__":
    array = [3,1,-2,-5,2,-4]

    # we need to rearrange the array in such a way that positive and negative numbers are alternatively placed
    print(rearrange_array(array))