#include<mysql/mysql.h> //如报错安装mysql开发库
#include<bits/stdc++.h>

using namespace std;

class MysqlDB{
private:
    MYSQL mysql;
    MYSQL_ROW row;
    MYSQL_RES *result;
    MYSQL_FIELD *field;
public:
    MysqlDB(){
        if(mysql_init(&mysql)==nullptr){
            cout<<"init error,line:"<<__LINE__<<"\n";
            exit(-1);
        }
    }
    ~MysqlDB(){
        mysql_close(&mysql);
    }
    void connect(string host,string user,string passwd,string database){
        if(!mysql_real_connect(&mysql,host.c_str(),user.c_str(),passwd.c_str(),database.c_str(),0,nullptr,0)){
            cout<<"connect error,line:"<<__LINE__<<"\n";
            exit(-1);
        }
    }
    void add();
    void print();
    void check();
};

MysqlDB db;

void MysqlDB::add(){
    string u_name,u_password;
    cin>>u_name>>u_password;
    string sql="insert into users(u_name,u_password) values('"+u_name+"','"+u_password+"');";
    mysql_query(&mysql,sql.c_str());
    int uid=mysql_insert_id(&mysql);
    cout<<"register success! new uid:"<<uid<<" new name:"<<u_name<<" new password:"<<u_password<<"\n";
}

void MysqlDB::check(){
    int uid;
    cin>>uid;
    string sql="select u_password from users where uid='"+to_string(uid)+"';";
    mysql_query(&mysql,sql.c_str());
    result=mysql_store_result(&mysql);
    row=mysql_fetch_row(result);
    cout<<row[0]<<"\n";
}

void MysqlDB::print(){
    string sql="select * from users;";
    mysql_query(&mysql,sql.c_str());
    result=mysql_store_result(&mysql);
    if(!result){
        cout<<"result error,line:"<<__LINE__<<"\n";
        exit(-1);
    }
    int num=mysql_num_fields(result);
    for(int i=0;i<num;i++){
        field=mysql_fetch_field_direct(result,i);
        cout<<field->name<<"\t\t";
    }
    cout<<"\n";
    while(row=mysql_fetch_row(result)){
        for(int i=0;i<num;i++){
            cout<<row[i]<<"\t\t";
        }
        cout<<"\n";
    }
}

void init(){
    db.connect("localhost","root","SUIbianla123@","users");
}
int main(){
    init();
    // db.add();
    db.check();
    // db.print();
    return 0;
}