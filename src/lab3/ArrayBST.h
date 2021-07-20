#pragma once
#include<bits/stdc++.h>
#include<iostream>
using namespace std;



class Bst
    {
        private:
            int tree[15];
            int root=0;

        public:
            Bst()
            {

                for(int i=0;i<15;i++)
                {
                    tree[i]=-1;
                }

            }
            int left(int n)
            {
                return 2*n+1;
            }
            int right(int a)
            {
                return 2*a+2;
            }
            int parent(int s)
            {
                return floor((s-1)/2);
            }

            bool isEmpty()
            {
                for(int i=0;i<15;i++)
                {
                    if(tree[i]!=-1)
                    {
                        return false;
                    }
                }
                return true;

            }
            void addBST(int pr , int data)

                {
                    if (tree[pr]==-1)
                        {
                        tree[pr]= data ;

                        }
                    else if (data< tree[pr] )
                    {
                        return addBST(left(pr), data);
                    }
                    else
                    {
                         return addBST(right(pr), data);
                    }

                }
            void removeBST(int root , int key)
            {


                    if(isEmpty())
                    {
                        cout<<"Bst is Empty"<<endl;
                    }
                    else if(key < tree[root])
                    {
                        return removeBST(left(root) , key);
                    }
                    else if (key> tree[root])
                    {
                        return removeBST(right(root) , key);
                    }
                    else
                    {
                        if(left(root)>14&&right(root)>14&&tree[root]==key)
                        {tree[root]=-1;}


                        else
                        {
                            int a;
                            int b =tree[left(root)];
                            for(int i=left(root);i<15 ; i=right(i))
                            {
                                if (b<tree[i])
                                {
                                    b=tree[i];
                                    a=i;
                                }
                            }
                            tree[root]= b;
                            tree[a]=-1;


                        }


                }
            }
            bool searchBST(int targetKey)
            {
                for(int i=0;i<15;i++)
                {
                    if(targetKey==tree[i])
                    {
                        return true;
                    }
                }
                return false;
            }
            void trasverse()
            {
                cout<<endl;
                cout<<"\t\t\t\t\t\t\t"<<tree[0]<<endl<<endl;
                cout<<"\t\t\t"<<tree[1]<<"\t\t\t\t\t\t\t\t"<<tree[2]<<endl<<endl;
                cout<<"\t"<<tree[3]<<"\t\t\t"<<"\t"<<tree[4]<<"\t\t\t\t"<<tree[5]<<"\t\t\t\t"<<tree[6]<<endl<<endl;
                cout<<tree[7]<<"\t\t"<<tree[8]<<"\t\t"<<tree[9]<<"\t\t"<<tree[10]<<"\t\t"<<tree[11]<<"\t\t"<<tree[12]<<"\t\t"<<tree[13]<<"\t\t"<<tree[14]<<endl;

            }

    };


