import subprocess


#reinica el sistema por la bios en 60 segundos
def reiniciar():
    subprocess.run("shutdown /r /fw /t 60", shell=True)