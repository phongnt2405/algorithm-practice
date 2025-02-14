program main
  implicit none

  integer :: n, i
  integer, allocatable :: P(:), Q(:), ans(:)

  read(*, *) n

  allocate(P(n))
  allocate(Q(n))
  allocate(ans(n))

  read(*, *) (P(i), i = 1, n)
  read(*, *) (Q(i), i = 1, n)

  do i = 1, n
    ans(Q(i)) = Q(P(i))
  end do

  do i = 1, n
    write(*, '(I0, 1X)', advance='no') ans(i)
  end do 

  deallocate(P)
  deallocate(Q)
  deallocate(ans)

end program main
