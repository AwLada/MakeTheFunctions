#include <iostream>
#include <vector>

using namespace std;

//prototypes:
int fillWith(vector<int>& test, int y);
void printVector(vector<int>& test);

/////DO NOT TOUCH/////
int main()
{
        vector <int> projects;
        vector <int> quizzes;

        int numProjects;
        int numQuizzes;

        cout<<"\nHow many projects are there? ";
        cin>>numProjects;
        cout<<"\nHow many quizzes are there? ";
        cin>>numQuizzes;

        //only proceed if both numbers are positive
        
        if( (numProjects > 0) && (numQuizzes > 0) )
        {
                projects.resize(numProjects);
                quizzes.resize(numQuizzes);

                fillWith(projects, 90); // Fills the vector with all value 90s
                fillWith(quizzes, 80); // Fills the vector with all value 80s

                cout<<"\nProject Scores:\n";
                printVector(projects); // Prints vector with space after each cell
                cout<<"\n\nQuiz Scores:\n";
                printVector(quizzes); // Prints vector with space after each cell
        }
        else
        {
                cout<<"\nSorry, numbers must be bigger than 0.\n";
        }
        return 0;
}

//function definitions
int fillWith(vector<int>& test, int y)
{
        int x = test.size();
        for (int i=0; i< x; i++)
        {
                test[i] = y;
        }
}

void printVector(vector<int>& test)
{
        for (int i=0; i< (test.size()); i++)
        {
                cout << test[i] << " ";
        }
}







