!�ֵ�����֪���е�ȫ����

program main
  integer::i,j,k,temp
  integer,parameter::n=5
  integer::a(n),b(n),c(n),d(n),e(n),p(n)
  logical::ma,mb,mc,md,me
  real::t1,t2

  call cpu_time(t1)
  k=1
  p = (/(i,i=1,n)/)
  a = p
  ma=.true.
  do while(ma)
     write(*,*) a
     ma = .false.
     call next(n,a,ma)
  enddo
  call cpu_time(t2)
  write(*,*) t2-t1,k
end program main

subroutine next(n,a,m)
  integer::i,j,k,n
  integer::a(n),b(n)
  logical::m

  do i = n-1,1,-1
     if (a(i) < a(i+1)) then !����������ҵ�һ����߱��ұߴ����
        m = .true. !���������������i��m����ΪF,�������
        exit
     endif
  enddo

  do j = n,i+1,-1
     if (a(i) <= a(j)) exit !����������ұ��ҵ���a(i)�����
  enddo
  temp = a(i)
  a(i) = a(j)
  a(j) = temp !����a(i),a(j)

  b=a
  do k = i+1,n
     a(k) = b(n+i+1-k) !��a(i+1:n)��ת
  enddo
end subroutine next