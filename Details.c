//WAP to make a user friendly application which provides the student's informations after they enter their respective class and roll no..
#include<stdio.h>
#include<math.h>
int main(){
    int class, roll;

    printf("\t\t\t\t\t\t\t ...Welcome to Malay's coding world... \n");
    printf("Kindly enter your class: ");                                                    //Asks the user to enter their class
    scanf("%d", &class);
    switch(class){                                                                                   //switches among class 1 to 12, with the respective cases 1 to 12
        case 1 : printf("You belong to 1st standard. Kindly enter your further details. \n");                   
        printf("Enter your roll number: ");                                                          //Asks the user to enter their roll no. either 1 or 2               
        scanf("%d", &roll);
        if(roll<=1 && roll >= 1){                           //if, else if, else is used to provide the condition
        printf("Name - Malay Ghosh \n");                    //contails the user deatils...
        printf("Class - 1 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321607 \n");
    } else if(roll>=2 && roll <= 2){
    	printf("Name - Anushka Deb. \n");
    	printf("Class - 1 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321026 \n");
    } else {
    	printf("No, such roll no. exists.");
	}
        break;

        case 2 : printf("You belong to 2nd standard. Kindly enter your further details. \n");       //similarly, case 2 is made...
        printf("Enter your roll number: ");
        scanf("%d", &roll);
        if(roll<=1 && roll >= 1){
        printf("Name - Saroj Yadav \n");
        printf("Class - 2 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321608 \n");
    } else if(roll>=2 && roll <= 2){
    	printf("Name - Yash Deshwal. \n");
    	printf("Class - 2 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321028 \n");
    } else {
    	printf("No, such roll no. exists.");
	}
        break;

        case 3 : printf("You belong to 3rd standard. Kindly enter your further details. \n");       //similarly, case 3 is made...
        printf("Enter your roll number: ");
        scanf("%d", &roll);
        if(roll<=1 && roll >= 1){
        printf("Name - Dipanjan Chakraborty. \n");
        printf("Class - 3 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321609 \n");
    } else if(roll>=2 && roll <= 2){
    	printf("Name - Jhanvi Goyal. \n");
    	printf("Class - 3 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321029 \n");
    } else {
    	printf("No, such roll no. exists.");
	}
        break;

        case 4 : printf("You belong to 4th standard. Kindly enter your further details. \n");       //similarly, case 4 is made...
        printf("Enter your roll number: ");
        scanf("%d", &roll);
        if(roll<=1 && roll >= 1){
        printf("Name - Sujal Singh. \n");
        printf("Class - 4 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321600 \n");
    } else if(roll>=2 && roll <= 2){
    	printf("Name - Bhanu Thakur \n");
    	printf("Class - 4 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321024 \n");
    } else {
    	printf("No, such roll no. exists.");
	}
        break;

        case 5 : printf("You belong to 5th standard. Kindly enter your further details. \n");          //similarly, case 5 is made...
        printf("Enter your roll number: ");
        scanf("%d", &roll);
        if(roll<=1 && roll >= 1){
        printf("Name - Arani Dutta \n");
        printf("Class - 5 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321601 \n");
    } else if(roll>=2 && roll <= 2){
    	printf("Name - Parth Pandey \n");
    	printf("Class - 5 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321025 \n");
    } else {
    	printf("No, such roll no. exists.");
	}
        break;

        case 6 : printf("You belong to 6th standard. Kindly enter your further details. \n");          //similarly, case 6 is made...
        printf("Enter your roll number: ");
        scanf("%d", &roll);
        if(roll<=1 && roll >= 1){
        printf("Name - Aashish Bharadwaj. \n");
        printf("Class - 6 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321604 \n");
    } else if(roll>=2 && roll <= 2){
    	printf("Name - Abhishek Singh Chauhan. \n");
    	printf("Class - 6 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321023 \n");
    } else {
    	printf("No, such roll no. exists.");
	}
        break;

        case 7 : printf("You belong to 7th standard. Kindly enter your further details. \n");           //similarly, case 7 is made...
        printf("Enter your roll number: ");
        scanf("%d", &roll);
        if(roll<=1 && roll >= 1){
        printf("Name - Aishik Bhowmik. \n");
        printf("Class - 7 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321605 \n");
    } else if(roll>=2 && roll <= 2){
    	printf("Name - Diya Roy. \n");
    	printf("Class - 8 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12325026 \n");
    } else {
    	printf("No, such roll no. exists.");
	}
        break;

        case 8 : printf("You belong to 8th standard. Kindly enter your further details. \n");           //similarly, case 8 is made...
        printf("Enter your roll number: ");
        scanf("%d", &roll);
        if(roll<=1 && roll >= 1){
        printf("Name - Jiteshwar Ch. Roy. \n");
        printf("Class - 8 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12327607 \n");
    } else if(roll>=2 && roll <= 2){
    	printf("Name - Madhurima Ghosh \n");
    	printf("Class - 1 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12821026 \n");
    } else {
    	printf("No, such roll no. exists.");
	}
        break;

        case 9 : printf("You belong to 9th standard. Kindly enter your further details. \n");           //similarly, case 9 is made...
        printf("Enter your roll number: ");
        scanf("%d", &roll);
        if(roll<=1 && roll >= 1){
        printf("Name - Ripan Singha. \n");
        printf("Class - 9 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321407 \n");
    } else if(roll>=2 && roll <= 2){
    	printf("Name - Priyoshi Bose. \n");
    	printf("Class - 9 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321726 \n");
    } else {
    	printf("No, such roll no. exists.");
	}
        break;

        case 10 : printf("You belong to 10th standard. Kindly enter your further details. \n");         //similarly, case 10 is made...
        printf("Enter your roll number: ");
        scanf("%d", &roll);
        if(roll<=1 && roll >= 1){
        printf("Name - Gaurav Kothari. \n");
        printf("Class - 10 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321657 \n");
    } else if(roll>=2 && roll <= 2){
    	printf("Name - Grishma. \n");
    	printf("Class - 10 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12321726 \n");
    } else {
    	printf("No, such roll no. exists.");
	}
        break;

        case 11 : printf("You belong to 11th standard. Kindly enter your further details. \n");         //similarly, case 11 is made...
        printf("Enter your roll number: ");
        scanf("%d", &roll);
        if(roll<=1 && roll >= 1){
        printf("Name - Abhishek Das \n");
        printf("Class - 11 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12521607 \n");
    } else if(roll>=2 && roll <= 2){
    	printf("Name - Radhika Roy. \n");
    	printf("Class - 11 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12327026 \n");
    } else {
    	printf("No, such roll no. exists.");
	}
        break;

        case 12 : printf("You belong to 12th standard. Kindly enter your further details. \n");         //similarly, case 12 is made...
        printf("Enter your roll number: ");
        scanf("%d", &roll);
        if(roll<=1 && roll >= 1){
        printf("Name - Debolina Dutta. \n");
        printf("Class - 12 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 12721607 \n");
    } else if(roll>=2 && roll <= 2){
    	printf("Name - Jannavi Roy Kayat. \n");
    	printf("Class - 12 \t");
        printf("Roll no. - %d \n", roll);
        printf("Registraion no. - 42321026 \n");
    } else {
    	printf("No, such roll no. exists.");
	}
        break;

        default : printf("No class exists.");
    }
    return 0;
}
