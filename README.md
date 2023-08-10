Ransomware README

Versão: 20.1.1

Este código é um exemplo simples da versão original do Ransomware, que ilustra várias técnicas de criptografia, manipulação de arquivos e comunicação com servidores remotos. No entanto, a utilização deste código para qualquer finalidade maliciosa é estritamente proibida e ilegal.

O ransomware é um tipo de malware que sequestra os arquivos de um sistema, criptografando-os e exigindo um pagamento (normalmente em criptomoedas) para fornecer a chave de descriptografia. O ransomware-simple.cpp apresentado neste código simula um comportamento mais simples baseado na verção original do ransomware (version 20.1.1) protegido pelo autor. O código original não deve ser usado de maneira maliciosa.

Compilação e Execução do código original

Para compilar e executar o ransomware, você precisará de um ambiente de desenvolvimento C++ configurado com as bibliotecas mencionadas no código. Além disso, ajuste os caminhos de arquivo conforme necessário. Siga estas etapas:

    Certifique-se de que todas as bibliotecas listadas no código estejam instaladas e configuradas corretamente.
    Abra o arquivo main.cpp em um ambiente de desenvolvimento C++.
    Configure as opções, como idioma, endereços Bitcoin, caminhos de arquivo, etc., conforme necessário.
    Compile o código para criar o executável.
    Execute o executável em um ambiente controlado e seguro para fins educacionais.


Bibliotecas Utilizadas no código original

O código utiliza diversas bibliotecas para realizar as operações necessárias:

    windows.h: Biblioteca para chamadas de sistema no ambiente Windows.
    iostream, fstream, string, filesystem, vector, memory: Bibliotecas para manipulação de arquivos e strings.
    openssl: Biblioteca para criptografia e funções relacionadas.
    curl: Biblioteca para comunicação HTTP.
    SFML: Biblioteca gráfica.
    winsock2.h, ws2tcpip.h: Bibliotecas para comunicação em rede.
    ctime: Biblioteca para manipulação de data e hora.
    wincrypt.h: Biblioteca para criptografia de dados.
    intrin.h: Biblioteca para funções intrínsecas.

Funcionalidades no código original

O ransomware implementado possui as seguintes funcionalidades:

	    Depuração: O código verifica se o programa está sendo depurado, tentando encerrar qualquer ferramenta de depuração. Isso é feito para evitar análises do programa.

	    Criptografia de Arquivos: O ransomware criptografa arquivos usando o algoritmo AES-256 GCM (Advanced Encryption Standard com modo Galois Counter Mode). Somente arquivos com extensões específicas serão alvo da criptografia.

	    Geração de Chaves RSA: O ransomware gera um par de chaves RSA (Rivest-Shamir-Adleman) com um tamanho de 8192 bits. A chave pública é usada para criptografar a chave AES, enquanto a chave privada é usada para descriptografar a chave AES posteriormente.

	    Envio da Chave Pública: O programa envia a chave pública RSA para um servidor remoto. A chave pública é armazenada no servidor, e a chave privada é mantida no programa ransomware.

	    Criação de Mensagem Ransom: Uma mensagem de resgate é gerada em diferentes idiomas, exigindo um pagamento em Bitcoin para recuperar os arquivos. A mensagem é salva em um arquivo chamado "read_me.txt".

	    Alteração do Papel de Parede: O ransomware altera o papel de parede do desktop da vítima para mostrar uma mensagem intimidadora.

	    Criação de Sistema Corrompido: O ransomware simula corrupção no sistema, exibindo uma mensagem indicando que os arquivos do sistema estão corrompidos e que o sistema não pode ser iniciado.

	    Exclusão de Arquivos: O ransomware exclui todos os arquivos no diretório especificado e adiciona uma mensagem de sistema corrompido em um arquivo específico.

	    Sobrescrita do MBR: O ransomware sobrescreve o Master Boot Record (MBR) do disco rígido, tornando o sistema inacessível.

	    Criptografia do Registro do Windows: O ransomware criptografa uma entrada no Registro do Windows, que geralmente é usada para executar programas na inicialização do sistema.

	    Infecção de Unidades USB: O programa tenta se espalhar para unidades USB conectadas ao sistema da vítima, criptografando arquivos nessas unidades.

	    Infecção em Rede: O programa tenta se espalhar pela rede, buscando vulnerabilidades em máquinas remotas e criptografando arquivos nelas.

Advertência

Este ransomware é um código de exemplo para fins educacionais e não deve ser usado de maneira maliciosa. A execução do ransomware em qualquer ambiente ou sistema sem autorização adequada é ilegal e antiético. O código fornecido não deve ser usado para causar danos ou cometer atividades ilegais. O uso incorreto deste código pode resultar em consequências legais graves.

Contribuição

AVISO: Este código foi desenvolvido com propósito educacional e de demonstração, entretanto, o criador não permite a modificação e alteração do código. Caso contrário, o autor original não se responsibiliza por quaisquer fins ilícitos. É importante observar que o código encontre-se incompleto e sem partes essenciais para garantir a segurança.
