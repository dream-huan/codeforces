#include<bits/stdc++.h>
#if __linux
#include <unistd.h>
#endif
#if __windows
#include<windows.h>
#endif

using namespace std;

string fiveprobability,fourprobability,threeprobability,increaseprobaility,increasetime,fourguaranteed,lanauage;

double fivep;

double fourp,threep,increasep,initalfive,initfourp;

int five=0,four=0,three=0,total=0,fivet=0,fourt=0;

int increaset,fourpt;

map<string,double> fistar,fostar,thstar;

double jsfi=0,jsfo=0,jsth=0;

string fivestar[1005],fourstar[1005],threestar[1005];

int sumfive=0,sumfour=0,sumthree=0;

map<string,int> ffivestar,ffourstar,tthreestar;

int protectfive=0,protectfour=0;

vector<int> avgfive,avgfour;

int totalsum=0;

int fibase=0,fobase=0;

string randommethod;

string pool;

string extraction(string s,string a,string b,int times=1){
    if(times==1) return s.substr(s.find(a)+1,s.find(b)-s.find(a)-1);
    else return extraction(s.substr(s.find(b)+1,s.length()),a,b,--times);
}

void writeText(string file,string s){
    time_t t = time(NULL);
    struct tm* stime=localtime(&t);
    char tmp[32];
    sprintf(tmp, "%04d-%02d-%02d %02d:%02d:%02d",1900+stime->tm_year,1+stime->tm_mon,
            stime->tm_mday, stime->tm_hour,
            stime->tm_min,stime->tm_sec);
    ofstream out(file,ios::app);
    out<<tmp<<" "<<s<<endl;
    out<<"\n";
    out.close();
}

void writereports(string file){
    remove("datareports.txt");
    if(!avgfive.empty()) for(int i=avgfive.size()-1;i>0;i--) avgfive[i]=avgfive[i]-avgfive[i-1];
    if(!avgfour.empty()) for(int i=avgfour.size()-1;i>0;i--) avgfour[i]=avgfour[i]-avgfour[i-1];
    ofstream out(file);
    out<<"目前总抽数:"<<total<<endl;
    out<<"距离5星保底还有"<<max(0,increasep!=0?(int)(increaset+(1-fivep)/increasep)-fivet:0)<<"抽,现在获取5星的概率为:"<<fivep*100<<"%"<<endl;
    out<<"距离4星保底还有"<<max(0,(int)(fourpt-fourt))<<"抽"<<endl;
    out<<"平均获取5星的抽数为"<<(avgfive.empty()?0:accumulate(avgfive.begin(),avgfive.end(),0)/avgfive.size())<<"。其中，有"<<protectfive<<"抽是通过保底才获得的"<<endl;
    out<<"平均获取4星的抽数为"<<(avgfour.empty()?0:accumulate(avgfour.begin(),avgfour.end(),0)/avgfour.size())<<"。其中，有"<<protectfour<<"抽是通过保底才获得的"<<endl;
    out<<"你抽到的:"<<endl;
    out<<"5星:"<<five<<"个,5星综合概率为"<<(double)(five*100.0/total)<<"%,包括{"<<endl;
    for(map<string,int>::iterator i=ffivestar.begin();i!=ffivestar.end();i++){
        out<<i->first<<"*"<<i->second<<endl;
    }
    out<<"}"<<endl;
    out<<"4星:"<<four<<"个,4星综合概率为"<<(double)(four*100.0/total)<<"%,包括{"<<endl;
    for(map<string,int>::iterator i=ffourstar.begin();i!=ffourstar.end();i++){
        out<<i->first<<"*"<<i->second<<endl;
    }
    out<<"}"<<endl;
    out<<"3星:"<<three<<"个,3星综合概率为"<<(double)(three*100.0/total)<<"%,包括{"<<endl;
    for(map<string,int>::iterator i=tthreestar.begin();i!=tthreestar.end();i++){
        out<<i->first<<"*"<<i->second<<endl;
    }
    out<<"}"<<endl;
    out.close();
    cout<<"生成完毕"<<endl;
}

void readText(string file)
{
    ifstream infile; 
    infile.open(file.data());
    assert(infile.is_open());
    string s;
    int k=0;
    while(getline(infile,s))
    {
        k++;
        switch(k){
            case 4:
                fiveprobability=extraction(s,"[","]");
            case 5:
                fourprobability=extraction(s,"[","]");
            case 6:
                threeprobability=extraction(s,"[","]");
            case 9:
                increasetime=extraction(s,"[","]");
                increaseprobaility=extraction(s,"[","]",2);
            case 10:
                fourguaranteed=extraction(s,"[","]");
            case 13:
                lanauage=extraction(s,"[","]");
            case 16:
                randommethod=extraction(s,"[","]");
            case 19:
                pool=extraction(s,"[","]");
        } 
    }
    infile.close();     
}

