def max_heapify(A,parent,heapsize):
        left = 2*parent+1
        right = 2*parent+2
        largest = parent #���赱ǰ����Ϊ���ڵ�
        if left<heapsize and A[left]>A[largest]: #�Ⱥ���߱Ƚ�
                largest = left  
        if right<heapsize and A[right]>A[largest]: #Ȼ����ұ߱Ƚ�
                largest = right
        if largest != parent: #˵����ǰ�ڵ㲻�����ģ�����
                A[parent],A[largest] = A[largest],A[parent] #���ĺ͸��ڵ㽻��
                max_heapify(A,largest,heapsize) #����׷�����Ƶĵ�
        


def buildHeap(A):
        heapsize = len(A)
        for i in range(heapsize//2-1,-1,-1):
                max_heapify(A,i,heapsize)

def HeapSort(A):
        heapsize = len(A)
        buildHeap(A)
        for i in range(len(A)-1,0,-1):
                print A
                A[0],A[i] = A[i],A[0]
                heapsize -= 1
         return       max_heapify(A,0,heapsize)

a = [16,4,10,14,7,9,3,2,8,1]
HeapSort(a)
print a