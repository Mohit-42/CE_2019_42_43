#pragma once
#include<bits/stdc++.h>
#include<iostream>
#include"AbstactBST.h"
using namespace std;



class Bst:public BST
    {
        private:
            int tree[15];
            int root=0;

        public:
            Bst()
            {
                //Empty positions are denoted by zero
                for(int i=0;i<15;i++)
                {
                    tree[i]=0;
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
                    if(tree[i]!=0)
                    {
                        return false;
                    }
                }
                return true;

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
            void addBST( int data)

                {
                    int temp=0;
                    while(tree[temp]!=0)
                    {
                        if (data< tree[temp] )
                        {
                            temp=left(temp);
                        }
                        else
                        {
                            temp=right(temp);
                        }
                    }
                    tree[temp]=data;

                }
            void removeBST( int key)
            {

                if(searchBST(key))
                {
                    int temp=0;
                    while(tree[temp]!=key)
                    {
                        if (key<tree[temp])
                        {
                            temp=left(temp);
                        }
                        else
                        {
                            temp=right(temp);
                        }
                    }
                    //for no child
                     if(left(temp)>14&&right(temp)>14&&tree[temp]==key)
                        {tree[temp]=-1;}
                     else if(tree[left(temp)]==0 && tree[right(temp)]==0)
                        {tree[temp]=0;}

                    //for one child
                    else if(tree[left(temp)]==0||tree[right(temp)]==0)
                    {
                        if(tree[left(temp)]==0)
                        {
                            tree[temp]=tree[right(temp)];
                            tree[right(temp)]=tree[right(right(temp))];
                            tree[right(right(temp))]=0;
                            tree[left(temp)]=tree[left(right(temp))];
                            tree[left(right(temp))]=0;


                        }
                        else
                        {
                            tree[temp]=tree[left(temp)];
                            tree[right(temp)]=tree[right(left(temp))];
                            tree[right(left(temp))]=0;
                            tree[left(temp)]=tree[left(left(temp))];
                            tree[left(left(temp))]=0;
                        }

                    }
                    //for both child
                    else
                    {
                            int a;
                            int b =tree[left(temp)];
                            for(int i=left(temp);i<15 ; i=right(i))
                            {
                                if (b<tree[i])
                                {
                                    a=i;
                                    b=tree[i];

                                }
                            }
                            tree[temp]= b;
                            if(a==0){
                                tree[left(temp)]=0;
                            }
                            else{
                            tree[a]=0;}
                    }


                }
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


