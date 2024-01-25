#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char data[100];
    struct Node *left;
    struct Node *right;
};

int enter;
char opt;
struct Node *createNode(const char data[100])
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode != NULL)
    {
        strcpy(newNode->data, data);
        newNode->left = newNode->right = NULL;
    }
    return newNode;
}

struct Node *insertNode(struct Node *root, const char data[100])
{
    if (root == NULL)
    {
        return createNode(data);
    }

    int compareGen1 = strcmp(data, "Male");
    if (compareGen1 == 0)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        int compareGen2 = strcmp(data, "Female");
        if (compareGen2 == 0)
            root->right = insertNode(root->right, data);
    }

    int compareType1 = strcmp(data, "Student");
    if (compareType1 == 0)
    {
        root->left->left = insertNode(root->left->left, data);
        root->right->left = insertNode(root->right->left, data);
    }

    else
    {
        int compareType2 = strcmp(data, "Employee");
        if (compareType2 == 0)
        {
            root->left->right = insertNode(root->left->right, data);
            root->right->right = insertNode(root->right->right, data);
        }
    }
    int compareS1 = strcmp(data, "Prime Minister's Research Fellowship Scheme (PRESS 1)");
    if (compareS1 == 0)
    {
        root->left->left->left = insertNode(root->left->left->left, data);
    }

    int compareS2 = strcmp(data, "Inspire Program (PRESS 2)");
    if (compareS2 == 0)
    {
        root->left->left->right = insertNode(root->left->left->right, data);
    }

    int compareS3 = strcmp(data, "Public Provident Fund (PRESS 3)");
    if (compareS3 == 0)
    {
        root->left->right->left = insertNode(root->left->right->left, data);
    }

    int compareS4 = strcmp(data, "National Savings Certificate (PRESS 4)");
    if (compareS4 == 0)
    {
        root->left->right->right = insertNode(root->left->right->right, data);
    }

    int compareS5 = strcmp(data, "Pragati Scholarship (PRESS 5)");
    if (compareS5 == 0)
    {
        root->right->left->left = insertNode(root->right->left->left, data);
    }

    int compareS6 = strcmp(data, "Cbse Single Girl Child (PRESS 6)");
    if (compareS6 == 0)
    {
        root->right->left->right = insertNode(root->right->left->right, data);
    }
    int compareS7 = strcmp(data, "Women Scientist Scheme (PRESS 7)");
    if (compareS7 == 0)
    {
        root->right->right->left = insertNode(root->right->right->left, data);
    }
    int compareS8 = strcmp(data, "Mudra Yojana (PRESS 8)");
    if (compareS8 == 0)
    {
        root->right->right->right = insertNode(root->right->right->right, data);
    }

    return root;
}

void inorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%s ", root->data);
        inorderTraversal(root->right);
    }
}

struct Node *searchNode(struct Node *root, const char gender[10])
{
    if (root == NULL || strcmp(root->data, gender) == 0)
    {
        return root;
    }

    int result = strcmp(gender, "Male");
    if (result == 0)
        return searchNode(root->left, gender);

    else
        return searchNode(root->right, gender);
}
struct Node *searchNode2(struct Node *root, const char type[10])
{
    if (root == NULL || strcmp(root->data, type) == 0)
    {
        return root;
    }

