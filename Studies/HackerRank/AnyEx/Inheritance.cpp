class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string first_name, string last_name, int id, vector<int> scores) : Person(first_name, last_name, id) {
        this->testScores = scores;
    }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate() 
        {
            int sum = 0;
            for (int i = 0; i < testScores.size(); i++) {
                sum += testScores[i];
            }
            int avg = sum / testScores.size();
            
            if (avg <= 100 && avg >= 90) {
                return 'O';
            } else if (avg < 90 && avg >= 80) {
                return 'E';
            } else if (avg < 80 && avg >= 70) {
                return 'A';
            } else if (avg < 70 && avg >= 55) {
                return 'P';
            } else if (avg < 55 && avg >= 40) {
                return 'D';
            }
            return 'T';
        }
};

