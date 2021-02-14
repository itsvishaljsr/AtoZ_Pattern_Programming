#include<bits/stdc++.h>

using namespace std;

class anyname
{
private:
    int i, j, k, l, count, c , c1, c2, c3 , c4 , c5 , c6 , a;
    
public:

     anyname()
     {
         count = 6, c = 1, c1 = 10; c2 = 1; c3 = 10, c4 = 11, c5 = 0, c6 = 8, a = 0;
     }
     
     void line() //create a line
     {
         for(k=0; k<=2; k++)
         {
             cout<<"*";
         }
     }
     
     void gap() //create space
     {
         for( k = 0; k<=2; k++)
         {
             cout<<" ";
         }
     }
     
     void crosstr(int i) //cross triangle top (right)
     {
         for( j = 10; j>=i; j--)
         {
             cout<<" ";
         }
     }
     
     void crosstl(int i) //same top triangle (left)
     {
         for(j = 10; j>=i; j--)
         {
             cout<<" ";
         }
     }
     
     void crossbr(int i) //cross tiangle bottom (right)
     {
         for(l=1; l<=i; l++)
         {
             cout<<" ";
         }
     }
     
     void crossbl(int i) //same bottom tirangle (left)
     {
         for( j=1; j<=i; j++)
         {
             cout<<" ";
         }
     }
     void mida(int i) //middle part of A
     {
         for ( l = 1; l<=i; l++)
         {
             if ( i>4 && i<7)
             {
                 cout<<"**";
             }
             else
             {
                 cout<<"  ";
             }
         }
     }
     
     void midb(int i) //creates B
     {
         for ( l = 1; l<=5; l++)
         {
             
             //middle body of B
             if ( (i>=0 && i<2) || (i>4 && i<7) || (i>9 && i<=11) )
             {
                 cout<<"**";
             }
             else
             {
               cout<<"  "; //two space   
             }
         }
         
         for( k = 0; k<=2; k++)
         {
             //copy the if else of above loop
              if ( (i>=0 && i<2) || (i>4 && i<7) || (i>9 && i<=11) )
             {
                 cout<<" "; //one spave
             }
             else
             {
               cout<<"*";    
             }
         }
     }
     
     void midc(int i) //middle part of C
     {
         for (l =1; l<=5; l++)
         {
             if( (i>=0 && i<2) || (i>9 && i<=11) )
             {
                 cout<<"**";
             }
             else
             {
                 cout<<"   ";
             }
         }
     }
     
     void midh(int i) //middle part of H
     {
         for(l = 1; l<=5;l++)
         {
             if (i>4 && i<7 )
             {
                 cout<<"**";
             }
             else
             {
                 cout<<"  ";
             }
         }
     }
     
     void mide(int i) //middle part of E
     {
         for (l = 1; l<=5; l++)
         {
             if ( (i>=0 && i<2) || (i>4 && i<7) || (i>9 && i<=11) )
             {
                cout<<"**";
             }
             else
             {
                 cout<<"  ";
             }
         }
     }
     
     void midd(int i) //create D
     {
         for (l=1; l<=5; l++)
         {
             if ( (i>=0 && i<2) || (i>9 && i<=11) || l==5)
             {
                 cout<<"**";
             }  
             else
             {
                 cout<<"  "; //two space
             }
         }
         
         for(k=0; k<2; k++)
         {
             if ( (i>=0 &&i<2) || (i>9 && i<=11) ) //copy & paste
             {
                 cout<<" ";
             }
             else
             {
                 cout<<"*";
             }
         }
     }
     
     void midf(int i) //middle part of F
     {
         for( l=1; l<=5; l++)
         {
             if ( (i>=0 && i<2) || (i>4 && i<7) )
             {
                 cout<<"**";
             }
             else
             {
                 cout<<"  ";
             }
         }
     }
     
     void midg(int i) //middle part of G
     {
         for(l=1; l<=5; l++)
         {
             if ( (i>=0 && i<2) || (i>4 && i<7 && l>=3 && l<=5) || (i>=6 && i<=9 && l==5) || (i>9 && i<=11))
             {
                 cout<<"**";
             }
             else
             {
                 cout<<"  ";
             }
         }
     }
     
     void spi(int i) //create I
     {
         for( l = 0; l<=6; l++)
         {
             if ( (i>=0 && i<2) || (i>=2 && i<=9 && l==3) || (i>9 && i<=11) )
             {
                   cout<<"***";
             }
             else
             {
                 cout<<"   ";
             }
         }
     }
 void spj(int i) // create J
 {
     for( l = 0; l<=6; l++)
     {
         if ( (i>=0 && i<2) || (i>=2 && i<=9 && l==3) || (i>=7 && i<=9 && l==0) || (i>9 && i<=11 && l<=3) )
         {
              cout<<"***";
         }
         else
         {
              cout<<"   ";
         }
     }
 }

