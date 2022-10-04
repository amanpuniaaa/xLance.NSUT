import nmap

scanner = nmap.PortScanner()

print("Welcome to NMAP Port Scanner ")
print("<------------------------------------------------------->")

# ip_addr = input("Enter the ip address you want to scan : ")
ip_addr = "192.168.1.29"


print("IP address is :",ip_addr)

resp = int(input("""
Please Enter the type of scan you want to perform :
1. SYNC SCAN
2. UDP SCAN
3. COMPREHENSIVE SCAN
"""))

print("You have selected option",resp)

if resp == 1:
    print("NMAP VERSION : ",scanner.nmap_version())
    scanner.scan(ip_addr,'1-1024','-v -sS')
    print(scanner.scaninfo())
    print("IP STATUS : ",scanner[ip_addr].state())
    print("PROTOCOLS : ",scanner[ip_addr].all_protocols())
    print("OPEN PORTS : ",scanner[ip_addr]['tcp'].keys() )

elif resp == 2:
    print("NMAP VERSION : ",scanner.nmap_version())
    scanner.scan(ip_addr,'1-1024','-v -sU')
    print(scanner.scaninfo())
    print("IP STATUS : ",scanner[ip_addr].state())
    print("PROTOCOLS : ",scanner[ip_addr].all_protocols())
    print("Open Ports : ",scanner[ip_addr]["udp"].keys() )

elif resp == 3:
    print("NMAP VERSION : ",scanner.nmap_version())
    scanner.scan(ip_addr,'1-1024','-v -sS -sV -sC -A -O')
    print(scanner.scaninfo())
    print("IP STATUS : ",scanner[ip_addr].state())
    print("PROTOCOLS : ",scanner[ip_addr].all_protocols())
    print("OPEN PORTS : ",scanner[ip_addr]['tcp'].keys() )
else:
    print("Invalid option.")
