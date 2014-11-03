#include<iostream>
#include<conio.h>
using namespace std;

class RangeQue
{
    int queue1[500],rear,front;

    public:
            RangeQue()
            {
                rear = front = -1;
            }
            void add_nr (int n)
            {
                if(rear>500)
                {
                    cout<<"queue1 is FULL";
                    front = rear = -1;
                }
                queue1[++rear]=n;
                cout<<"Successfully inserted: "<<n;
            };
            void pop_nr()
            {
                if (front==rear)
                {
                        cout<<"The queue1 is empty";
                        return;
                }
                cout<<"Successfully deleted: "<<queue1[++front];
            };
            void print()
            {
                if(front==rear)
                  {
                        cout<<"The queue1 is empty";
                        return;
                  }
                  for (int i=front+1;i<=rear;i++)
                    cout<<queue1[i]<<" ";

            };
};

int main()
{
    int x;
    RangeQue qu;
    while(1)
    {
        cout<<"\n Press 1 to ADD NUMBER \n Press 2 to DELETE NUMBER \n Press 3 to SUM BETWEEN a & b \n Press 4 to MAX SUM \n Press 5 to print \n Press 6 to exit \n";
        cin>>x;

        switch(x)
        {
            case 1:cout<<"Enter the element to ADD: ";
                 cin>>x;
                 qu.add_nr(x);
                 break;
            case 2:qu.pop_nr();
                 break;

            case 3:  //de implementat suma

                 break;
            case 4: //de implementat maximul sumei dintre 2 elem. consecutive

                 break;
            case 5:qu.print();
                 break;
            case 6:
                 {
                 cout << "Goodbye.\n";
                 return 0;
                 }



        }

    }
return (0);
}