 void midk(int i)  //middle part of k
 {
      for( l = 0; l<=6; l++)
      {
          if (l==count)
          {
               cout<<"***";
          }
          else
          {
              cout<<"   ";
          }
      }
      
      if(i<=5)
      {
           count--;
      }
      else if(i<=11)
      {
          count++;
      }
 }
     
     void midl(int i)  //middle part of L
     {
         for( l = 1; l<=5; l++)
         {
             if(i>9 && i<=11)
             {
                 cout<<"**";
             }
             else
             {
                 cout<<"  ";
             }
         }
     }
     
     void midv(int i) //middle part of V
     {
         for(j = 10;  j>=i; j--)
         {
             cout<<"  ";
         }
     }
     
     void mido(int i) //middle part of O
     {
         for(k=0; k<=2; k++)
         {
             if( (i==0 && k<0) || (i==1 && k<0) || (i==10 && k<0) )
             {
                 cout<<"  ";
             }
             else
             {
                 cout<<"*";
             }
         }
         
         for(l=1; l<=6; l++)
         {
             if ( (i>=0 && i<2) || (i>9 &&11) )
             {
                 cout<<"**";
             }
             else
             {
                 cout<<"  "; //two space
             }
         }
         
         for(k=0; k<=2; k++)
         {
             if( (i=0 && k>0) || (i==1 && k>1) || (i==11 && k>0) || (i==10 && k>1) )
             {
                 cout<<"  ";
             }
             else
             {
                cout<<"*";   
             }
         }
     }
    
    void midp(int i) //middle part of P
    {
        for(l=1; l<=5; l++)
        {
            if ( (i>=0 && i<2) || (i>4 && i<7) || (i>=2 && i<=4 && l==5) )
            {
                cout<<"**";
            }
            else
            {
                cout<<"  ";
            }
        }
    }
    
    void spq(int i) //creates Q
    {
        for( l=0; l<=11; l++)
        {
            if ( (i>=0 && i<2 && l<9) || (i>=2 && i<9 && l==0) || (l==8 && i<10) || (i>7 && i<=9 && l<9) || (i>=9 && i<=11 && l==i) )
            {
                cout<<"**";
            }
            else
            {
                cout<<"  "; //two spaces
            }
        }
    }
    
  void midr(int i) //middle part of R
  {
      for(l=1; l<=5; l++)
      {
          if ( (i>=0 && i<2) || (i>4 && i<7) || (i>=2 && i<=4 && l==5) || (i>=7 && i<=11 && l==c4) )
          {
              cout<<"**";
          }
          else
          {
              cout<<"  ";
          }
      }
      
      if(i>6)
      {
          c4++;
      }
      else if(c4>5)
      {
          c4=1;
      }
  }
  
  void sps(int i)   //creates S
  {
      for(l=1; l<=8; l++)
      {
          if ( (i>=0 && i<2) || (i>4 && i<7) || (i>=2 && i<=4 && l==1) || (i>6 && i<=9 && l==8) || (i>9 && i<=11) )
          {
              cout<<"**";
          }  
          else
          {
              cout<<"  ";
          }
    }
  }
  
  void spt(int i) // creates T
  {
      for(l=0; l<=6; l++)
      {
          if( (i>=0 && i<2) || (i>=2 && i<=11 && l==3) )
          {
              cout<<"***";
          }
          else
          {
              cout<<"   ";
          }
      }
  }
  
  void midu(int i) // middle part of U
  {
      for(l=1; l<=6; l++)
      {
          if(i>9 && i<=11)
          {
              cout<<"**";
          }
          else
          {
              cout<<"  ";
          }
      }
  }
  
  void midw(int i) //middle part of W
  {
      for(j=1; j<=i; j++)
      {
          cout<<"  ";
      }
  }
  
  void spx(int i) //creates X
  {
    for( l = 0; l<=11; l++)
    {    
      if(l==c || l==c1 )
      {
          cout<<"***";
      }
      else
      {
          cout<<"   ";
      }
    } 
      if(i<=4)
      {
          c++;
          c1--;
      }
      else if(i<=11)
      {
          c1++ ;
          c-- ;
      }
     
  }
  
