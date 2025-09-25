#include <iostream>
#include <vector>
#include <string>

struct Task 
{
    string name;
    bool completed;
};

void todoList() {
    cout << "\To-Do List Manager" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Mark Task as Completed"<<endl;
    cout << "4. Remove Task" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option:";
}

int toDo() {
    vector<Task> tasks;
    int choice;
    do {
        showMenu();
        cin >> choice;

        if (choice == 1)
         {
            cin.ignore();
            Task t;
            cout << "Enter task name: ";
            getline(cin, t.name);
            t.completed = false;
            tasks.push_back(t);
            cout << "Task added successfully!" << endl;
         } 
        else if (choice == 2) 
         {
            if (tasks.empty()) 
             {
                cout << "No tasks available." << endl;
             } 
             else 
             {
                cout << "\nYour Tasks:" << endl;
                for (int i = 0; i < tasks.size(); i++) 
                {
                    cout << i + 1 << ". " << tasks[i].name 
                         << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]" 
                         << endl;
                }
            }
        } 
        else if (choice == 3) {
            int index;
            cout << "Enter task number to mark completed: ";
            cin >> index;
            if (index >= 1 && index <= tasks.size()) 
             {
                tasks[index - 1].completed = true;
                cout << "Task marked as completed!" << endl;
             } 
            else 
             {
                cout << "Invalid task number!" << endl;
            }
        } 
        else if (choice == 4) {
            int index;
            cout << "Enter task number to remove: ";
            cin >> index;
            if (index >= 1 && index <= tasks.size()) 
              {
                tasks.erase(tasks.begin() + (index - 1));
                cout << "Task removed successfully!" << endl;
              } 
              else 
              {
                cout << "Invalid task number!" << endl;
              }
           } 
           else if (choice == 5) 
           {
            cout << "Exiting.Goodbye!" << endl;
           } 
           else
           {
            cout << "Invalid plz Try again." << endl;
        }

    } while (choice != 5);

    getch();
}