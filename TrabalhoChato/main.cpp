#include <iostream>
#include <string>
using namespace std;

int main()
{
    int idade, viagem, signo, sabado, indiretas, i = 0;
    string pergunta, gosta;
    char gen;

    cout << "\nOla, vamos comecar um relatorio interativo para me ajudar na minha pesquisa?" << endl;
    cout << "\nPergunta 1" << endl;
    cout << "Quantos anos voce tem? ";
    cin >> idade;

    cout << "\nCaramba " << idade << " anos !!! Tudo isso?? Deve estar cansado, entao vamos prosseguir logo." << endl;
    cout << "\nPegunta 2" << endl;
    cout << "Voce ja fez quantas viagens internacionais e/ou nacionais? ";
    cin >> viagem;

    if(viagem <= 1){
        cout << "\nTecnicamente, se considerarmos deslocamento com pernoite fora de casa como viagem, talvez uma. Mas cada um no seu tempo, ne? " << endl;
    }else if ((viagem > 1) && (viagem <= 5)){
        cout << "\nQue chique! Ja pode ate abrir um blog de dicas genericas de viagem." << endl;
    }else if ((viagem > 5) && (viagem <=15)){
        cout << "\nE ainda lembra de cada uma ou ja virou um grande album de stories repetido?" << endl;
    }else{
        cout << "\nEntendi... entao basicamente sua personalidade e o aeroporto."<< endl;
    }

    cout << "\nPergunta 3" << endl;
    cout << "\nAgora, escolha o seu signo:";
    cout << "\n1- Aries" << endl;
    cout << "\n2- Touro" << endl;
    cout << "\n3- Gemeos" << endl;
    cout << "\n4- Cancer" << endl;
    cout << "\n5- Leao" << endl;
    cout << "\n6- Virgem" << endl;
    cout << "\n7- Libra" << endl;
    cout << "\n8- Escorpiao" << endl;
    cout << "\n9- Sagitario" << endl;
    cout << "\n10- Capricornio" << endl;
    cout << "\n11- Aquario" << endl;
    cout << "\n12- Peixes" << endl;
    cout << "Digite um numero: ";
    cin >> signo;


    switch(signo){
    case 1:
        cout << "\nAi, é tao inspirador ver alguem que confunde intensidade com falta de nocao.";
    break;
    case 2:
        cout << "\nAdmiro sua estabilidade… mesmo que ela seja so uma desculpa pra nao sair do lugar." << endl;
    break;
    case 3:
        cout << "\nE incrivel como voce consegue mudar de opiniao tao rapido e ainda achar que ta sendo profundo." << endl;
    break;
    case 4:
        cout << "\nNossa, voce sente tudo com tanta intensidade... deve ser dificil viver em 2025 estando preso em 2014." << endl;
    break;
    case 5:
        cout << "\nVoce ilumina qualquer lugar que entra, principalmente porque nao deixa espaço pra mais ninguem." << endl;
    break;
    case 6:
        cout << "\nE admiravel como voce sempre sabe o que esta errado... mesmo quando ninguém pediu seu parecer tecnico." << endl;
    break;
    case 7:
        cout << "\nVoce tem um talento incrivel pra agradar todo mundo, so falta lembrar quem voce e nesse processo." << endl;
    break;
    case 8:
        cout << "\nE tao bonito como voce confunde intensidade com controle emocional desastroso." << endl;
    break;
    case 9:
        cout << "\nAdoro como voce sempre fala o que pensa... mesmo quando claramente era melhor ter ficado quieto." << endl;
    break;
    case 10:
        cout << "\nVoce e tao focado... parece ate que sentimentos sao um obstaculo na sua planilha." << endl;
    break;
    case 11:
        cout << "\nGosto de como voce e diferente de todo mundo, inclusive quando tenta forcar isso o tempo todo." << endl;
    break;
    case 12:
        cout << "\nE incrivel como voce vive no mundo da lua e ainda espera que os outros te entendam sem dizer nada." << endl;
    break;
    default:
        cout << "\nAcho que voce e um ser extraterrestre para ter digitado um numero invalido! Boa!" << endl;
    }

    cout << "\nPergunta 4" << endl;
    cout << "Quantas indiretas voce quer receber hoje? ";
    cin >> indiretas;
    if(indiretas > 0){
        for (i=1; indiretas >= i; i++){
            cout << "1 e unica- Sua opinião é quase importante... em outra realidade." << endl;

        }
    }else if(indiretas<=0){
        cout << "1- Algumas pessoas brilham... outras so refletem a luz dos outros." << endl;

        cout << "2- Tem gente que acha que é profundo, mas so e confuso mesmo." << endl;

        cout << "3- Sua opiniao e quase importante... em outra realidade." << endl;

        cout << "4- Voce tem um talento incrível pra falar e nao dizer nada." << endl;

        cout << "5- Se esforco contasse, voce ja estaria quase comecando." << endl;

        cout << "6- Admiro sua confianca… ela sobrevive mesmo sem fundamento." << endl;

        cout << "7- Voce e unico. Ainda bem." << endl;

        cout << "8- Nao e todo mundo que consegue ser o problema em silencio. Parabens." << endl;

        cout << "9- Te escutar e como ver um trailer ruim: ja sei que o final vai decepcionar." << endl;

        cout << "10- Voce tem razao... pelo menos na propria cabeca." << endl;
        cout << "Ops... acho que me equivoquei..." << endl;
    }

    cout << "\nPergunta 5" << endl;
    cout << "Do que gosta de fazer?" << endl;
    cin.ignore();
    getline(cin, gosta);
    cout << "Meu Deus, acho que " << gosta << " seria a ultima coisa que escolheria para fazer no meu tempo livre" << endl;

    cout << "\nPergunta 6" << endl;
    cout << "Voce gosta de qual genero para ler/assistir: " << endl;
    cout << "\nA- Romance" << endl;
    cout << "\nB- Terror" << endl;
    cout << "\nC- Comedia" << endl;
    cin >> gen;
    switch(gen){
    case'A':
        cout << "Ah, romance... que bom que voce ainda acredita em dialogos que funcionam e finais felizes. E fofo, quase infantil." << endl;
    break;
    case'B':
        cout << "Claro, adoro ver gente tomando decisoes idiotas e fingindo que e assustador. Super realista, ne?" << endl;
    break;
    case'C':
        cout << "Comedia? Sim, rir de piadas recicladas e quase uma forma de arte hoje em dia." << endl;
    break;
    default:
        cout << "\nAcho que voce e um ser extraterrestre para ter digitado um numero invalido! Boa!" << endl;
    }

    cout << "\nPergunta 7" << endl;
    cout << "Sabado de verao, nao tem nenhum compromisso: o que voce faria: " << endl;
    cout << "1- Vou a praia curtir com os amigos" << endl;
    cout << "2- Prefiro ficar em casa lendo um livro ou assistindo filme" << endl;
    cout << "3- Vou a casa de um amigo jogar jogo de tabuleiro" << endl;
    cout << "4 - Tenho que ver com meu marido/ esposa o que faremos com as criancas" << endl;
    cin >> sabado;

    if(sabado==1){
        cout << "Ai que inveja... deve ser otimo ter energia infinita e amigos que sempre estao disponiveis pra foto no por do sol." << endl;
    }else if(sabado==2){
        cout << "Claro, nada como fugir do calor, das pessoas e da vida real tudo ao mesmo tempo. Super produtivo." << endl;
    }else if(sabado==3){
        cout << "Ah, sim, porque nada diz verao como 4 horas discutindo regras e estatisticas enquanto sua socializacao acontece em turnos." << endl;
    }else{
        cout << "Entendo... sua folga virou reuniao de planejamento familiar. Liberdade e um conceito tao abstrato, ne?" << endl;
    }

    cout << "\nPergunta 8" << endl;
    cout << "Agora sua vez de perguntar: " << endl;
    cin.ignore();
    getline(cin, pergunta);
    cout << "Resposta: Nao sei responder!" << endl;
    for (i=0; i < 3; i++){
        cout << "\nTente novamente fazer uma pergunta: " << endl;
        getline(cin, pergunta);
        cout << "Resposta: Nao sei responder!" << endl;
    }

    cout << "\n Ei!!!Ja cansei de dizer que nao sei responder!!" << endl;
    cout << "TCHAU!!";

    return 0;
}
