/* Implementation of a simple hash system with simple modulo
   hash function- h(key) = key % 5. When a collision is
   occured, a simple linear probing is used to resolve it.
   By Dr. Udaya Raj Dhungana */
   
   #include <stdio.h>

   //hash table
   int hash_Table[5];
   
   /*this is used to see whether a slot is
     already occupied or not
     if col_flag[i] = 0 -> empty slot
     if col_flag[i] = 1 -> empty slot */
   int col_flag[5] = {0,0,0,0,0};
   
   /*this function computes the hash value
     for input item "key" and returns a
     hash value (i.e. index value) */
   int hash_function(int key)
    {
      return key%5;
   }
   
   // collision resolution using linear probing
   int linear_probing(int hv)
    {
       int i;
       for(i = hv+1; i<5 && i!=hv; i=(i+1)%5)
        {
           if(col_flag[i] == 0)
            {
               return i;
           }
       }
       return -1;
   }
   
   // this funtion insert the item "key"
   // into the hash table hash_Table[5]
   void insert(int key)
    {
      int hv = hash_function(key);
       int new_hv;
      if(col_flag[hv]==0)
       {
         hash_Table[hv] = key;
         col_flag[hv] = 1;
      }
      else
      {
         printf("Collision occured at %d! ", hv);
         new_hv = linear_probing(hv);
         //printf("new hv = %d", new_hv);
         if(new_hv != -1) {
             hash_Table[new_hv] = key;
             col_flag[new_hv] = 1;
             printf("Then %d is placed at new slot %d using linear probing.\n", key, new_hv);
         }
         else
          {
             printf("Collision cannot be resolved.\n");
         }
         
      }
   }
   
   void search(int key)
    {
      int hv = hash_function(key);
      int i;
      bool found_flag = false;
      if (hash_Table[hv]==key)
         printf("%d is found at %d.\n", key, hv );

      else
       {
          for(i=hv+1; i<5 && i!=hv; i=(i+1)%5)
           {
              if(hash_Table[i]==key)
               {

      else {
          for(i=hv+1; i<5 && i!=hv; i=(i+1)%5)
             {
              if(hash_Table[i]==key)
              {

                  printf("%d is found at %d.\n", key, i);
                  found_flag = true;
              }
          }
          if(found_flag == false)

           {

          {

              printf("%d is not found!\n", key);
          }
      }
   }
   
   void print_ht()
{
       int i;
       printf("\n Hash Value\t Key\n");
       for(i=0;i<5;i++)

        {
          if(col_flag[i] == 1)

          {
          if(col_flag[i] == 1)
          {

              printf(" %d \t\t %d", i, hash_Table[i]);
               printf("\n");
          }
       }
   }
   
   int main()
   {
   
      insert(11);
      insert(12);
      insert(22);
      insert(13);
      insert(32);
      
      search(32);
      search(44);
      
      print_ht();
   
return(0);
   }
