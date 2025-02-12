#include <stdio.h>

int main(){
    float salary, salaryN, gain;
    scanf("%f", &salary);
    if((salary>=0.0)&&(salary<=400.00)){
        salaryN = salary + salary*0.15;
        gain = salaryN - salary;
        printf("Novo salario: %.2f\n", salaryN);
        printf("Reajuste ganho: %.2f\n", gain);
        printf("Em percentual: 15 %%\n");
    }else if((salary>=400.01)&&(salary<=800.00)){
        salaryN = salary + salary*0.12;
        gain = salaryN - salary;
        printf("Novo salario: %.2f\n", salaryN);
        printf("Reajuste ganho: %.2f\n", gain);
        printf("Em percentual: 12 %%\n");
    }else if((salary>=800.01)&&(salary<=1200.00)){
        salaryN = salary + salary*0.10;
        gain = salaryN - salary;
        printf("Novo salario: %.2f\n", salaryN);
        printf("Reajuste ganho: %.2f\n", gain);
        printf("Em percentual: 10 %%\n");
    }else if((salary>=1200.01)&&(salary<=2000.00)){
        salaryN = salary + salary*0.07;
        gain = salaryN - salary;
        printf("Novo salario: %.2f\n", salaryN);
        printf("Reajuste ganho: %.2f\n", gain);
        printf("Em percentual: 7 %%\n");
    }else if(salary>2000.00){
        salaryN = salary + salary*0.04;
        gain = salaryN - salary;
        printf("Novo salario: %.2f\n", salaryN);
        printf("Reajuste ganho: %.2f\n", gain);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
