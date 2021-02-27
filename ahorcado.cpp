#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <time.h>
#include <cstddef>
#include <cstring>

static const char* const words[406] = {"alquiler" ,"realeza" ,"instantes" ,"sacerdotes" ,"nocturno" ,"sufragio" ,"válida" ,"imprudente" ,"conejo" ,"quinientos" ,"guitarrista" ,"inyección" ,"recepción" ,"huevo" ,"imperio" ,"nómina" ,"narrador" ,"papel" ,"transmitido" ,"merecido" ,"carretera" ,"finalización" ,"propuestas" ,"civilización" ,"sebastian" ,"territorial" ,"presidenta" ,"dirigente" ,"preciosas" ,"ciudad" ,"conocer" ,"sorprendida" ,"volante" ,"escapar" ,"montón" ,"ensalada" ,"deshacer" ,"infeliz" ,"coger" ,"emitir" ,"semblante" ,"silvestre" ,"traje" ,"pulmón" ,"traidores" ,"ambulancia" ,"siglas" ,"equipos" ,"malditas" ,"compatible" ,"batido" ,"difusión" ,"fiscales" ,"cazar" ,"coger" ,"tigres" ,"aterrador" ,"oculta" ,"vocalista" ,"conectado" ,"dinámica" ,"anatomía" ,"caracol" ,"sesos" ,"estallar" ,"planetas" ,"lagarto" ,"infinita" ,"conejo" ,"reconstrucción" ,"torneo" ,"montado" ,"pájaro" ,"cliente" ,"peligrosas" ,"territorio" ,"aniversario" ,"pasajes" ,"evaluar" ,"teclado" ,"cuidadoso" ,"prohibición" ,"rendimiento" ,"alfa" ,"viajero" ,"conversación" ,"soledad" ,"trigo" ,"salones" ,"escape" ,"plazo" ,"reportaje" ,"tranquilos" ,"obrero" ,"romántica" ,"arquitectura" ,"acelerar" ,"masculino" ,"hermanito" ,"suelto" ,"crimen" ,"imponer" ,"gruesa" ,"grasa" ,"misión" ,"mensaje" ,"rehenes" ,"minería" ,"activar" ,"mitología" ,"estadio" ,"hambre" ,"abrigo" ,"ricas" ,"sorprendida" ,"darnos" ,"sobredosis" ,"activa" ,"almohada" ,"afecto" ,"flaco" ,"órbita" ,"charla" ,"comprometido" ,"muelle" ,"escenario" ,"plata" ,"mensual" ,"prensa" ,"suspendido" ,"valentía" ,"cuñado" ,"inyección" ,"poderoso" ,"mala" ,"injusto" ,"biografía" ,"vena" ,"pequeña" ,"integral" ,"actitudes" ,"panda" ,"sol" ,"delegado" ,"superiores" ,"puntaje" ,"reacciones" ,"bate" ,"comercial" ,"disgusto" ,"esclavitud" ,"sesiones" ,"afluente" ,"jinete" ,"contratación" ,"billetera" ,"doctorado" ,"canción" ,"pariente" ,"reportes" ,"pais" ,"mangas" ,"revertir" ,"creatividad" ,"escultura" ,"viajar" ,"cuidados" ,"tren" ,"orinar" ,"ventana" ,"inundación" ,"beber" ,"judía" ,"clásico" ,"aroma" ,"amanecer" ,"metal" ,"juvenil" ,"cumbre" ,"científico" ,"compensación" ,"subir" ,"trato" ,"rincón" ,"herencia" ,"tubo" ,"enterado" ,"reina" ,"desayunar" ,"plataformas" ,"arena" ,"daño" ,"casero" ,"moreno" ,"denunciar" ,"suposición" ,"génesis" ,"expresar" ,"cantante" ,"inminente" ,"oir" ,"azúcar" ,"ruptura" ,"asesino" ,"voluntad" ,"énfasis" ,"enfermo" ,"infraestructura" ,"cobre" ,"regalo" ,"velo" ,"pacientes" ,"permisos" ,"murallas" ,"comunicación" ,"testigo" ,"consideración" ,"profundidad" ,"proximidad" ,"calentamiento" ,"aprendiz" ,"salchichas" ,"interrogatorio" ,"sentimental" ,"mandado" ,"usados" ,"carnaval" ,"frio" ,"barato" ,"sana" ,"instancia" ,"porquería" ,"decadencia" ,"cretácico" ,"simpática" ,"vencedor" ,"monstruo" ,"imaginación" ,"síntesis" ,"calidad" ,"costado" ,"rubio" ,"creciendo" ,"bandera" ,"consultar" ,"pandilla" ,"ardiente" ,"asilo" ,"niñez" ,"prisión" ,"divertida" ,"atento" ,"escenas" ,"regionales" ,"señorita" ,"pimienta" ,"palmas" ,"entretenimiento" ,"martillo" ,"progresivo" ,"masaje" ,"fabricación" ,"portátil" ,"diamante" ,"museo" ,"instrucción" ,"desesperación" ,"maestría" ,"turno" ,"chofer" ,"luchas" ,"talento" ,"brutal" ,"atraco" ,"sillas" ,"ordinaria" ,"desafortunado" ,"caos" ,"negociación" ,"finalización" ,"tercero" ,"ocultar" ,"limpio" ,"teléfonos" ,"inferior" ,"autoría" ,"herir" ,"resaltar" ,"recto" ,"patriarca" ,"contienda" ,"contraseña" ,"relevo" ,"dedicación" ,"incorrecta" ,"divina" ,"jinete" ,"sumar" ,"votación" ,"freno" ,"mensaje" ,"meridional" ,"rencor" ,"noche" ,"fresca" ,"públicamente" ,"emisora" ,"parque" ,"fraude" ,"retomar" ,"rito" ,"versos" ,"salón" ,"palacio" ,"ático" ,"ayer" ,"periodista" ,"miércoles" ,"emocionado" ,"emboscada" ,"cabello" ,"disputar" ,"salones" ,"dimisión" ,"sorprendido" ,"futuro" ,"eliminar" ,"desayuno" ,"superficial" ,"corral" ,"taberna" ,"tranvía" ,"cifra" ,"cabina" ,"ganador" ,"rana" ,"acelera" ,"oponente" ,"accidente" ,"negociaciones" ,"vender" ,"calvo" ,"intereses" ,"extinción" ,"patear" ,"monje" ,"patrullas" ,"reputación" ,"soñar" ,"violenta" ,"rocas" ,"escenario" ,"dinosaurio" ,"azul" ,"confundir" ,"reservas" ,"flaco" ,"alteza" ,"salomón" ,"tragedia" ,"tasa" ,"monitor" ,"consejos" ,"queso" ,"error" ,"republicanos" ,"solicitud" ,"puros" ,"honestidad" ,"citados" ,"felicidad" ,"dental" ,"amargo" ,"virreinato" ,"malvado" ,"creativo" ,"suspendido" ,"magia" ,"corrección" ,"filósofo" ,"destrozado" ,"elevado" ,"camioneta" ,"reunir" ,"bata" ,"acrónimo" ,"sostenible" ,"caballero" ,"invencible" ,"ayudar" ,"mosca" ,"autor" ,"órganos" ,"actriz" ,"marchar" ,"hierba" ,"dibujo" ,"percepción" ,"recreo" ,"ordenadas" ,"resumen" ,"frágil" ,"felicitaciones" ,"bancarrota" ,"aire" ,"misterios"};
static int f = 0;
static char* used;

  class Console {
  	public:
	static void WriteLine(const char* text) {
		printf("%s\n", text);
	}
	static void Write(const char* text) {
		printf("%s", text);
	}
	static int readLineInt() {
		int i = 0;
		scanf("%i", &i);
		while(getchar() != '\n');
		return i;
	}
	static int readLineFloat() {
		float f = 0;
		scanf("%f", &f);
		while(getchar() != '\n');
		return f;
	}
	static char readLineChar() {
		char c;
		scanf("%c", &c);
		while(getchar() != '\n');
		return c;
	}
	static void setUTF8() {
			setlocale(LC_ALL, "");
	}
};
class Integer {
	public:
		static bool isInteger(int i) {
			if(i == '\0') {
				return false;
			}
			return true;
		}
		static int parseInt(char* n) {
			int i = 0;
			i = atoi(n);
			return i;
		}
};
class String {
	public:
	static char* valueOf(int i) {
 static char buff[56];
    snprintf(buff, sizeof(buff), "%i", i);
return buff;
		}
		static char* valueOf(float f) {
static char buff[56];
    snprintf(buff, sizeof(buff), "%f", f);
return buff;

	}
};

