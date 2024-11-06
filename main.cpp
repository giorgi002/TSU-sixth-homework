// first task👇(1)
// #include <iostream>
// using namespace std;
// int main(){
//     int k;
//     char p;
//     for(k =1, p ='A';k<9;++k){
//         cout << p++<< endl;
//     }
// }



// first task👇(2)
// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     for(x=10; -10||0;x++){
//         puts("ar dasruldeba");
//     }
// }



// first task👇(3)
// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     for(x =10; x >3 && 5-5; x++){
//         puts("ar shesruldeba");
//     }
// }



// first task👇(4)
// #include <iostream>
// using namespace std;
// int main(){
//     int s =30;
//     for(int n =7; true; --n){
//         s-=n;
//         if(n ==4) break;
//     }
//     cout << s << endl;
// }



// first task👇(5)
// #include <iostream>
// using namespace std;
// int main(){
//     int n =5, p=1;
//     for( ; n <=11; n++){
//         if(n%2==0)continue;
//         p*=n;
//     }
//     cout<< p<< endl;
// }


// second task 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int a,s=0;
//     while(true){
//         a=rand();
//         if(a%100==13)continue;
//         s+=a;
//         if(s%10 ==0) break;
//     }
//     cout << s<< endl;
// }


// third task 👇
// #include <iostream>
// #include <array>
// #include <string>
// using namespace std;
// int main(){
//     const int N=5;
//     array<string,N> w;
//     for(int index =0; index < N;index++){
//         cin >> w[index];
//     }
//     for(int i =0; i< w.size(); i++){
//         cout << w[i] << endl;
//     }
// }


// fourth task 👇
// #include <iostream>
// #include <array>
// using namespace std;
// int main(){
//     const int N =5;
//     array<int, N> numbers;
//     int sum;
//     for(int i =0; i < numbers.size(); i++){
//         cin >> numbers[i];
//         sum += numbers[i];
//     }
//     cout << sum/2 << endl;
// }



// fifth task 👇
// #include <iostream>
// #include<array>
// using namespace std;
// int main(){
//     const int N=5;
//     array<char,N> chars;
//     for(int i =0; i<chars.size(); i++){
//         cin >> chars[i];
//     }
//     char min = int(chars[0]);
//         if(int(chars[0]) > int(chars[1])) min =int(chars[1]);
//         if(int(chars[1]) > int(chars[2])) min =int(chars[2]);
//         if(int(chars[2]) > int(chars[3])) min =int(chars[3]);
//         if(int(chars[3]) > int(chars[4])) min =int(chars[4]);
//         cout<< min << "\t" << int(min) << endl;
// }



// sixth task 👇
// #include <iostream>
// #include <array>
// using namespace std;
// int main(){
//     array<int,10 > arr;
//     for(size_t i =1; i<=arr.size(); i++){
//         arr[i-1] =i*i;
//     }
//     for(size_t n =0; n <arr.size(); n++){
//         cout << arr[n]<<"\t";
//     }
//      cout<< endl;
// }



// seventh task 👇
// #include <iostream>
// #include <array>
// #include <fstream>
// using namespace std;
// int main(){
//     array<int,15> arr;
//     int sum,count=0;
//     fstream read("numbers.txt");
//     for(int i =0; i< arr.size(); i++){
//         read>> arr[i];
//     }
//     for(auto x : arr){
//         sum = x/100+x/10%10+x%10;
//         if(x % sum ==0){
//             cout << x << endl;
//             count++;
//         }
//     }
//     cout << count << endl;
// }



// eight task 👇(1)
// #include <iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     for(int i =15; i<=101; i+=2){
//         sum +=i;
//     }
//     cout <<sum << endl;
// }



// eight task 👇(2)
// #include <iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     for(int i =4; i<=123; i+=2){
//         sum +=i;
//     }
//     cout << sum << endl;
// }



// eight task 👇(3)
// #include <iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     for(int i=5; i <= 103; i+=5){
//         sum +=i;
//     }
//     cout << sum/4 << endl;
// }



