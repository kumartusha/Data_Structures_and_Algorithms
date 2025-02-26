# 🔥 20 Pandas Tasks
# 1️⃣ Load a CSV file into a Pandas DataFrame.
# 2️⃣ Display the first 10 rows of a DataFrame using .head(10).
# 3️⃣ Display the column names of a DataFrame.
# 4️⃣ Check for missing values in the DataFrame.
# 5️⃣ Fill missing values with the column mean.
# 6️⃣ Drop rows containing missing values.
# 7️⃣ Convert a column's data type (e.g., object → int).
# 8️⃣ Rename a column in the DataFrame.
# 9️⃣ Sort a DataFrame by multiple columns.
# 🔟 Filter rows based on a condition (e.g., df[df["age"] > 30]).
# 1️⃣1️⃣ Select only specific columns from a DataFrame.
# 1️⃣2️⃣ Group data by a categorical column and calculate the mean.
# 1️⃣3️⃣ Create a new column using values from existing columns.
# 1️⃣4️⃣ Drop duplicate rows from a DataFrame.
# 1️⃣5️⃣ Apply a custom function to a column using .apply().
# 1️⃣6️⃣ Merge two DataFrames on a common column.
# 1️⃣7️⃣ Pivot a DataFrame using .pivot_table().
# 1️⃣8️⃣ Convert a categorical column to dummy variables using pd.get_dummies().
# 1️⃣9️⃣ Save a DataFrame to a CSV file.
# 2️⃣0️⃣ Perform time series analysis using pd.to_datetime().

# 🔥 NumPy Tasks
# 1️⃣ Create a 1D, 2D, and 3D array using np.array().
# 2️⃣ Generate an array of zeros, ones, and random numbers.
# 3️⃣ Reshape an array into a different shape.
# 4️⃣ Find the mean, median, and standard deviation of an array.
# 5️⃣ Perform element-wise addition, subtraction, multiplication, and division.

# 🔥 Matplotlib Tasks
# 1️⃣ Create a simple line plot.
# 2️⃣ Add labels, a title, and a legend to a plot.
# 3️⃣ Create a scatter plot with customized markers.
# 4️⃣ Plot a histogram of a animals.
# 5️⃣ Customize figure size and style.

# 🔥 Seaborn Tasks
# 1️⃣ Create a heatmap from a correlation matrix.
# 2️⃣ Make a box plot to visualize outliers.
# 3️⃣ Create a pair plot of a dataset.
# 4️⃣ Use a bar plot to compare categorical data.
# 5️⃣ Customize a seaborn color palette.


import pandas as pd

dataset = pd.DataFrame(
    {
        "Student_id": [101, 53, 128, 3],
        "name": ["Ulysses", "william", "henry", "henry"],
        "age": [13, 10, 6, 11],
    }
)
# print(dataset[dataset["Student_id"] == 101].iloc[:, 1:3])
# dataset.rename(
#     columns={"Student_id": "students_id", "name": "full_name", "age": "my_age"},
#     inplace=True,
# )
# print(dataset)
# print(animals[animals["age"] > 10]["name"].sort_values(ascending=False))
