#include<iostream> 
#include<string>

class student;
class student{
    private:
    std::string studentID;
    std::string studentName;
    double oopTwoScore;
    double mathsScore;
    double englishScore;
    double totalScore;

    public:
    student(std::string studentID="TestID",std::string studentName="TestName",
            double oopTwoScore=0,double mathsScore=0,double englishScore=0,
            double totalScore=0);
    void setStudentID(std::string studentID);
    std::string getStudentID();
    void setStudentName(std::string studentName);
    std::string getStudentName();
    void setMarksOOP(double oopMarks);
    double getMarksOOP();
    void setMarksMath(double mathMarks);
    double getMarksMath();
    void setMarksEng(double engMarks);
    double getMarksEng();
    double totalMarks();
    void dispData();
};

/*
Class member functions:
*/

student::student(
                std::string studentID,std::string studentName,double oopTwoScore,
                double mathsScore,double englishScore, double totalScore){
                    this->studentID=studentID;
                    this->studentName=studentName;
                    this->oopTwoScore=oopTwoScore;
                    this->mathsScore=mathsScore;
                    this->englishScore=englishScore;
                    this->totalScore=totalScore;
    }

void student::setStudentID(std::string studentID){
    this->studentID=studentID;
}

std::string student::getStudentID(){
    return this->studentID;
}

void student::setStudentName(std::string studentName){
    this->studentName=studentName;
}

std::string student::getStudentName(){
    return this->studentName;
}

void student::setMarksOOP(double marksOOP){
    this->oopTwoScore=marksOOP;
}

double student::getMarksOOP(){
    return this->oopTwoScore;
}

void student::setMarksMath(double marksMath){
    this->mathsScore=marksMath;
}

double student::getMarksMath(){
    return this->mathsScore;
}

void student::setMarksEng(double marksEng){
    this->englishScore=marksEng;
}

double student::getMarksEng(){
    return this->englishScore;
}

double student::totalMarks(){
    return this->totalScore=((this->getMarksEng()+this->getMarksMath()+this->getMarksOOP()));
}

void student::dispData(){
    std::cout<<getStudentID()<<"   "<<getStudentName()<<"   "<<"OOP MARKS: "<<getMarksOOP()<<"   "<<"MATHS MARKS: "<<getMarksMath()<<"   "<<"ENG MARKS: "<<getMarksEng()<<"   "<<"TOTAL MARKS: "<<totalMarks()<<"\n";
}

int main(){
    student sOne;
    sOne.setStudentID("1");
    sOne.setStudentName("Mantej Sokhi");
    sOne.setMarksOOP(92);
    sOne.setMarksEng(65);
    sOne.setMarksMath(98);
    sOne.dispData();
    return 0;
}