// eight task 👇(4)
// #include <iostream>
// using namespace std;
// int main(){
//     int m,n,sum =0;
//     cout <<"შეიყვანეთ რიცხვების შუალედი\n";
//     cin >> m >>n;
//     for(int i =m; i <=n; i++){
//         sum +=i;
//     }
//     cout << "ჯამი არის "<< sum << endl;
// }



// task nine 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,sum=0;
//     double c;
//     cout << "შეიყვანეთ შუალედი\n ";
//     cin >> a>>b;
//     for(int i=a; i< b; i++){
//         sum+=i;
//     }
//     c =sum/(b-a);
//     cout << "მოცემული რიცხვების საშუალო არის "<<c<< endl;
// }



// task ten 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     int sum=0,counter=0;
//     while(true){
//         a =rand();
//         if(a%2==0) continue;
//         sum+=a;
//         if(sum%21==0) break;
//         counter++;
//     }
//     cout << "ამ რიცხვების საშუალო არის " << sum/counter<< endl;
// }



// task eleven 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     int counter=0,sum=0;
//     while(true){
//         a =rand();
//         if(a%5==0) continue;
//         sum+=a;
//         if(sum%19==0) break;
//         counter++;
//     }
//     cout << "ამ რიცხვების საშუალო არის "<< sum/counter<< endl;
// }



// task thirteen 👇 (1)
// #include <iostream>
// #include <array>
// #include <fstream>
// #include <algorithm>
// using namespace std;
// int main(){
//     array<char,3> chars;
//     fstream read("text.txt");
//     for(int i=0;i<chars.size();i++){
//         read>> chars[i];
//     }
//     read.close();
//     sort(chars.begin(), chars.end());
//     ofstream write("res.txt");
//     for(int n =0; n < chars.size(); n++){
//         write << chars[n] << "\t"<< int(chars[n])<< endl;
//     }
//     write.close();
// }
 


// task thirteen 👇 (2)
// #include <iostream>
// #include <fstream>
// #include <algorithm>
// using namespace std;
// int main(){
//     char a,b,c,min,max ;
//     ifstream read("text.txt");
//     read>>a>>b>>c;
//     read.close();
//     min=max =a;
//     if(min>b) min=b;
//     if(min>c) min=c;
//     if(max < b) max=b;
//     if(max < c) max=c;
//     ofstream write("output.txt");
//     write << max << "\t"<< min<< endl;
//     write.close();
// }



// task fourteen 👇
// #include <iostream>
// #include <array>
// #include<algorithm>
// using namespace std;
// int main(){
//     array<int,75> arr;
//     int n,m;
//     n=-15;
//     m=80;
//     for(int i=0;i< 75;i++){
//         arr[i]= rand()%(96)+n;
//     }
//     sort(arr.rbegin(),arr.rend());
//     for(int n=0;n<75; n++){
//         cout << arr[n]<< endl;
//     }
//     cout << endl;
// }



// task fifteen 👇
// #include <iostream>
// #include <algorithm>
// #include <array>
// using namespace std;
// int main(){
//     int i=0;
//     const int N=5;
//     cout<<"შემოიტანეთ ნამდვილი რიცხვები\n";
//     array<double,N> arr;
//     for(int i =0; i < arr.size();i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
//     cout<<"მინიმალური რიცხვი არის "<< arr[0]<<"\t" <<endl;
//     cout<<"მაქსიმალური რიცხვი არის "<< arr[arr.size()-1]<< endl;
// }

// 16 ვერ გავიგე !!!!!!!!!!!!!!!!
// 16 ვერ გავიგე !!!!!!!!!!!!!!!!
// 16 ვერ გავიგე !!!!!!!!!!!!!!!!
// 16 ვერ გავიგე !!!!!!!!!!!!!!!!
// 16 ვერ გავიგე !!!!!!!!!!!!!!!!
// 16 ვერ გავიგე !!!!!!!!!!!!!!!!





