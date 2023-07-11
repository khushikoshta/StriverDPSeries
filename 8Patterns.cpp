//Pattern 1
    class Solution {
    public:
        void printSquare(int n) {
            // code here
            for(int row = 0; row<n; row++)
            {
                for(int col = 0; col<n; col++)
                    cout << "* ";
                    
                cout << endl;
            }
        }
    };

//Pattern 2
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int r=1; r<=n; r++)
        {
            for(int c = 1; c <=r ; c++)
                cout << "* ";
                
            cout << endl;
        }
    }
};

//Pattern 3
void printTriangle(int n) {
        // code here
        for(int r=1; r<=n; r++)
        {
            for(int col = 1; col <=r; col++)
            {
                cout << col << " ";
            }
            cout << endl;
        }
    }

//Pattern 4
void printTriangle(int n) {
        // code here
        
        for(int r=1; r<=n; r++)
        {
            for(int col = 1; col <=r; col++)
            {
                cout << r << " ";
            }
            cout << endl;
        }
    }

//Pattern 5
void printTriangle(int n) {
	    // code here
	    for( int row = 1; row <= n; row++)
	    {
	        for(int col = 1; col<=n-row+1; col++)
	            cout << "* ";
	            
	        cout << endl;
	    }
	}

//Pattern 6
void printTriangle(int n) 
	{
	    // code here
	    for( int row = 1; row <= n; row++)
	    {
	        for(int col = 1; col<=n-row+1; col++)
	            cout << col << " ";
	            
	        cout << endl;
	    }
	}

//Pattern 7         -----> revise
void printTriangle(int n) {
      
        for(int row=0; row<n; row++)
        {
            for(int col = 0; col < n-row-1; col ++)
                cout << " ";
                
            for(int col = 0; col < 2*row + 1; col ++)
                cout << "*";
                
            cout << endl;
        }
    }

//Pattern 8             ----->revise
void printTriangle(int n) {
	    // code here
	    
	    for( int row = 0; row <n; row ++)
	    {
	        for( int col = 0; col < row; col++)
	            cout << " ";
	            
	        for(int col = 0; col < 2*n - (2*row + 1); col ++)
	            cout << "*";
	            
	       cout << endl;
	    }
	}

//Pattern 9
void printDiamond(int n) {
        // code here
        for(int row=0; row<n; row++)
        {
            for(int col = 0; col < n-row-1; col ++)
                cout << " ";
                
            for(int col = 0; col <= row ; col ++)
                cout << "* ";
                
            cout << endl;
        }
        
        for( int row = 0; row <n; row ++)
	    {
	        for( int col = 0; col < row; col++)
	            cout << " ";
	            
	        for(int col = 0; col < n - row; col ++)
	            cout << "* ";
	            
	       cout << endl;
	    }   
    }

