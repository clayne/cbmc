int main()
{
  int i = 0;
  do
  {
    i++;
  } while(i < 10)
    // clang-format off
   __CPROVER_assigns(i)
   __CPROVER_loop_invariant(0 <= i && i <= 10)
   __CPROVER_decreases(20 - i)
    // clang-format on
    ;
}
