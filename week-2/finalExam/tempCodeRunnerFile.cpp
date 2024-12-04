 if(a.eng_marks > b.eng_marks){
   return false;
 }
 else if(a.eng_marks == b.eng_marks && a.math_marks > b.math_marks){
   return false;
 }
 else if(a.eng_marks == b.eng_marks && a.math_marks == b.math_marks && a.id > b.id){
   return false;
 }