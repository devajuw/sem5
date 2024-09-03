import socket 
def get_system_info():

  try:

      hostname = socket.gethostname()

      ip_address = socket.gethostbyname (hostname)

      return hostname, ip_address

  except socket.error as e: 
     return None, f"Unable to get IP address: {e}"

if __name__ == "__main__":

    hostname, system_ip = get_system_info()

    if hostname:

       print(f"Hostname: {hostname}")
       print(f"IP Address: {system_ip}")

else: 
     print(system_ip) # This will print the error message