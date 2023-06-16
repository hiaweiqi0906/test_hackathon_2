/**
 * I will give u 1 number, I want to know what is the factorial of a
 *
 *
 * fact(3) == 3! = 3*2! = 3 * fact(2)
 * fact(2) == 2! = 2*1! = 2 * fact(1)
 * fact(1) == 1! = 1*0!
 * fact(0) == 0! = 1
*/
// weiqi
int getFact(int a){
   if(a == 0 ){
return 1;

   }else{
      return a * getFact(a-1);
   }

}

int main(){
   cout << getFact(4); // return int // expect to hav: 24
}

//Bernadette ___________________________________________
int calcPower(int a, int b){
    if(b==0){   //base case
        return 1;
    }else{
        return a * calcPower(a,b-1);
    }
}

int main(){
    cout << calcPower(2,5); //return int //expect to have: 32
}
//Anisah ___________________________________________
int calcPower(int a,int b)
{
    //
    if(b==0)
    {return 1;
    }
    else
{
    return a*calcPower(a,b-1);
}

}
int main()
{
    cout<<calcPower(2,5);//return int// expect to have :32
}
//Atiqah ___________________________________________
int calcPower(int a, int b){
 //
if(b==0){
return 1;

}
else(){
return a*calcPower(a,b-1);
}
}

int main(){
cout<<calcPower(2,5); //return int //expect to hav: 32
}
//Dershyani ___________________________________________
int calcPower(int a,int b){
     if(b==0){
       return 1;    //base case
     }
     else {
       return a*calcPower(a,b-1);
     }
}
int main(){
    cout<<calcPower(2,5); //return int //expect to have 32
    return 0;
}

//Najihah ___________________________________________

// step 2: create the function
// step 3: find base case and other case, find pattern
// 2^2 = 2 * 2^1, 2^1 = 2* 2^0 (other case)
// 2^0 = 1 (base case)
int calcPower(int a, int b){
    if(b==0){ // base case
        return 1;
    }else{
        return a * calcPower(a, b-1)
    }
}

int main(){
    cout << calcPower(2,5); // return integer (step 1: simulate how to use function)
    return 0;
}