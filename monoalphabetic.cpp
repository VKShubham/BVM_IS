#include<iostream>

using namespace std;

int main()
{
   char a[26],b[26],key[100];
   char ch='a',ch1='a';
   int size,j=0,flag=0;
   for (int i=0;i<26;i++)
   {
        a[i]=ch;
        ch++;
   }
   cout<<"\nEnter The Size Of a Key : ";
   cin>>size;
   cout<<"\nEnter The Key : \n";
   for (int i=0;i<size;i++)
   {
       cout<<"Enter The "<<i+1<<" Charater : ";
       cin>>key[i];
   }
   /*
    for (int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;i++)
        {
            if(key[i]==key[j])
            {
                key[i]='/0';
            }
        }
    } */
    for(int i=0;i<26;i++)
    {
        b[i]=key[j];
        if(j<size)
        {
            j++;
        }
        else
        {
            flag=1;
        }

        if(flag==1)
        {
            for (int k=0;k<26;k++)
            {
                for (int d=0;d<size;d++)
                {
                    if(key[d]!=ch1)
                    {
                        b[i]=ch1;
                    }
                    else
                    {
                            i--;
                            break;
                    }
                }
                ch1++;
                i++;
            }
        }
    }

    int choice;
    while (choice!=3)
    {
        cout<<"\n\n 1) Convert PlainText Into Cipher text";
        cout<<"\n 2) Convert CipherText Into Plain text";
        cout<<"\n 3) EXIT";
        cout<<"\n\nEnter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                    cout<<"\n\nEnter Size of The Plain Text : ";
                    int psize;
                    cin>>psize;
                    char plain1[psize];
                    for(int i=0;i<psize;i++)
                    {
                        cout<<"Enter The "<<i+1<<" Charater : ";
                        cin>>plain1[i];
                    }
                    for(int i=0;i<psize;i++)
                    {

                    }
                    break;

            case 2:
                    break;
        }
    }

}
