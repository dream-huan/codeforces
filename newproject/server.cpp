#include<bits/stdc++.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include"mysql.h"

using namespace std;

string extraction(string s,string a,string b,int times=1){
    if(times==1) return s.substr(s.find(a)+1,s.find(b)-s.find(a)-1);
    else return extraction(s.substr(s.find(b)+1,s.length()),a,b,--times);
}

void process(){
    int server_sockfd;//服务端套接字
    int client_sockfd;//客户端套接字
    int len;//长度
    struct sockaddr_in my_addr;//服务器网络地址
    struct sockaddr_in remoto_addr;//客户端网络地址
    socklen_t sin_size;
    char recv_buf[BUFSIZ];//数据接收缓冲区
    char send_buf[BUFSIZ];//数据传输缓冲区
    memset(&my_addr,0,sizeof(my_addr));//数据初始化清零
    my_addr.sin_family=AF_INET;//设置为ip通信
    my_addr.sin_addr.s_addr=INADDR_ANY;//服务器IP地址 --允许连接到所有本地地址上
    my_addr.sin_port=htons(8008);//服务器端口号
    //创建服务器套接字 --ipv4协议，面向协议通信，TCP协议
    if((server_sockfd=socket(PF_INET,SOCK_STREAM,0))<0){
        cout<<"socket error,line:"<<__LINE__<<"\n";
        exit(-1);
    }
    //套接字绑定在服务器的网络地址下
    if(bind(server_sockfd,(struct sockaddr *)&my_addr,sizeof(struct sockaddr))<0){
        cout<<"bind error,line:"<<__LINE__<<"\n";
        exit(-1);
    }
    //监听连接请求 监听队列长度5
    if(listen(server_sockfd,10)<0){
        cout<<"listen error,line:"<<__LINE__<<"\n";
        exit(-1);
    }
    sin_size=sizeof(struct sockaddr_in);
    //等待客户端连接请求
    if((client_sockfd=accept(server_sockfd,(struct sockaddr *)&(remoto_addr),&sin_size))<0){
        cout<<"accept error,line:"<<__LINE__<<"\n";
        exit(-1);
    }
    //连接成功 收到地址
    cout<<"accept client"<<inet_ntoa(remoto_addr.sin_addr)<<" port:"<<remoto_addr.sin_port<<"\n";
    // len=recv(client_sockfd,recv_buf,strlen(recv_buf),0);
    while(len=recv(client_sockfd,recv_buf,strlen(recv_buf),0)){
        string s(&recv_buf[0],&recv_buf[len]);
        int uid=-1;
        bool isok=false;
        string u_password="";
        string options=extraction(s,"[","]");
        if(options=="login"){
            string result="FALSE";
            int uid=atoi(extraction(s,"[","]",2).c_str());
            u_password=extraction(s,"[","]",3);
            if(db.check(uid)==u_password) result="TRUE";
            len=send(client_sockfd,result.c_str(),result.length(),0);
        }else{
            if(uid==-1) 
            int choice=s[s.length()-1];

        }
    }
    close(client_sockfd);
    close(server_sockfd);
}

int main(){
    init();
    process();
    //接收客户端的数据并将其发给客户端 --recv返回接收到的字节数，send返回发送的字节数
    /* while(true){
        len=recv(client_sockfd,recv_buf,BUFSIZ,0);
        string recv_buff(&recv_buf[0],&recv_buf[len]);
        process(recv_buff);
        if(len>0){
            recv_buf[len]='\0';
            cout<<"Received:"<<recv_buf<<",info length:"<<len<<"\n";
        }
        cout<<"Enter string to send:";
        cin>>send_buf;
        if(!strcmp(send_buf,"quit")) break;
        len=send(client_sockfd,send_buf,strlen(send_buf),0);
    } */
    //关闭套接字
    return 0;
}