void addCharToUsed(char c) {
size_t n = sizeof(words) / sizeof(const char*);
used[n] = c;
}

char detectChar(char c) {
	if(c == '¤') {
		}
	return c;
}
void displayUsedWords() {
size_t n = sizeof(words) / sizeof(const char*);
if(n == 0) {
	
} else if(n == 1) {
	printf("Palabra usada: %c\n", used[0]);
} else {
	Console::Write("Palabras usadas: ");
	for(int i = 0; i < n; i++) {
		printf("%c ", used[i]);
	}
	Console::WriteLine("");
}
}

char convertChar(char c) {
	if(c == 'é') {
		return 'e';
	}
	if(c == 'í') {
		return 'i';
	}
	if(c == 'ó') {
		return 'o';
	}
	if(c == 'á') {
		return 'a';
	}
	return c;
}

int getRandomNumber() {
size_t n = sizeof(words) / sizeof(const char*);
int nRandonNumber = rand() % n;
return nRandonNumber;
}

const char* generateRandomWord(){
return words[getRandomNumber()];
}

void writeTitle() {
	/*Console::WriteLine("    #                                                     ");
	Console::WriteLine("   # #   #    #  ####  #####   ####    ##   #####   ####  ");
	Console::WriteLine("  #   #  #    # #    # #    # #    #  #  #  #    # #    # ");
	Console::WriteLine(" #     # ###### #    # #    # #      #    # #    # #    # ");
	Console::WriteLine(" ####### #    # #    # #####  #      ###### #    # #    # ");
	Console::WriteLine(" #     # #    # #    # #   #  #    # #    # #    # #    # ");
	Console::WriteLine(" #     # #    #  ####  #    #  ####  #    # #####   ####  ");
	Console::WriteLine("");*/
}
void writePJ(int f) {
	if(f == 0) {
	Console::WriteLine(" |--------");
	Console::WriteLine(" |       |");
	Console::WriteLine(" |      ###	");
	Console::WriteLine(" |     #   #");
	Console::WriteLine(" |      ###");
	Console::WriteLine(" |       #");
	Console::WriteLine(" |   #########");
	Console::WriteLine(" |	 #");
	Console::WriteLine(" |	 #");
	Console::WriteLine(" |      # #");
	Console::WriteLine(" |    ##   ##");
	Console::WriteLine(" |");
	Console::WriteLine(" |");
	Console::WriteLine("/ \\");
	Console::WriteLine("");
} else if(f == 1) {
	Console::WriteLine(" |--------");
	Console::WriteLine(" |       |");
	Console::WriteLine(" |      ###	");
	Console::WriteLine(" |     #   #");
	Console::WriteLine(" |      ###");
	Console::WriteLine(" |       #");
	Console::WriteLine(" |   #########");
	Console::WriteLine(" |	 #");
	Console::WriteLine(" |	 #");
	Console::WriteLine(" |      # ");
	Console::WriteLine(" |    ##   ");
	Console::WriteLine(" |");
	Console::WriteLine(" |");
	Console::WriteLine("/ \\");
	Console::WriteLine("");	
} else if(f == 2) {
	Console::WriteLine(" |--------");
	Console::WriteLine(" |       |");
	Console::WriteLine(" |      ###	");
	Console::WriteLine(" |     #   #");
	Console::WriteLine(" |      ###");
	Console::WriteLine(" |       #");
	Console::WriteLine(" |   #########");
	Console::WriteLine(" |	 #");
	Console::WriteLine(" |	 #");
	Console::WriteLine(" |       ");
	Console::WriteLine(" |       ");
	Console::WriteLine(" |");
	Console::WriteLine(" |");
	Console::WriteLine("/ \\");
	Console::WriteLine("");		
} else if(f == 3) {
	Console::WriteLine(" |--------");
	Console::WriteLine(" |       |");
	Console::WriteLine(" |      ###	");
	Console::WriteLine(" |     #   #");
	Console::WriteLine(" |      ###");
	Console::WriteLine(" |       #");
	Console::WriteLine(" |   #########");
	Console::WriteLine(" |	 ");
	Console::WriteLine(" |	 ");
	Console::WriteLine(" |       ");
	Console::WriteLine(" |       ");
	Console::WriteLine(" |");
	Console::WriteLine(" |");
	Console::WriteLine("/ \\");
	Console::WriteLine("");	
} else if(f == 4) {
	Console::WriteLine(" |--------");
	Console::WriteLine(" |       |");
	Console::WriteLine(" |      ###	");
	Console::WriteLine(" |     #   #");
	Console::WriteLine(" |      ###");
	Console::WriteLine(" |       #");
	Console::WriteLine(" |   #####");
	Console::WriteLine(" |	 ");
	Console::WriteLine(" |	 ");
	Console::WriteLine(" |       ");
	Console::WriteLine(" |       ");
	Console::WriteLine(" |");
	Console::WriteLine(" |");
	Console::WriteLine("/ \\");
	Console::WriteLine("");	
} else if(f == 5) {
	Console::WriteLine(" |--------");
	Console::WriteLine(" |       |");
	Console::WriteLine(" |      ###	");
	Console::WriteLine(" |     #   #");
	Console::WriteLine(" |      ###");
	Console::WriteLine(" |       #");
	Console::WriteLine(" |   ");
	Console::WriteLine(" |	 ");
	Console::WriteLine(" |	 ");
	Console::WriteLine(" |       ");
	Console::WriteLine(" |       ");
	Console::WriteLine(" |");
	Console::WriteLine(" |");
	Console::WriteLine("/ \\");
	Console::WriteLine("");	
}
}