//Pattern 10
void printTriangle(int n) {
        // code here
        for(int i=0; i<n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        
        for(int i=0; i<n-1; i++)
        {
            for(int j = 0; j< n-1-i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

//Pattern 11
void printTriangle(int n) {
        
        bool print = true;
        for(int i=0; i<n; i++)
        {
            if(i%2 == 0)
                print = true;
            else
                print = false;
            
            for(int j=0; j<=i; j++)
            {
                cout << print << " ";
                print = (!print);
            }
            cout << endl;
        }
    }

//Pattern 12
void printTriangle(int n) {
        
        
        for(int i = 1; i <= n; i++)
        {
            //printing left triangle 
            for(int col = 1; col <= i; col ++)
            {
                cout << col << " ";
            }
            
            //spaces
            for(int col=1; col<= 2*(n-i); col++)
            {
                cout << " " << " ";
            }
            
            //right triangle
            for(int col = i; col>0; col -- )
            {
                cout << col << " ";
            }
            
            
            cout << endl;
        }
        
    }

//Pattern 13
void printTriangle(int n) {
        // code here
        
        int num = 1;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }

//Pattern 14
void printTriangle(int n) {
        // code here
        char ch = 'A';
        for(int i=0; i<n; i++)
        {
            
            for(char ch = 'A'; ch <= 'A' + i; ch++)
            {
                cout << ch;
            }
            
            cout << endl;
        }
    }

//Pattern 15
void printTriangle(int n) {
        // code here
        for(int i=0; i<n; i++)
        {
            for(char ch='A'; ch< 'A' + n - i; ch++)
            {
                cout << ch;
                
            }
            cout << endl;
        }
    }

//Pattern 16
void printTriangle(int n) {
        // code here
        for(int i=0; i<n; i++)
        {
            char ch = 'A' + i;
            for(int j=0; j<=i; j++)
            {
                cout << ch;
            }
            cout << endl;
            
            ch ++;
        }
    }

//Pattern 17
void printTriangle(int n) {
        for(int i=0; i<n ;i++)
        {
            //spaces
            for(int j=0; j<n-i-1; j++)
                cout << " ";
            
            //first triangle
            for(char ch= 'A'; ch <= 'A' + i; ch++)
                cout << ch;
                
            //second triangle
            for(char ch = 'A' + i - 1; ch >= 'A'; ch--)
                cout << ch;
                
            cout << endl;
        }
    }

//Pattern 18
void printTriangle(int n) {
    
        
        for(int i=0; i<n; i++)
        {
            char ch = 'A' + n - 1;
            for(int j = 0; j<=i; j++)
            {
                cout << ch << " ";
                ch --;
            }
                
            
            cout << endl;
        }
    }

//Pattern 19
void printTriangle(int n) {
        // upper part 
        
        for(int i=0; i<n; i++)
        {
            //left triangle
            for(int j = 0; j< n-i; j++)
            {
                cout << "*";
            }
            
            //spaces
            for(int j=0; j<2*i ; j++)
            {
                cout << " ";
            }
            
            //right triangle
            for(int j = 0; j< n-i; j++)
            {
                cout << "*";
            }
            
            cout << endl;
            
        }
        
        // lower part 
        for(int i=0; i<n; i++)
        {
            //left triangle
            for(int j=0; j<=i; j++)
                cout << "*";
                
            //spaces
            for(int j = 0; j< 2*(n-i-1); j++)
            {
                cout << " ";
            }
            
            //right triangle
            for(int j=0; j<=i; j++)
                cout << "*";
            
            cout << endl;
        }
    }

//Pattern 20
void printTriangle(int n) {
        //upper part
        
        for(int i=0; i<n; i++)
        {
            //left triangle
            for(int j=0; j<=i; j++)
            {
                cout << "*";
            }
            
            //spaces
            for(int j=0; j< 2*(n-i-1); j++)
            {
                cout << " ";
            }
            
            //right triangle
            for(int j=0; j<=i; j++)
            {
                cout << "*";
            }
            
            cout << endl;
        }
        
        //lower part
        for(int i=0; i<n-1; i++)
        {
            //left triangle
            for(int j=0; j< n-i-1; j++)
            {
                cout << "*";
            }
            
            //spaces
            for(int j=0; j<2*i + 2; j++)
            {
                cout << " ";
            }
            
            //right triangle
            for(int j=0; j< n-i-1; j++)
            {
                cout << "*";
            }
            
            cout << endl;
        }
    }

//Pattern 21
for(int i=0; i<n; i++)
        {
            if(i==0 || i==n-1)
            {
                for(int j=0; j<n; j++)
                    cout << "*";
                    
                cout << endl;
            }
            
            else
            {
                for(int j=0; j<n; j++)
                {
                   if (j==0 || j==n-1)
                    cout << "*";
                            
                   else
                    cout << " ";
                }
                cout << endl;
            }
            
        }

//Pattern 22      -----> revise
void printSquare(int n) {
        // code here
        
        for(int i=0 ; i<2*n -1 ; i++)
        {
            for(int j=0; j<2*n - 1; j++)
            {
                int top = i;
                int left = j;
                int right = ((2*n -1) -1) -j;
                int bottom = ((2*n - 1)-1)-i;
                
                cout << n - min(min(top,left), min(right,bottom)) << " ";
            }
            cout << endl;
        }
    }


