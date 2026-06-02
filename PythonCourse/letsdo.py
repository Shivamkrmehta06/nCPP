import numpy as np
from scipy import stats
data = np.array([12,15,18,20,22,25,30,35,40])

IQR = stats.iqr(data)
print(IQR)

data1 = np.array([1,2,3,4])
IQR1 = stats.iqr(data1)
print(IQR1)