bool hasFinished(char* w) {
	for(int i = 0; i<strlen(w); i++) {
		if(w[i] == '_') {
			return true;
		}
     }
     system("cls");
		Console::WriteLine("¡Has ganado!");
		return false;
}

char* convert(const char* word, char* w, char c) {
	char* n = w;
	int ct = 0;
	for(int i = 0; i<strlen(word)+1; i++) {
	if(convertChar(word[i]) == detectChar(c)) {
		n[i] = word[i];
	} else {
		ct++;
	}
	}
	if(strlen(word)+1 == ct) {
		f++;
	}
	return n;
}

void startGame(const char* word) {
	char w[strlen(word)];
for(int i = 0; i < strlen(word); i++) {
		w[i] = '_';
	}
	
	
	while(hasFinished(w)) {
		if(f == 6) {
			break;
			return;
		}
	Console::Write("Palabra: ");
	for(int i = 0; i < strlen(word); i++) {
		printf("%c ", w[i]);
	}
	Console::WriteLine("");
	Console::WriteLine("");
	Console::WriteLine("Escriba una letra");
	char c = Console::readLineChar();
	char* n = convert(word, w, c);
	for(int i = 0; i<strlen(w); i++)  {
		w[i] = n[i];
	}
	system("cls");
	writeTitle();
	writePJ(f);
}
}

bool playAgain(const char* word) {
	while(true) {
		Console::Write("Palabra: ");
	for(int i = 0; i < strlen(word); i++) {
		printf("%c ", word[i]);
	}Console::WriteLine("");Console::WriteLine("");
		if(f == 6) {
			Console::WriteLine("¡Has perdido!");
		}
		Console::WriteLine("-------------------------");
Console::WriteLine("¿Quieres jugar de nuevo?");
		Console::WriteLine("[1] Sí");
		Console::WriteLine("[0] No");
		Console::WriteLine("-------------------------");
		int playAgain = Console::readLineInt();
		if(playAgain == 1) {
			return true;
		} else if(playAgain == 0) {
			return false;
		} else {
			Console::WriteLine("No has escrito un número de la lista");
			getchar();
			system("cls");
			return false;
		}
}
}

int main() {
	Console::setUTF8();
	f = 0;
	srand(time(NULL));
	const char* word = generateRandomWord();
//	Console::WriteLine(word);
	writeTitle();
	writePJ(f);
	startGame(word);
	if(playAgain(word)) {
		system("cls");
		return main();
	}
	getchar();
	return 0;
}
