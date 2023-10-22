#    14) Write a function to find the domain name from the IP address. 
# The function will accept an IP address, make a DNS request, 
# and return the domain name that maps to that IP address while using records of PTR DNS.
# You can import the Python socket library.
import socket

def get_domain_name(ip_address):
    try:
        domain_name, _, _ = socket.gethostbyaddr(ip_address)
        return domain_name
    except socket.herror:
        return "Domain name not found"

ip_address = input("Enter an IP address: ")
domain = get_domain_name(ip_address)
print(f"IP Address: {ip_address}\nDomain Name: {domain}")
