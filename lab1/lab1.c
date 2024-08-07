#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>
 
char loc;
bool com(char a[],char b[]){
char *mon[12];
mon[0]="Jan";
mon[1]="Feb";
mon[2]="Mar";
mon[3]="Apr";
mon[4]="May";
mon[5]="Jun";
mon[6]="Jul";
mon[7]="Aug";
mon[8]="Sep";
mon[9]="Oct";
mon[10]="Nov";
mon[11]="Dec";
 
for(int i=0;i<12;i++){
   if(mon[i]==a){
  // printf("bbb\n");
    return false;
    }
   if(mon[i]==b){
//  printf("aaa\n");
    return true;
    }
}
}

 
bool compare(char a[],char b[]){
 

for(int i=7;i<11;i++){
  if(a[i]>b[i]) {
//   printf("aaa\n");
    return true;
    }
  if(a[i]<b[i]) {
//  printf("bbb\n");
    return false;
    }
  }
char aa[3];
char bb[3];
for(int i=0;i<3;i++){
aa[i]=a[3+i];
bb[i]=b[3+i];
bool check=false;
for(int l=0;l<3;l++){
if(aa[i]!=bb[i]) check=true;
}
if(check==true){
// printf("bbb\n");
  return com(aa,bb);
  }
for(int i=0;i<2;i++){
  if(a[i]>b[i]){
   return true;
  //  printf("bbb\n");
    }
  if(a[i]<b[i]){
   return false;
//  printf("bbb\n");
   }
  }
return true;
}
}

 
 
 
void bubbleSort(char arr[][11])
{
int n=10;
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (compare(arr[j],arr[j + 1])) {
                char temp[11];
                for(int k=0;k<11;k++){
                temp[k]=arr[j+1][k];
                arr[j+1][k]=arr[j][k];
                arr[j][k]=temp[k];
                }
              //  temp=arr[j];
               // arr[j]=arr[j+1];
               // arr[j+1]=temp;
              //  swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
    if(loc=='N'){
       for(int i=0;i<10 ;i++){
  for(int j=0;j<11;j++){
   printf("%c",arr[i][j]);
    //  fputs(arr[i][j], ptr1); 
   }
  printf("\n");
  }
    }else if(loc=='S'){
     for(int i=9;i>=0 ;i--){
  for(int j=0;j<11;j++){
   printf("%c",arr[i][j]);
    // fputs(arr[i][j], ptr1); 
   }
  printf("\n");
  }

    }else if(loc=='E'){
          for(int i=0;i<5 ;i++){
  for(int j=0;j<11;j++){
   printf("%c",arr[i][j]);
   //  fputs(arr[i][j], ptr1); 
   }
  printf("\n");
  }
      for(int i=9;i>=5 ;i--){
  for(int j=0;j<11;j++){
   printf("%c",arr[i][j]);
    //  fputs(arr[i][j], ptr1); 
   }
  printf("\n");
  }
    }else{

      for(int i=9;i>=5 ;i--){
  for(int j=0;j<11;j++){
   printf("%c",arr[i][j]);
   }
  printf("\n");
  }
          for(int i=0;i<5 ;i++){
  for(int j=0;j<11;j++){
   printf("%c",arr[i][j]);
   }
  printf("\n");
  }

    }

}

 
 

  void solve(char str[]){
  char arr[10][11];
  char index[5];
  char location[5];
  int kk=0;
for(int i=0 ;i<=200;i++){
if(str[i]==','){
    kk++;
     continue;
    }
if(kk==11){
loc=str[i];
  printf("%c\n",str[i]);
break;
}

    if(i<5){
       index[i]=str[i];
       continue;
       }
   int x=(i-5)/12;
   int y=(i-5)%12 -1;
   if(x<10){
   arr[x][y]=str[i];
   continue;
   }    

}
  printf("\n");
  printf("\n");
for(int i=0;i<5;i++){
printf("%c",index[i]);
}
printf("\n");
  printf("\n");
if(loc=='E') printf("East\n\n");
  if(loc=='W') printf("West\n\n");
   if(loc=='N') printf("North\n\n");
    if(loc=='S') printf("South\n\n");

for(int i=0;i<10 ;i++){
  for(int j=0;j<11;j++){
   printf("%c",arr[i][j]);
//   fputs(arr[i][j], ptr1); 
   }
  printf("\n");
  }
   printf("\n");
  bubbleSort(arr);

  }
 
int main() 
{ 
    FILE* ptr; 

    ptr = fopen("week02.csv", "r"); 

    if (ptr == NULL) { 
        printf("Error Occurred While creating a "
               "file ! \n"); 
        exit(1); 
    } 
    char str[200]; 
    if(fgets(str, 200, ptr) != NULL) 
  { 
   // printf("%s",str);

  }
  for(int i=0;i<8914;i++){

     if(fgets(str, 200, ptr) != NULL) 
  { 
   // printf("%s",str);
    solve(str);

  }

  }

    fclose(ptr); 

    return 0; 
}
