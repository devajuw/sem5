import socket
def get_system_ip():
    try:
        hostname=socket.gethostname()
        ip_address=socket.gethostbyname(hostname)
        return ip_address
    except socket.error as e:
        return f"unable to get ip address:{e}"
if __name__=="__main__":
 system_ip=get_system_ip()
 print(f"the ip is : {system_ip}")