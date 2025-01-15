 max(maxSize, end - start + 1);
        }

        //  mark the entry for this iteration..(Need to update).
        myMap[currSum] = i;
    }
    if (maxSize == INT_MIN)
    {
        cout << 0;
    }
    cout << maxSize;