  void spy(int i)  //creates Y
  {
      for(l=0; l<=11; l++)
      {
          if (l==c2 || (l==c3 && i<5) )
          {
              cout<<"***";
          }
          else
          {
              cout<<"  ";
          }
      }
      if(i<=4)
      {
          c2++;
          c3--;
      }
      else if(i<=11)
      {
          c3++;
      }
      if(i>=5)
      {
          cout<<"  ";
      }
  }
  
  void spz(int i) //creates Z
  {
      for(l=0; l<=11; l++)
      {
          if( (i>=0 && i<2) || (i>9 && i<=11) || (i>=2 && i<=9 && l==c4) )
          {
              cout<<"**";
          }
          else
          {
              cout<<"   ";
          }
      }
      c4 = c4 - 1;
  }
  
};

int main()
{
    string aa;
    cout<<"Enter Name[In Lower Case]:";
    getline(cin, aa);
    
   char cc[aa.length()];
   
    int length_cc = aa.length();
   
  for( int i = 0; i<length_cc ; i++)
  {
      cc[i] = aa[i];
  } 
  
  cout<<"\n";
  
  anyname n1;
  
 
  
   for ( int i = 0; i<=11; i++)
   {
       for(int a=0; a<length_cc; a++)
       {
           if(cc[a] == 'a')
           {
               n1.crosstr(i); n1.line(); n1.mida(i); n1.line(); n1.crosstl(i); n1.gap();
           }
           else if( cc[a] =='b')
           {
               n1.line(); n1.midb(i); n1.gap();
           }
           else if( cc[a] == 'c' )
           {
               n1.line(); n1.midc(i); n1.gap();
           }
           else if( cc[a] == 'd' )
           {
               n1.line(); n1.midd(i); n1.gap();
           }
           else if( cc[a] == 'e' )
           {
               n1.line(); n1.mide(i); n1.gap();
           }
           else if( cc[a] == 'f' )
           {
               n1.line(); n1.midf(i); n1.gap();
           }
           else if( cc[a] == 'g' )
           {
               n1.line(); n1.midg(i); n1.gap();
           }
           else if( cc[a]== 'h')
           {
               n1.line(); n1.midh(i); n1.line(); n1.gap();
           }
           else if( cc[a] == 'i' )
           {
               n1.spi(i); n1.gap();
           }
           else if( cc[a] == 'j' )
           {
               n1.spj(i); n1.gap();
           }
           else if(cc[a] == 'k' )
           {
               n1.line(); n1.midk(i); n1.gap();
           }
           else if( cc[a] == 'l' )
           {
               n1.line(); n1.midl(i); n1.gap();
           }
           
           else if(cc[a] == 'm' )
           {
               n1.line(); n1.crossbr(i); n1.line(); n1.midv(i); n1.line(); n1.crossbl(i); n1.line(); n1.gap();
           }
           else if(cc[a] == 'n' )
           {
               n1.line(); n1.crossbr(i); n1.line(); n1.crosstl(i); n1.line(); n1.gap();
           }
           else if( cc[a] == 'o' )
           {
               n1.mido(i); n1.gap();
           }
           else if(cc[a] == 'p' )
           {
               n1.line(); n1.midp(i); n1.gap();
           }
           else if(cc[a] == 'q' )
           {
               n1.spq(i); n1.gap();
           }
           else if( cc[a] == 'r' )
           {
               n1.line(); n1.midr(i); n1.gap();
           }
           else if( cc[a] == 's' )
           {
               n1.sps(i); n1.gap();
           }
           else if ( cc[a] == 't' )
           {
               n1.spt(i); n1.gap();
           }
           else if ( cc[a] == 'u' )
           {
               n1.line(); n1.midu(i); n1.line(); n1.gap();
           }
           else if ( cc[a] == 'v' )
           {
               n1.crossbr(i); n1.line(); n1.midv(i); n1.line(); n1.crossbl(i); n1.gap();
           }
           else if ( cc[a] == 'w' )
           {
               n1.line(); n1.crosstr(i); n1.line(); n1.midw(i); n1.line(); n1.crosstl(i); n1.line(); n1.gap();
           }
           else if( cc[a] == 'x' )
           {
               n1.spx(i); n1.gap();
           }
           else if( cc[a] == 'y' )
           {
               n1.spy(i); n1.gap();
           }
           else if( cc[a] == 'z' )
           {
               n1.spz(i);  n1.gap();
           }
           else if ( cc[a] == ' ' )
           {
               n1.gap(); n1.gap();
           }
       }
       cout<<"\n";
   }

  
    return 0;
}