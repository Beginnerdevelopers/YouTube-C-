#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

void displayMneu(){
    cout <<"\n Todo list Menu :\n";
    cout << "1. Add Task\n";
    cout << "2. Remove Task\n";
    cout << "3. View Tasks\n";
    cout << "4. Save & Exit\n";
    cout <<"Enter your Choice: ";
}

void addTask(vector<string>& tasks){
    string task;
    cout <<"\n Enter Task : ";
    cin.ignore();
    getline(cin,task);//read full line
    tasks.push_back(task);
    cout<<"Task Added Successfully! \n";
}
void removeTask(vector<string>& tasks){
    int index;
    cout <<"\n Enter Task Index to Remove : "<<tasks.size();
    cin >> index;
    if(index >0 && index <= tasks.size()){
        tasks.erase(tasks.begin()+index-1);
        cout<<"Task Removed Successfully! \n";
    }
    else{
        cout<<"Invalid Index! \n";
    }
}
void viewTasks(const vector<string>& tasks){
    if(tasks.empty()){
        cout <<"\n No Tasks Available! \n";

    }
    else{
        cout <<"\n List of  Tasks : \n";
        for(int i = 0; i < tasks.size(); i++){
            cout<< i + 1 <<" "<<tasks[i]<<endl;
        }
    }
}

void saveTaskToFile(const vector<string>& tasks)
{
    ofstream file("tasks.txt");
    if(file.is_open()){
        for(int i = 0; i <tasks.size(); ++i){
            file<<tasks[i]<<endl;
        }
    }
}
void loadTaskFromFile(vector<string>& tasks){
    ifstream file("tasks.txt");
    string task;
    while(getline(file,task)){
        tasks.push_back(task);
    }
    file.close();
}

int main(){
    vector<string> tasks; //vector to store tasks
    loadTaskFromFile(tasks);


    int choice;
    do {
        displayMneu();
        cin >> choice;
        switch (choice) {
            case 1:
            addTask(tasks);
            break;
            case 2:
            removeTask(tasks);
            break;
            case 3:
            viewTasks(tasks);
            break;
            case 4:
            saveTaskToFile(tasks);
            cout<<"Exiting .... Goodbye \n";
            break;
        }

    } while(choice !=4);
    return 0;




}