int stringswitchint(string s){
    int temp=1,ans=0;
    for(int i=s.length()-1;i>=0;i--){
        ans+=temp*(s[i]-'0');
        temp*=10;
    }
    return ans;
}

double stringswitchdouble(string s){
    double ans=0;
    int temp=1;
    if(s.find("%")==string::npos){
        if(s.find(".")==string::npos) s+=".0";
        for(int i=s.find(".")-1;i>=0;i--){
            ans+=temp*(s[i]-'0');
            temp*=10;
        }
        double tans=0;
        temp=1;
        for(int i=s.length()-1;i>s.find(".");i--){
            tans+=temp*(s[i]-'0');
            temp*=10;
        }
        tans*=pow(0.1,s.length()-s.find(".")-1);
        ans+=tans;
        if(ans*pow(10,5)>=1||ans==0) return ans;
        else return pow(0.1,5);
    }else{
        s=s.substr(0,s.length()-1);
        if(s.find(".")==string::npos) s+=".0";
        for(int i=s.find(".")-1;i>=0;i--){
            ans+=temp*(s[i]-'0');
            temp*=10;
        }
        double tans=0;
        temp=1;
        for(int i=s.length()-1;i>s.find(".");i--){
            tans+=temp*(s[i]-'0');
            temp*=10;
        }
        tans*=pow(0.1,s.length()-s.find(".")-1);
        ans+=tans;
        if(ans*pow(10,3)>=1||ans==0) return ans*0.01;
        else return pow(0.1,5);
    }
}

void readTextCharacter(string file)
{
    ifstream infile; 
    infile.open(file.data());
    assert(infile.is_open());
    string s;
    int temp;
    while(getline(infile,s))
    {
        if(extraction(s,"[","]")=="5star"){
            temp=5;
            continue;
        }
        else if(extraction(s,"[","]")=="4star"){
            temp=4;
            continue;
        }
        else if(extraction(s,"[","]")=="3star"){
            temp=3;
            continue;
        }
        if(extraction(s,"[","]")==""||extraction(s,"[","]")=="Character setting"||extraction(s,"[","]")=="Character setting1"||extraction(s,"[","]")=="Character setting2") continue;
        if(temp==5) fistar.insert(pair<string,double>(extraction(s,"[","]"),stringswitchdouble(extraction(s,"[","]",2))));
        else if(temp==4) fostar.insert(pair<string,double>(extraction(s,"[","]"),stringswitchdouble(extraction(s,"[","]",2))));
        else thstar.insert(pair<string,double>(extraction(s,"[","]"),stringswitchdouble(extraction(s,"[","]",2))));
    }
    infile.close();     
}

void newswitch(){
    fivep=stringswitchdouble(fiveprobability);
    fourp=stringswitchdouble(fourprobability);
    threep=stringswitchdouble(threeprobability);
    increasep=stringswitchdouble(increaseprobaility);
    increaset=stringswitchint(increasetime);
    fourpt=stringswitchint(fourguaranteed);
    initalfive=fivep;
    initfourp=fourp;
}

/*int lanauagechoose(){
    if(lanauage=="zh-cn") return 1;
    else return 2;
}*/

void judgment1(){
    if((int)(fivep+fourp+threep)!=1||increasep>1||increaset<0||fourpt<0||jsfi>1||jsfo>1||jsth>1){
        cout<<"你输入的概率数据不正确，请仔细阅读配置文件中的提示"<<endl;
        #if __windows
        sleep(60);
        #endif
        #if __linux
        usleep(3600);
        #endif
        exit(0);
    }
    if(increasep==0) increaset=0;
    if(increaset==0) increasep=0;
}

/*void judgment2(){
    if(fivep+fourp+threep!=1||increasep>1){
        cout<<"Your probability data is not entered correctly, please read the tips in the setting file carefully"<<endl;
        exit(0);
    }
}*/

