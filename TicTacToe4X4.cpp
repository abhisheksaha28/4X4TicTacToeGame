#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;
main()
{

 
		char ch;
		do{
			system("CLS");
			int i=0;
	string arr[4][4]={{"1","2","3","4"},{ "5","6","7","8"},{ "9","10","11","12"},{  "13","14","15","16"}};
	

      do{

        cout<<"This is a 4*4 Tic-Tac-Toe Game\n";
        cout<<"INSTRUCTION : To win this game, one player has to fulfill all 4 sides, i.e, horizantally, vertically, diagonally or in a diamond shape";
	cout<<endl<<endl;
     

    int a;


cout<<arr[0][0]<<"   |"<<arr[0][1]<<"   |"<<arr[0][2]<<"   |"<<arr[0][3]<<endl;
cout<<"____|____|____|____"<<endl;
cout<<arr[1][0]<<"   |"<<arr[1][1]<<"   |"<<arr[1][2]<<"   |"<<arr[1][3]<<endl;
cout<<"____|____|____|____"<<endl;
cout<<arr[2][0]<<"   |"<<arr[2][1]<<"  |"<<arr[2][2]<<"  |"<<arr[2][3]<<endl;
cout<<"____|____|____|____"<<endl;
cout<<arr[3][0]<<"  |"<<arr[3][1]<<"  |"<<arr[3][2]<<"  |"<<arr[3][3]<<endl;
cout<<"    |    |    |    "<<endl;
   
cout<<"\nEnter player A"<<endl;
cin>>a;
switch(a)
{
	case 1:
		if(arr[0][0]!="A"&&arr[0][0]!="B")
		{
		arr[0][0]="A";
	    }
	    else{
	    	cout<<"Already Filled try in next turn"<<endl;
		}
		break;
	case 2:
		if(arr[0][1]!="A"&&arr[0][1]!="B")
		{
		arr[0][1]="A";
	    }
	else{
	    	cout<<"Already Filled try in next turn"<<endl;
		}
		break;
	case 3:
		if(arr[0][2]!="A"&&arr[0][2]!="B")
		{
		arr[0][2]="A";
	    }
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
		}
		break;
    case 4:
		if(arr[0][3]!="A"&&arr[0][3]!="B")
		{
		arr[0][3]="A";
	    }
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
		}
		break;
    case 5:
		if(arr[1][0]!="A"&&arr[1][0]!="B")
		{
		arr[1][0]="A";
	}
	else{
	    	cout<<"Already Filled try in next turn"<<endl;
		}
		break;
	case 6:
		if(arr[1][1]!="A"&&arr[1][1]!="B")
		{
		arr[1][1]="A";
	}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
		}
		break;
	case 7:
		if(arr[1][2]!="A"&&arr[1][2]!="B")
		{
		arr[1][2]="A";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
		}
		break;   

    case 8:
		if(arr[1][3]!="A"&&arr[1][3]!="B")
		{
		arr[1][3]="A";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
		}
		break;   

    case 9:
		if(arr[2][0]!="A"&&arr[2][0]!="B")
		{
		arr[2][0]="A";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    		 
		}
		break;
	case 10:
		if(arr[2][1]!="A"&&arr[2][1]!="B")
		{
		arr[2][1]="A";
	}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    		 
		}
		break;
	case 11:
			if(arr[2][2]!="A"&&arr[2][2]!="B")
		{
		arr[2][2]="A";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    	 
		}
		break;      
    case 12:
			if(arr[2][3]!="A"&&arr[2][3]!="B")
		{
		arr[2][3]="A";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    		 
		}
		break;         

    case 13:
		if(arr[3][0]!="A"&&arr[3][0]!="B")
		{
		arr[3][0]="A";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    		 
		}
		break;
	case 14:
		if(arr[3][1]!="A"&&arr[3][1]!="B")
		{
		arr[3][1]="A";
	}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    		 
		}
		break;
	case 15:
			if(arr[3][2]!="A"&&arr[3][2]!="B")
		{
		arr[3][2]="A";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    	 
		}
		break;      
    case 16:
			if(arr[3][3]!="A"&&arr[3][3]!="B")
		{
		arr[3][3]="A";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    		 
		}
		break;  
    default:
		cout<<"Invalid input please try again in next turn"<<endl;
		Sleep(3000);  
}   

if(arr[0][0]==arr[0][1]&&arr[0][1]==arr[0][2]&&arr[0][2]==arr[0][3]||arr[1][0]==arr[1][1]&&arr[1][1]==arr[1][2]&&arr[1][2]==arr[1][3]||arr[2][0]==arr[2][1]&&arr[2][1]==arr[2][2]&&arr[2][2]==arr[2][3]
||arr[3][0]==arr[3][1]&&arr[3][1]==arr[3][2]&&arr[3][2]==arr[3][3]


||arr[0][0]==arr[1][0]&&arr[1][0]==arr[2][0]&&arr[2][0]==arr[3][0]||arr[0][1]==arr[1][1]&&arr[1][1]==arr[2][1]&&arr[2][1]==arr[3][1]||arr[0][2]==arr[1][2]&&arr[1][2]==arr[2][2]&&arr[2][2]==arr[3][2]
||arr[0][3]==arr[1][3]&&arr[1][3]==arr[2][3]&&arr[2][3]==arr[3][3]


||arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]&&arr[2][2]==arr[3][3]||arr[0][3]==arr[1][2]&&arr[1][2]==arr[2][1]&&arr[2][1]==arr[3][0]