    int result = strcmp(type, "Student");
    if (result == 0)
        return searchNode(root->left, type);
    else
        return searchNode(root->right, type);
}
//1
void ResearchFellowship()
{

    printf("\nRegister for The Prime Ministers Research Fellowship Scheme!\n");
    printf("\nThis scheme is aimed at attracting the talent pool of the country to doctoral programs of Indian Institute of Technology and Indian Institute of Science for carrying out research in cutting edge science and technology domains, with focus on national priorities.\n ");

    printf("\n Enter 1 to check your eligibility: ");
    scanf("%d", &enter);

    if (enter == 1)
    {
        printf("\n Have completed or be pursuing the final year of four (or five) year undergraduate or five year integrated M.Tech or five year integrated M.Sc. or five year undergraduate-postgraduate dual degree programs in Science and Technology streams from IIEST/IISc/IITs/NITs/IISERs and centrally funded IIITs?(y/n) ");
        scanf("%s", &opt);
        if (opt == 'y' || opt == 'Y')

        {
            printf("\n Have you secured at least CGPA/CPI of 8.0 (in scale of 10.0)? (y/n) ");
            scanf("%s", &opt);
            if (opt == 'y' || 'Y')
            {
                printf("\nYou are eligible!\n");
                const char *url = "https://www.pmrf.in/";
                printf("\033]8;;%s\033\\REGISTER\033]8;;\033\\", url);
            }
            else
                printf("Not eligible");
        }
        else
            printf("Not eligible");
    }
    else
    {
        printf("You have opted to not register");
    }
}
//2
void InspireProgram()
{
    printf("\nRegister for INSPIRE PROGRAM!\n");
    printf("\nINSPIRE is an innovative program developed by the the Department of Science & Technology .This program aims  to attract talent to the excitement and study of science at an early age, and to help the country build the required critical resource pool for strengthening and expanding the S&T system and R&D base.\n ");
    printf("i. Scheme for Early Attraction of Talent (SEATS)\n");
    printf("ii. Scholarship for Higher Education (SHE)\n");
    printf("iii. Assured Opportunity for Research Careers (AORC)\n");
    printf("\n Enter 1 to check your eligibility: ");
    scanf("%d", &enter);

    if (enter == 1)
    {
        printf("\n The scheme offers scholarships each year to students undertaking bachelor and Master’s level education in Natural and Basic sciences. One could be eligible for the scholarship who fulfils any one of the following criteria : \n");
        printf("\ni) Students who happen to be among the top 1 percent in 12th standard at their respective Board Examinations and are pursuing courses in Natural and Basic sciences at the B.Sc. or Integrated M.Sc. levels.\n");
        printf("\nii) Students who have secured in the Joint Entrance Examination of JEE-Advance top 10,000 ranks, JEE-Main (top 10,000 ranks) plus those clearing NEET (top 10,000 ranks), and who also opt to study Natural and Basic sciences in any academic institute or university leading to graduate and post-graduate degree, would be eligible for scholarship.\n");
        printf("\niii ) Students admitted to Indian Institute of Science Education and Research (IISER), National Institute of Science Education and Research (NISER), Department of Atomic Energy Centre for Basic Sciences (DAE-CBS) at the University of Mumbai or happen to be Kishore Vaigyanik Protsahan Yojana (KVPY), National Talent Search Examination (NTSE), Jagadish Bose National Science Talent Search (JBNSTS) scholars and Science Olympiad Medalists, opting to undertake courses in the Natural & Basic sciences leading to B.Sc. and M.Sc. degrees are eligible for “”SHE”” scholarship.\n");
        printf("\n Does any ONE of this criteria apply to you? (y/n) \n");
        scanf("%s", &opt);
        if (opt == 'y' || opt == 'Y')
        {
            printf("\nYou are eligible!\n");
            const char *url = "https://www.online-inspire.gov.in/";
            printf("\033]8;;%s\033\\REGISTER\033]8;;\033\\", url);
        }
        else
        {
            printf("You are not eligible :( ");
        }
    }
    else
    {
        printf("You have opted to not register");
    }
}
//3
void PublicProvidentFund()
{
    printf("\n\nRegister for Public Provident Fund Scheme!\n");
    printf("The Public Provident Fund (PPF) is a long-term savings and investment scheme in India, designed to help individuals build a retirement corpus while offering tax benefits");
    printf("\n Enter 1 to check your eligibility: ");
    scanf("%d", &enter);
    if (enter == 1)
    {
        printf("Are you an Indian Citizen? (y/n) ");
        scanf("%s", &opt);
        if (opt == 'y' || opt == 'Y')
        {
            printf("\nAre you above 18 years of age ? (y/n) ");
            scanf("%s", &opt);
            if (opt == 'y' || 'Y')
            {
                printf("\nYou are eligible!\n");
                const char *url = "https://www.nsiindia.gov.in/InternalPage.aspx?Id_Pk=55";
                printf("\033]8;;%s\033\\REGISTER\033]8;;\033\\", url);
            }
            else
                printf("Not eligible");
        }
        else
            printf("Not eligible");
    }
    else
    {
        printf("You have opted to not register");
    }
}
//4
void NationalSavingsCertificate()
{
    printf("\nRegister for National Savings Certificate!\n");
    printf("The National Savings Certificate (NSC) is a fixed-income investment scheme that you can open with any post office branch. This is an initiative by the Government of India and encourages subscribers mainly small to mid-income investors to invest while saving also saving on income tax.");
    printf("\n Enter 1 to check your eligibility: ");

    scanf("%d", &enter);
    if (enter == 1)
    {
        printf("Are you an Indian Citizen? (y/n) ");
        scanf("%s", &opt);
        if (opt == 'y' || opt == 'Y')
        {
            printf("\n Do you belong to Hindu Undivided Families (HUFs), Trusts, Private and Public Limited Companies (PLCs)? (y/n) ");
            scanf("%s", &opt);
            if (opt == 'n' || 'N')
            {
                printf("\nYou are eligible!\n");
                const char *url = "https://www.nsiindia.gov.in/InternalPage.aspx?Id_Pk=90";
                printf("\033]8;;%s\033\\REGISTER\033]8;;\033\\", url);            
            }
            else
                printf("Not eligible");
        }
        else
            printf("Not eligible");
    }
    else
    {
        printf("You have opted to not register");
    }
}
//5
void PragatiScholarship()
{
    printf("\nRegister for PRAGATI SCHOLARSHIP!\n");
    printf("\n Pragati is a Ministry of Human Resource Development (MHRD) scheme which is aimed at providing encouragement and support to girl child to pursue technical education. It is implemented by AICTE. The scholarship is designed to cover one girl per family and it can be extended to two girl children per family where the family income is less than Rs. 8 lakh per annum.\n");
    printf("\n Enter 1 to check your eligibility: ");
    scanf("%d", &enter);

    if (enter == 1)
    {
        printf("\n The candidates will be selected on Merit at the qualifying examination to pursue technical education from amongst such candidates. Moreover, the candidates should have been admitted to 1st year of the Degree or Diploma programme in any of the AICTE approved institute during the current academic year through a centralized admission process of the State/Central Government. The criteria for reservation is- 15 percent for SC, 7.5 percent for ST and 27 percent for OBC candidate/applicant.  \n");
        printf("\n Does this criteria apply to you? (y/n) \n");
        scanf("%s", &opt);

        if (opt == 'y' || opt == 'Y')
        {
            printf("\nYou are eligible!\n");
            const char *url = "https://www.aicte-pragati-saksham-gov.in/";
            printf("\033]8;;%s\033\\REGISTER\033]8;;\033\\", url);
        }
        else
        {
            printf("You are not eligible :( ");
        }
    }
    else
    {
        printf("You have opted to not register");
    }
}
//6
void CbseSingleGirlChild()
{
    printf("\nRegister for CBSE SINGLE GIRL CHILD SCHOLARSHIP!\n");
    printf("\n The scheme envisages providing scholarships to the meritorious single girl student, who is the only child of the parent and has passed CBSE Class X examination with 60 percent or more and is continuing her further education of Class XI and XII. The scheme is aimed to recognize the efforts of the parents in promoting education among girls and provide encouragement to meritorious students.\n");
    printf("\n Enter 1 to check your eligibility: ");
    scanf("%d", &enter);

    if (enter == 1)
    {
        printf("\n 1) The scholarship shall be given on the basis of the merit to All Single Girl Students, who have secured 60 percent / 6.2 CGPA or more marks / grades in CBSE Class X Examination and are studying in Class XI & XII in school affiliated with CBSE, whose tuition fee is not more than Rs. 1,500/- p.m. during the academic year.  \n");
        printf("\n 2) The scholarship shall be awarded to Indian Nationals only.\n");
        printf("\n Does both the criteria apply to you? (y/n)\n");
        scanf("%s", &opt);

        if (opt == 'y' || opt == 'Y')
        {
            printf("\nYou are eligible!\n");
            const char *url = "https://cbseit.in/cbse/2023/sgcx/default.aspx";
            printf("\033]8;;%s\033\\REGISTER\033]8;;\033\\", url);
        }
        else
        {
            printf("You are not eligible :( ");
        }
    }
    else
    {
        printf("You have opted to not register");
    }
}
//7
void WomenScientistScheme()
{
    printf("\nRegister for WOMEN SCIENTISTS SCHEME!\n");
    printf("\n The Department of Science and Technology (DST) under the aegis of the Ministry of Science and Technology initiated the scheme for women scientists and technologists between the age of 27-57 years. The objective is to provide an opportunity for women who are having a break in their career because of motherhood and family responsibilities and have the desire to return to mainstream\n");
    printf("\n Enter 1 to check your eligibility: ");
    scanf("%d", &enter);

    if (enter == 1)
    {
        printf("\n The Department of Science and Technology (DST) under the aegis of the Ministry of Science and Technology initiated the scheme for women scientists and technologists between the age of 27-57 years. The objective is to provide an opportunity for women who are having a break in their career because of motherhood and family responsibilities and have the desire to return to mainstream \n");
        printf("\n Do these conditions apply to you? (y/n)\n");
        scanf("%s", &opt);

        if (opt == 'y' || opt == 'Y')
        {
            printf("\nYou are eligible!\n");
            const char *url = "https://online-wosa.gov.in/wosa/";
            printf("\033]8;;%s\033\\REGISTER\033]8;;\033\\", url);
        }
        else
            printf("You are not eligible :( ");
    }
    else
    {
        printf("You have opted to not register");
    }
}
//8
void MudraYojana()
{
    printf("Register for Mudra Loan Scheme!\n ");
    printf("The Mudra loan scheme is a government initiative in India aimed at promoting entrepreneurship and providing financial support to micro and small enterprises. The scheme has a special focus on women entrepreneurs, as it aims to empower and promote women's entrepreneurship in the country. \n");
    printf("\n Enter 1 to check your eligibility: ");

    scanf("%d", &enter);
    if (enter == 1)
    {
        printf("Are you an Indian Citizen? (y/n) ");
        scanf("%s", &opt);
        if (opt == 'y' || opt == 'Y')
        {
            printf("\n Are your credit needs below Rs. 10 lakhs (y/n) ");
            scanf("%s", &opt);
            if (opt == 'y' || 'Y')
            {
                printf("\nYou are eligible!\n");
                const char *url = "https://www.mudra.org.in/";
                printf("\033]8;;%s\033\\REGISTER\033]8;;\033\\", url);
            }
            else
                printf("Not eligible");
        }
        else
            printf("You have opted to not register");
    }
}