void statistics(){
    cout<<"目前总抽数:"<<total<<endl;
    cout<<"距离5星保底还有"<<max(0,increasep!=0?(int)(increaset+(1-fivep)/increasep)-fivet:0)<<"抽,现在获取5星的概率为:"<<fivep*100<<"%"<<endl;
    cout<<"距离4星保底还有"<<max(0,(int)(fourpt-fourt))<<"抽"<<endl;
    cout<<"你抽到的:"<<endl;
    cout<<"5星:"<<five<<"个,包括{"<<endl;
    for(map<string,int>::iterator i=ffivestar.begin();i!=ffivestar.end();i++){
        cout<<i->first<<"*"<<i->second<<endl;
    }
    cout<<"}"<<endl;
    cout<<"4星:"<<four<<"个,包括{"<<endl;
    for(map<string,int>::iterator i=ffourstar.begin();i!=ffourstar.end();i++){
        cout<<i->first<<"*"<<i->second<<endl;
    }
    cout<<"}"<<endl;
    cout<<"3星:"<<three<<"个,包括{"<<endl;
    for(map<string,int>::iterator i=tthreestar.begin();i!=tthreestar.end();i++){
        cout<<i->first<<"*"<<i->second<<endl;
    }
    cout<<"}"<<endl;
}

void clear(){
    total=0;
    fivet=0;
    fourt=0;
    five=0;
    four=0;
    three=0;
    fivep=initalfive;
    ffivestar.clear();
    ffourstar.clear();
    tthreestar.clear();
    avgfive.clear();
    avgfour.clear();
    remove("data.txt");
    remove("datareports.txt");
    avgfive.clear();
    avgfour.clear();
    cout<<"数据已清空"<<endl;
}

void fistarsweepstakes(){
    srand(time(NULL));
    int number=(rand()%sumfive)+1;
    cout<<fivestar[number];
}

void fostarsweepstakes(){
    srand(time(NULL));
    int number=(rand()%sumfour)+1;
    cout<<fourstar[number];
}

void thstarsweepstakes(){
    srand(time(NULL));
    int number=(rand()%sumthree)+1;
    cout<<threestar[number];
}

int mfind(string s,int special=5){
    if(special==5){
        for(map<string,int>::iterator i=ffivestar.begin();i!=ffivestar.end();i++){
            if(i->first==s){
                i->second++;
                return 1;
            }
        }
        return 0;
    }else if(special==4){
        for(map<string,int>::iterator i=ffourstar.begin();i!=ffourstar.end();i++){
            if(i->first==s){
                i->second++;
                return 1;
            }
        }
        return 0;
    }else{
        for(map<string,int>::iterator i=tthreestar.begin();i!=tthreestar.end();i++){
            if(i->first==s){
                i->second++;
                return 1;
            }
        }
        return 0;
    }
}

void sweepstakes(int times=1){
    int sum=100000;
    srand(time(NULL));
    int number=(rand()%sum)+1;
    cout<<"获得:"<<endl;
    while(times--){
        totalsum++;
        total++;
        number=(rand()%sum)+1;
        number+=(totalsum*88888);
        number%=sum;
        int temp;
        if(fivet>=increaset) fivep+=increasep;
        if(number>=1&&number<=sum*fivep&&fourt!=fourpt-1) temp=5,five++,fourt++,fivet=0,fivep!=initalfive?fivep=initalfive,protectfive++:1;
        else if(number<=sum&&number>=(sum-(fourp*sum))) temp=4,four++,fivet++,fourt=0;
        else temp=3,three++,fivet++,fourt++;
        if(fourt==fourpt){
            fourt=0;
            protectfour++;
            if(temp==3) temp=4,three--,four++;
        }
        if(temp==5){
            cout<<"5星:"<<fivestar[number%sumfive+1];
            avgfive.push_back(total);
            if(!mfind(fivestar[number%sumfive+1],5)) ffivestar.insert(pair<string,int>(fivestar[number%sumfive+1],1));
            writeText("data.txt",fivestar[number%sumfive+1]+"(五星)");
        }
        else if(temp==4){
            cout<<"4星:"<<fourstar[number%sumfour+1];
            avgfour.push_back(total);
            if(!mfind(fourstar[number%sumfour+1],4)) ffourstar.insert(pair<string,int>(fourstar[number%sumfour+1],1));
            writeText("data.txt",fourstar[number%sumfour+1]+"(四星)");
        }
        else{
            cout<<"3星:"<<threestar[number%sumthree+1]; 
            if(!mfind(threestar[number%sumthree+1],3)) tthreestar.insert(pair<string,int>(threestar[number%sumthree+1],1));
            writeText("data.txt",threestar[number%sumthree+1]+"(三星)");
        }
        if(times!=0) cout<<",";
    }
    cout<<endl;
}

