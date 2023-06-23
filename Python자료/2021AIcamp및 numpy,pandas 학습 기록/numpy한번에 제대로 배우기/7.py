import numpy as np

a1 = np.array([1,2,3,4,5])
a1[0] = 4
a1[1] = 5
a1[2] = 6
a2 = np.array([[1,2,3],[4,5,6],[7,8,9]])
a3=np.array([[[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]]])
#배열 조회

#배열 속성 정보
def array_info(array):
    print(array)
    print("ndim :", array.ndim)
    print("shape :", array.shape)
    print("dtpye : ", array.dtype)
    print("size :", array.size)
    print("itemsize :", array.itemsize)
    print("nbytes :", array.nbytes)
    print("strides :", array.strides)
array_info(a1)
array_info(a2)
array_info(a3)