||arr[0][1]==arr[1][0]&&arr[1][0]==arr[1][2]&&arr[1][2]==arr[2][1]||arr[1][1]==arr[2][0]&&arr[2][0]==arr[2][2]&&arr[2][2]==arr[3][1]||arr[0][2]==arr[1][1]&&arr[1][1]==arr[1][3]&&arr[1][3]==arr[2][2]
||arr[1][2]==arr[2][1]&&arr[2][1]==arr[2][3]&&arr[2][3]==arr[3][2]
)


{
	cout<<"***************Congratulations**************\n        Player A won the Game"<<endl;
	break;
}




cout<<"\nEnter player B"<<endl;
cin>>a;
switch(a)
{
	case 1:
		if(arr[0][0]!="A"&&arr[0][0]!="B")
		{
		arr[0][0]="B";
	    }
	    else{
	    	cout<<"Already Filled try in next turn"<<endl;
            Sleep(1000);
		}
		break;
	case 2:
		if(arr[0][1]!="A"&&arr[0][1]!="B")
		{
		arr[0][1]="B";
	    }
	else{
	    	cout<<"Already Filled try in next turn"<<endl;
            Sleep(1000);
		}
		break;
	case 3:
		if(arr[0][2]!="A"&&arr[0][2]!="B")
		{
		arr[0][2]="B";
	    }
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
            Sleep(1000);
		}
		break;
    case 4:
		if(arr[0][3]!="A"&&arr[0][3]!="B")
		{
		arr[0][3]="B";
	    }
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
            Sleep(1000);
		}
		break;
    case 5:
		if(arr[1][0]!="A"&&arr[1][0]!="B")
		{
		arr[1][0]="B";
	}
	else{
	    	cout<<"Already Filled try in next turn"<<endl;
            Sleep(1000);
		}
		break;
	case 6:
		if(arr[1][1]!="A"&&arr[1][1]!="B")
		{
		arr[1][1]="B";
	}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
            Sleep(1000);
		}
		break;
	case 7:
		if(arr[1][2]!="A"&&arr[1][2]!="B")
		{
		arr[1][2]="B";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
            Sleep(1000);
		}
		break;   

    case 8:
		if(arr[1][3]!="A"&&arr[1][3]!="B")
		{
		arr[1][3]="B";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
            Sleep(1000);
		}
		break;   

    case 9:
		if(arr[2][0]!="A"&&arr[2][0]!="B")
		{
		arr[2][0]="B";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
            Sleep(1000);
	    		 
		}
		break;
	case 10:
		if(arr[2][1]!="A"&&arr[2][1]!="B")
		{
		arr[2][1]="B";
	}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
            Sleep(1000);
	    		 
		}
		break;
	case 11:
			if(arr[2][2]!="A"&&arr[2][2]!="B")
		{
		arr[2][2]="B";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    	 Sleep(1000);
		}
		break;      
    case 12:
			if(arr[2][3]!="A"&&arr[2][3]!="B")
		{
		arr[2][3]="B";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
            Sleep(1000);
	    		 
		}
		break;         

    case 13:
		if(arr[3][0]!="A"&&arr[3][0]!="B")
		{
		arr[3][0]="B";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    	Sleep(1000);	 
		}
		break;
	case 14:
		if(arr[3][1]!="A"&&arr[3][1]!="B")
		{
		arr[3][1]="B";
	}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    		Sleep(1000); 
		}
		break;
	case 15:
			if(arr[3][2]!="A"&&arr[3][2]!="B")
		{
		arr[3][2]="B";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    	 Sleep(1000);
		}
		break;      
    case 16:
			if(arr[3][3]!="A"&&arr[3][3]!="B")
		{
		arr[3][3]="B";
		}
		else{
	    	cout<<"Already Filled try in next turn"<<endl;
	    		Sleep(1000); 
		}
		break;  
    default:
		cout<<"Invalid input please try again in next turn"<<endl;
		Sleep(3000);  
}   

if(arr[0][0]==arr[0][1]&&arr[0][1]==arr[0][2]&&arr[0][2]==arr[0][3]||arr[1][0]==arr[1][1]&&arr[1][1]==arr[1][2]&&arr[1][2]==arr[1][3]||arr[2][0]==arr[2][1]&&arr[2][1]==arr[2][2]&&arr[2][2]==arr[2][3]
||arr[3][0]==arr[3][1]&&arr[3][1]==arr[3][2]&&arr[3][2]==arr[3][3]


||arr[0][0]==arr[1][0]&&arr[1][0]==arr[2][0]&&arr[2][0]==arr[3][0]||arr[0][1]==arr[1][1]&&arr[1][1]==arr[2][1]&&arr[2][1]==arr[3][1]||arr[0][2]==arr[1][2]&&arr[1][2]==arr[2][2]&&arr[2][2]==arr[3][2]
||arr[0][3]==arr[1][3]&&arr[1][3]==arr[2][3]&&arr[2][3]==arr[3][3]


||arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]&&arr[2][2]==arr[3][3]||arr[0][3]==arr[1][2]&&arr[1][2]==arr[2][1]&&arr[2][1]==arr[3][0])


{
	cout<<"***************Congratulations**************\n        Player B won the Game"<<endl;
	break;
}


system("CLS");
i++;
}while(i<5);
cout<<"Press Y if you want to contine... "<<endl;
cin>>ch;
}while(ch=='y'||ch=='Y');
}


