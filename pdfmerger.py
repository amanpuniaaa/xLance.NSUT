import os
from PyPDF2 import PdfFileMerger
import warnings

def fxn():
    warnings.warn("deprecated", DeprecationWarning)

with warnings.catch_warnings():
    warnings.simplefilter("ignore")
    fxn()

def pdfs():    #returns a list of all images in a folder
    l=[]
    for j in os.listdir():
        l.append(j)
    t=[]
    for i in l:
        if i.endswith('pdf'):
            i=i.split('.')
            if len(i)==3:  
                i=int(i[1])
            else:
                i=float(i[1]+'.'+i[2])
            t.append(i)
    t.sort()
    pdflist=[]
    for i in t:
        pdflist.append('Ch.'+str(i)+'.pdf')
    return pdflist
    
def pdfmerger(name):
    pdfs1=[
      ""
        ]
    merger = PdfFileMerger()
    for pdf in pdfs1:
        merger.append(pdf)
    merger.write(name+'.pdf')
    merger.close()
# print(os.listdir())
name=input('Enter name of final pdf :')
pdfmerger(name)
