// This example demonstates a goto from the true branch to the false branch...
// This is the essential subset of test2012_116.c

void foobar()
   {
     if (1)
        {
          if (2)
            {
              41;
              goto f_b;
            }
        }
       else
  f_b : {
          42;
        }

   }
