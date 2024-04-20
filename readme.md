### Txt to csv converter

>NOTE: just an outline, not final version.

Place data.txt file along the .exe to divide it to separate .csv files.

File should contain a text with a comma between the column names:

```
1,23
1,34
1,45
2,56
2,67
3,78
3,89
3,90
```

Lines could not be sorted, it doesn't matter.

Output will be `1.csv`, `2.csv` & `3.csv` (by the first column) and contain:

1.csv

```
1,23
1,34
1,45
```

2.csv

```
2,56
2,67
```

3.csv

```
3,78
3,89
3,90
```
