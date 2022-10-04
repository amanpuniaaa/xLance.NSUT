import os
import socket
import time
def check():
    IP=socket. gethostbyname(socket. gethostname())
    if IP=='127.0.0.1':
        return False
    else:
        return True
def createNewConnection(name, SSID, password):
    config = """<?xml version=\"1.0\"?>
<WLANProfile xmlns="http://www.microsoft.com/networking/WLAN/profile/v1">
    <name>"""+name+"""</name>
    <SSIDConfig>
        <SSID>
            <name>"""+SSID+"""</name>
        </SSID>
    </SSIDConfig>
    <connectionType>ESS</connectionType>
    <connectionMode>auto</connectionMode>
    <MSM>
        <security>
            <authEncryption>
                <authentication>WPA2PSK</authentication>
                <encryption>AES</encryption>
                <useOneX>false</useOneX>
            </authEncryption>
            <sharedKey>
                <keyType>passPhrase</keyType>
                <protected>false</protected>
                <keyMaterial>"""+password+"""</keyMaterial>
            </sharedKey>
        </security>
    </MSM>
</WLANProfile>"""
    command = "netsh wlan add profile filename=\""+name+".xml\""+" interface=Wi-Fi"
    with open(name+".xml", 'w') as file:
        file.write(config)
    print(os.popen(command).read())
   
def connect(name, SSID):
    command = "netsh wlan connect name=\""+name+"\" ssid=\""+SSID+"\" interface=Wi-Fi"
    print(os.popen(command).read())
     
def displayAvailableNetworks():
    command = "netsh wlan show networks interface=Wi-Fi"
    print(os.popen(command).read())
displayAvailableNetworks()
  
# input wifi name and password
name = input("Name of Wi-Fi: ")
while True:
    password = input("Password: ")
    # establish new connection
    createNewConnection(name, name, password)
    # connect to the wifi network
    connect(name, name)
    time.sleep(0.5)
    if check()==True:
        break
    #print("If you aren't connected to this network, try connecting with the correct password!")


