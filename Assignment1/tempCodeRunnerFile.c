
// int calculateDiference(int userI, char *finalOutput)
// {

//     if (userI % 100 < userI)
//     {
//         userI -= 100;
//         strcp(*finalOutput, "$100");

//         strcat(*finalOutput, "$100");
//         calculateDiference(userI, *finalOutput);
//     }
//     else if (userI % 20 < userI)
//     {
//         userI -= 20;
//         strcat(*finalOutput, "$20");
//         calculateDiference(userI, *finalOutput);
//     }
//     else if (userI % 10 < userI)
//     {
//         userI -= 10;
//         strcat(*finalOutput, "$10");
//         calculateDiference(userI, *finalOutput);
//     }
//     else if (userI % 5 < userI)
//     {
//         userI -= 5;
//         strcat(*finalOutput, "$5");
//         calculateDiference(userI, *finalOutput);
//     }
//     else
//     {
//         for (size_t i = 0; i < userI; i++)
//         {
//             strcat(*finalOutput, "$1");
//         }
//     }
// }