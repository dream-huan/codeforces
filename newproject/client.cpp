#include<bits/stdc++.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

using namespace std;

int main(){
    int client_sockfd;
    int len;
    struct sockaddr_in remoto_addr;
    char recv_buf[BUFSIZ];
    char send_buf[BUFSIZ];
    memset(&remoto_addr,0,sizeof(remoto_addr));
    remoto_addr.sin_family=AF_INET;
    remoto_addr.sin_addr.s_addr=inet_addr("172.17.0.1");
    remoto_addr.sin_port=htons(8008);
    //创建客户端套接字ipv4 tcp
    if((client_sockfd=socket(PF_INET,SOCK_STREAM,0))<0){
        cout<<"socket error,line:"<<__LINE__<<"\n";
        exit(-1);
    }
    //绑定服务器的ip地址
    if(connect(client_sockfd,(struct sockaddr*)&remoto_addr,sizeof(struct sockaddr))<0){
        cout<<"connect error,line:"<<__LINE__<<"\n";
        exit(-1);
    }
    cout<<"connect success"<<"\n";
    len=recv(client_sockfd,recv_buf,BUFSIZ,0);
    recv_buf[len]='\0';
    while(true){
        cout<<"Enter string to send:";
        cin>>send_buf;
        if(!strcmp(send_buf,"quit")) break;
        len=send(client_sockfd,send_buf,strlen(send_buf),0);
        //从客户端接收消息
        len=recv(client_sockfd,recv_buf,BUFSIZ,0);
        if(len>0){
            recv_buf[len]='\0';
            cout<<"Received:"<<recv_buf<<",info length:"<<len<<"\n";
        }
    }
    close(client_sockfd);
    return 0;

}