int main()
{
    char data[100];
    struct Node *root = NULL;
    char name[50];
    char gender[10];
    char type[10];
    int choice;

    root = insertNode(root, "Customer");
    insertNode(root, "Male");
    insertNode(root, "Female");

    insertNode(root, "Student");
    insertNode(root, "Employee");

    insertNode(root, "Prime Minister's Research Fellowship Scheme (PRESS 1)");
    insertNode(root, "Inspire Program (PRESS 2)");
    insertNode(root, "Public Provident Fund (PRESS 3)");
    insertNode(root, "National Savings Certificate (PRESS 4)");
    insertNode(root, "Pragati Scholarship (PRESS 5)");
    insertNode(root, "Cbse Single Girl Child (PRESS 6)");
    insertNode(root, "Women Scientist Scheme (PRESS 7)");
    insertNode(root, "Mudra Yojana (PRESS 8)");

    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");

    printf("----------Saving Schemes for you!-----------\n");
    printf("Enter your Full name = ");
    scanf("%[^\n]", &name);
    printf("Enter your Gender = ");
    scanf("%s", &gender);
    printf("Are you a Student or an Employee? = ");
    scanf("%s", &type);

    struct Node *result = searchNode(root, gender);
    struct Node *result2 = searchNode2(result, type);

    if (result2 != NULL)
    {
        printf("\n The schemes available for %s! ", name);
        printf("\n A. %s ", result2->left->data);
        printf("\n B. %s ", result2->right->data);
    }
    else
    {
        printf("Sorry for the inconvenience.There are currently no schemes for you!\n");
    }
    printf("\n Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        ResearchFellowship();
        break;

    case 2:
        InspireProgram();
        break;

    case 3:
        PublicProvidentFund();
        break;

    case 4:
        NationalSavingsCertificate();
        break;

    case 5:
        PragatiScholarship();
        break;

    case 6:
        CbseSingleGirlChild();
        break;

    case 7:
        WomenScientistScheme();
        break;

    case 8:
        MudraYojana();
        break;

    default:
        printf("Invalid choice! ");
        break;
    }

    return 0;
}
