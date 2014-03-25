    #include <iostream>
    #include <map>
    #include <string>
    #include <queue>
    using namespace std;
     
    int main()
    {
            map<string, int> proc;
            queue<int> output;
            int n;
            cin >> n;
            for (int i=0; i<n; i++)
            {
                string s;
                cin >> s;
                proc[s] = 0;
            }
     
        //***********************************************
            n=0;
            cin >> n;
            string command;
            for (int i=0; i<n; i++)
            {
                cin >> command;
                    if (command=="INC")
                    {
                        int val;
                        string arg1;
                        cin >> arg1 >> val;
                        proc[arg1] += val;
                        proc[arg1] %= 10000;
                    }
     
                    if (command=="MUL")
                    {
                        string r1,r2,r3;
                        cin >> r1 >> r2 >> r3;
                        proc[r3] = (proc[r1] * proc[r2]);
                        proc[r3] %= 10000;
                    }
     
                    if (command == "ADD")
                    {
                        string r1,r2,r3;
                        cin >> r1 >> r2 >> r3;
                        proc[r3] = (proc[r1] + proc[r2]);
                        proc[r3] %= 10000;
                    }
     
                    if (command == "OUT")
                    {
                        string arg;
                        cin >> arg;
                        output.push(proc[arg]);
                    }
            }
     
            while (!output.empty())
            {
                cout << output.front() << endl;
                output.pop();
            }
    }
     
