#include<bits/stdc++.h>
#include<gmp.h>
using namespace std;

struct Bignumber{
    bool is_sign=0;
    mpz_t bignum;
    inline static bool counter = 0;
    inline static mpz_t one;
    static void bigone(){
        mpz_init(one);
        mpz_set_str(one,"1",10);
    }
    Bignumber(const char b[]=nullptr,int base=10){
        set_bn(b,base);
        if (!counter) {
            bigone();
            counter = true;
        }

    }
    inline Bignumber & set_bn(const char b[]=nullptr,int base=10){
        mpz_init(bignum);
        mpz_set_str(bignum,(b==nullptr)?"0":b,base);
        return *this;
    }
    inline Bignumber & set_bn(Bignumber b){
        mpz_set(bignum, b.bignum);
        return *this;
    }
    Bignumber operator + (const char b[]){
        Bignumber temp(b);
        mpz_add(temp.bignum,temp.bignum,bignum);//temp.bignum+=bignum
        return temp;
    }
    Bignumber operator ++ (){//prefix(++a)
        mpz_add(bignum,bignum,one);//bignum++;
        return *this;
    }
    Bignumber operator ++ (int){//postfix(a++)
        Bignumber temp;
        mpz_set(temp.bignum, bignum);
        mpz_add(bignum,bignum,one);//bignum++;
        return temp;
    }
    Bignumber operator -- (){//prefix(a--)
        mpz_sub(bignum,bignum,one);//bignum++;
        return *this;
    }
    Bignumber operator -- (int){//postfix(a++)
        Bignumber temp;
        mpz_set(temp.bignum, bignum);
        mpz_sub(bignum,bignum,one);//bignum++;
        return temp;
    }
    void dump(){
        if(is_sign){
            printf("1/");
        }
        gmp_printf("%Zd\n",bignum);
    }
    Bignumber operator / (const char b[]){
        Bignumber temp(b);
        mpz_tdiv_q(temp.bignum,bignum,temp.bignum);//temp.bignum+=bignum
        return temp;
    }
    Bignumber operator % (const char b[]){
        Bignumber temp(b);
        mpz_tdiv_r(temp.bignum,bignum,temp.bignum);//temp.bignum+=bignum
        return temp;
    }
    Bignumber operator * (const char b[]){
        Bignumber temp(b);
        mpz_mul(temp.bignum,temp.bignum,bignum);//temp.bignum+=bignum
        return temp;
    }
    Bignumber operator ^ (const char b[]){
        Bignumber temp(b);
        int exp=atoi(b);
        if(exp==0){
            mpz_set_str(temp.bignum,"1",10);
            return temp;
        }
        else if(exp<0){
            temp.is_sign=1;
            exp=-exp;
        }
        printf("b=%s",b);
        printf("exp=%d\n",exp);
        mpz_pow_ui(temp.bignum,bignum,exp);//temp.bignum+=bignum
        return temp;
    }
};
int main(){
    Bignumber a("1234");
    scanf("%s",b);
    (a++).dump();//1234
    (a+"1").dump();//1236
    a.dump();//1235
    (--a).dump();//1234
    (a*"2").dump();//2468
    (a/"2").dump();//617
    (a%"2").dump();//0
    a.set_bn("-2");//2048
    (a^"-3").dump();
}