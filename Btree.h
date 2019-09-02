#include<iostream>

using namespace std;

class Vertex{
private:
	int data;
	Vertex* Right=NULL;
	Vertex* Left=NULL;

public:

	int getData(){
		return data;
	}


	Vertex* getRight(){
		return Right;
	}

	Vertex* getLeft(){
		return Left;
	}
	


	void setData(int Data){
		data = Data;
	}

	void setRight(Vertex* R){
		Right = R;
	}

	void setLeft(Vertex* L){
		Left = L;
	}

	


};

class Btree{

private:
	Vertex* root;
	
	Vertex* treverse(int data,Vertex* V,bool k=false){
		
		if(k==true){
			
			return V;
		
		}
		
		else{
				
			if(V->getData()>data){
					
					if(V->getLeft()==NULL){
							treverse(data,V,true);
						}
				
					else{
							treverse(data,V,false);
						}
				
				}
			else if(V->getData()<data){
					if(V->getRight()==NULL){
							treverse(data,V,true);
						}
				
					else{
						treverse(data,V,false);
						}
				
				}
			
			
			
			
			}
		
		
		}
public:

	 
		
		





	Btree(){
		root = NULL;
	}

	void Insert(int data){
		Vertex* temp;
		if (root == NULL){
			root = new Vertex;
			root->setData(data);
			root->setRight(NULL);
			root->setLeft(NULL);
			return;
		}
		else{
			
			if(root->getData()<data && root->getLeft()==NULL){
					if(root->getLeft()==NULL){
						temp=new Vertex;
						temp->setData(data);
						temp->setLeft(NULL);
						temp->setRight(NULL);
						root->setLeft(temp);
						return;
						}
				
				
				}
				else if(root->getData()>data  && root->getRight()==NULL){
						temp=new Vertex;
						temp->setData(data);
						temp->setLeft(NULL);
						temp->setRight(NULL);
						root->setRight(temp);
						return;
					}
				
			
			Vertex* temp1=treverse(data,temp);
			
			if(temp1->getData()<data){
					Vertex* ver =new Vertex;
					ver->setData(data);
					ver->setLeft(NULL);
					ver->setRight(NULL);
					temp1->setLeft(ver);
					return;
				}
			else if(temp1->getData()>data){
					Vertex* ver =new Vertex;
					ver->setData(data);
					ver->setLeft(NULL);
					ver->setRight(NULL);
					temp1->setRight(ver);
					return;
				}
			
			
		}

	}





	void search(int find){
		Vertex* temp=root;
		if(root->getData()==find){
			cout<<"Found"<<endl;
			return;
			}
			
		else if(root->getLeft()->getData()==find){
				cout<<"Found"<<endl;
				return;

			}
		
		else if(root->getRight()->getData()==find){
				cout<<"Found"<<endl;
				return;
			}
		
		else if(root->getLeft()->getData()==NULL){
				cout<<"Not Found"<<endl;
				return;
			}
		
		else if(root->getRight()->getData()==NULL){
				cout<<"Not Found"<<endl;
				return;
			}
		else{
	
			
			while(temp!=NULL){
				if(temp->getData()<find){
					temp=temp->getRight();
					
					}
				
				else if(temp->getData()>find){
						temp=temp->getLeft();
					
					}
					
				else if(temp->getData()==find){
					cout<<"FOUND"<<endl;
					return;
					
					}
				
				}
				
				
				cout<<"Not Found"<<endl;
			
			}
	
		
		
		
		}


Vertex* search(int find,bool k){
		Vertex* temp=root;
		if(root->getData()==find){
			
			return root;
			}
			
		else if(root->getLeft()->getData()==find){
				
				return root->getLeft();

			}
		
		else if(root->getRight()->getData()==find){
			
				return root->getRight();
			}
		
		else if(root->getLeft()->getData()==NULL){
				
				return NULL;
			}
		
		else if(root->getRight()->getData()==NULL){
				
				return NULL;
			}
		else{
	
			
			while(temp!=NULL){
				if(temp->getData()<find){
					temp=temp->getRight();
					
					}
				
				else if(temp->getData()>find){
						temp=temp->getLeft();
					
					}
					
				else if(temp->getData()==find){
					
					return temp;
					
					}
				
				}
				
				
				return NULL;
			
			}
	
		
		
		
		}



	void print(){
		
			Vertex* temp=root;
		if(temp!=NULL){
			cout<<"Left side"<<endl;
			while(temp!=NULL){
				cout<<temp->getData()<<endl;
				
				temp=temp->getLeft();
				
				
				}
			
		temp=root;
			cout<<"Right side"<<endl;
			while(temp!=NULL){
				cout<<temp->getData()<<endl;
				
				temp=temp->getRight();
				
				
				}
			
	
		return;

	}
	cout<<"Btree Empty"<<endl;
}


	void deleteTree(int data){
			
					Vertex* temp=search(data,true);
					Vertex* temp1;
					Vertex* temp2;
					if(temp==root){
							
							if(root->getLeft()==NULL && root->getRight()==NULL){
									root=NULL;
								}
							
							else if(root->getLeft()!=NULL && root->getRight()==NULL){
								
									temp1=root;
									root=root->getLeft();
									delete temp1;
		
								
								}
								
							else if(root->getLeft()==NULL && root->getRight()!=NULL){
								
									temp1=root;
									root=root->getRight();
									delete temp1;
								
								}
						
							
							else{
									temp1=root->getRight();
									
									while(temp1->getLeft()!=NULL){
											
											temp1=temp1->getLeft();
										
										}
								
						         root->setData(temp1->getData());
								 
								 delete temp1;
									
								
								}
						
						
						}
					
					
				
				
				
				
				
				
				}
			
		
		
		



};