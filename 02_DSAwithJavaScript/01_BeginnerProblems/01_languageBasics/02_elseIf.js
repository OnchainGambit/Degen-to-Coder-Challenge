class Solution {
  studentGrade(marks) {
      if(marks >= 90){
          console.log("Grade A");
      }
      else if(marks >= 70){
          console.log("Grade B");
      }
      else if(marks >= 50){
          console.log("Grade C");
      }
      else if(marks >= 35){
          console.log("Grade D");
      }
      else{
          console.log("Fail");
      }
  }
}