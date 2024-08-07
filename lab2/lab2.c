#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Student {
    int roll;
    char name[5];
};
struct Curriculum {
    char* cour;
    int c;
    int sem;
};
struct Grades {
    int roll;
    char* cour;
    char grade[3];
    char* sem;
};
struct Nodues{
    int roll;
    char hostel[4];
    char department[4];
    char ncc[4];
    char cos[4];
    char nso[4];
    char institute[4];
};
struct Disciplinary{
    int roll;
    char action[4];
};   
//checking for no dues
void check_nodues(struct Nodues * nod, int r, int l){
for(int a=0; a<l;a++){
if(nod[a].roll = r ){
if(nod[a].hostel == "No"){printf(" – No dues requirement violation (Hostel)");}
else if(nod[a].department == "No"){printf("– No dues requirement violation (department)");}
else if(nod[a].ncc == "No"){printf("  – No dues requirement violation (NCC)");}
else if(nod[a].cos == "No"){printf(" – No dues requirement violation (COS)");}
else if(nod[a].nso == "No"){printf("- No dues requirement violation (NSO)");}
else if(nod[a].institute == "No"){printf("– No dues requirement violation (Institute)");}
//else{ return }
}
}
}
// checking for disciplinary action
void check_disciplinary(struct Disciplinary *discip, int r, int k){
for(int a=0; a<k;a++){
if(discip[a].roll == r ){
if(discip[a].action == "NO"){printf(" – Disciplinary requirement violation ");}

}
}
}
//checking if credits are sufficient
void check_credits(struct Curriculum *courses, struct Grades *grade, int r, int j, int s ){
int h=0;
for(int a=0; a<s; a++){
while(grade[a].roll == r){
for(int b=0;b<j;b++){
if(grade[a].cour = courses[b].cour ){

h=h+courses[b].c;}
}}
}
if(h<315){printf(" - Insufficient credits" );}
}

//checking SA requirement
void check_SAgrade(struct Grades *grade, int r, int s){
for(int a=0;a<s;a++){
while(grade[a].roll == r){
if(grade[a].cour == "SA101" ){
if(grade[a].grade != "PP"){
printf("SA course (SA101) requirement violation");}
}
if(grade[a].cour == "SA201"){
if(grade[a].grade != "PP")
{
printf("SA course (SA201) requirement violation");}
}
if(grade[a].cour == "SA301"){
if(grade[a].grade != "PP")
{
printf("SA course (SA301) requirement violation");}
}
if(grade[a].cour == "SA401"){
if(grade[a].grade != "PP")
{
printf("SA course (SA401) requirement violation");}
}
}}
}

//checking HSS requirement
void check_HSSgrade(struct Grades *grade, int r, int s){
for(int a=0;a<s;a++){
while(grade[a].roll == r){
if(grade[a].cour == "HS200" ){
if(grade[a].grade == "FP"||grade[a].grade == "FA"){
printf("– HSS course (HS200) requirement violation");}
}
if(grade[a].cour == "HS102"){
if(grade[a].grade == "FP"||grade[a].grade == "FA")
{
printf("– HSS course (HS102) requirement violation");}
}
if(grade[a].cour == "HS103"){
if(grade[a].grade == "FP"||grade[a].grade == "FA")
{
printf("– HSS course (HS103) requirement violation");}
}
if(grade[a].cour == "HS203"){
if(grade[a].grade == "FP"||grade[a].grade == "FA")
{
printf("– HSS course (HS203) requirement violation");}
}
}}
}











int main(){
    struct Student *studs = malloc(200 * sizeof(struct Student));

    FILE *f1 = fopen("students.csv", "r");
    int i = 0;
    while (!feof(f1)) {
        fscanf(f1,  "%d, %4s\n", &studs[i].roll, studs[i].name);
        i++;
    }
    

    struct Curriculum *courses = malloc(100 * sizeof(struct Curriculum));
    FILE *f2 = fopen("Curriculum.csv", "r");
    int j = 0;
    while (!feof(f2)) {
        fscanf(f2,  " %6[^,], %d, %d\n", courses[j].cour, &courses[j].c, &courses[j].sem );
        j++;
    }
   

    struct Grades *grade = malloc(10000 * sizeof(struct Grades));
    FILE *f3 = fopen("grade.csv", "r");
    int s = 0;
    while (!feof(f3)) {
        fscanf(f3, "%d, %6[^,], %2s, %15[^,]\n", &grade[s].roll, grade[s].cour, grade[s].grade, grade[s].sem);
        s++;
    }
   struct  Disciplinary*discip = malloc(200 * sizeof(struct Disciplinary));

    FILE *f4 = fopen("disciplinary.csv", "r");
    int k = 0;
    while (!feof(f4)) {
        fscanf(f4, " %d, %99[^,]\n", &discip[i].roll, discip[i].action);
        k++;
    }
    
struct Nodues *nod = malloc(200 * sizeof(struct Nodues));

    FILE *f5 = fopen("no-dues.csv", "r");
    int l = 0;
    while (!feof(f5)) {
        fscanf(f5,  "%d, %3s, %3s, %3s,%3s,%3s,%3s\n", &nod[i].roll, nod[i].hostel, nod[i].department, nod[i].ncc, nod[i].cos, nod[i].nso, nod[i].institute);
        l++;
    }
    int p;
printf("ENTER THE COMMAND");
scanf("%d",&p);
if(p=0){
for(int c=0;c<i;c++){}
}
return 0;}