void pseudorandomsweepstakes(int times=1){
    int sum=100000,k=0,p=0;
    srand(time(NULL));
    int number=(rand()%sum)+1;
    cout<<"获得:"<<endl;
    while(times--){
        totalsum++;
        total++;
        number=(rand()%sum)+1;
        number+=(totalsum*88888);
        number%=sum;
    }
}

void m(){
    // for(int i=0;i<sumthree;i++) cout<<threestar[i]<<",";
    int options;
    cout<<"现在的概率为："<<endl<<"五星获取概率："<<fivep*100<<"%"<<endl<<"四星获取概率："<<fourp*100<<"%"<<endl<<"三星获取概率："<<threep*100<<"%"<<endl<<fourpt<<"抽内必定获取到四星角色"<<endl<<"若从第"<<increaset<<"抽之前都没有获取到5星角色，则接下来每次获取5星的概率提升"<<increasep*100<<"%"<<endl<<"接下来请选择:"<<endl<<"1.抽取一次"<<endl<<"2.抽取十次"<<endl<<"3.数据统计"<<endl<<"4.清空数据"<<endl<<"5.生成抽卡分析报告"<<endl<<"其他.退出程序"<<endl;
    cout<<"随机方式:"<<(randommethod=="Pseudo-random"?"伪随机":"真随机")<<endl;
    while(cin>>options){
        switch(options){
            case 1:
                randommethod=="Pseudo-random"?pseudorandomsweepstakes():sweepstakes();
                continue;
            case 2:
                randommethod=="Pseudo-random"?pseudorandomsweepstakes(10):sweepstakes(10);
                continue;
            case 3:
                statistics();
                continue;
            case 4:
                clear();
                continue;
            case 5:
                writereports("datareports.txt");
                continue;
            default:
                exit(0);
        }
    }
}

void charactersorting(){
    int special=0,temp=0,average;
    for(map<string,double>::iterator i=fistar.begin();i!=fistar.end();i++){
        if(i->second!=0){
            if(i->second<0){
                cout<<"概率需非负"<<endl;
                exit(0);
            }
            for(int j=temp+1;j<=temp+i->second*1000;j++) fivestar[j]=i->first;
            temp+=i->second*1000;
            jsfi+=i->second;
        }
        if(i->second==0) special++;
    }
    average=(1000-temp)/special;
    for(map<string,double>::iterator i=fistar.begin();i!=fistar.end();i++){
        if(i->second==0){
            for(int j=temp+1;j<=temp+average;j++) fivestar[j]=i->first;
            temp+=average;
        }
    }
    sumfive=temp;
    special=0,temp=0,average;
    for(map<string,double>::iterator i=fostar.begin();i!=fostar.end();i++){
        if(i->second!=0){
            if(i->second<0){
                cout<<"概率需非负"<<endl;
                exit(0);
            }
            for(int j=temp+1;j<=temp+i->second*1000;j++) fourstar[j]=i->first;
            temp+=i->second*1000;
            jsfo+=i->second;
        }
        if(i->second==0) special++;
    }
    average=(1000-temp)/special;
    for(map<string,double>::iterator i=fostar.begin();i!=fostar.end();i++){
        if(i->second==0){
            for(int j=temp+1;j<=temp+average;j++) fourstar[j]=i->first;
            temp+=average;
        }
    }
    sumfour=temp;
    special=0,temp=0,average;
    for(map<string,double>::iterator i=thstar.begin();i!=thstar.end();i++){
        if(i->second!=0){
            if(i->second<0){
                cout<<"概率需非负"<<endl;
                exit(0);
            }
            for(int j=temp+1;j<=temp+i->second*1000;j++) threestar[j]=i->first;
            temp+=i->second*1000;
            jsth+=i->second;
        }
        if(i->second==0) special++;
    }
    average=(1000-temp)/special;
    for(map<string,double>::iterator i=thstar.begin();i!=thstar.end();i++){
        if(i->second==0){
            for(int j=temp+1;j<=temp+average;j++) threestar[j]=i->first;
            temp+=average;
        }
    }
    sumthree=temp;
}

int main(){
    readText("setting.in");
    if(pool=="up character") readTextCharacter("Character setting1.in"),cout<<"该池子为:up角色池"<<endl;
    else if(pool=="up arms") readTextCharacter("Character setting2.in"),cout<<"该池子为:up武器池"<<endl;
    else readTextCharacter("Character setting.in"),cout<<"该池子为:常驻池"<<endl;
    newswitch();
    judgment1();
    charactersorting();
     m();
    return 0;
}