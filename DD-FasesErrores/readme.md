
readme.md 

// En este documento iremoas transcribiendo cada comando ingresado por consola y mostrando los resultados u errores arrojados en cada fase de traduccion 




c:\UNIVERSIDAD\SSL\tp1errores>cd c:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1		// Accedo al directorio donde contengo mi archivo helloWorld.cd
errores

c:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>md c:\Users\Emiliano\Docu		// Lo establezco como mi directorio raiz de trabajo por consola
ments\UNIVERSIDAD\SSL\tp1errores
Ya existe el subdirectorio o el archivo c:\Users\Emiliano\Documents\UNIVERSIDAD\			
SSL\tp1errores.

c:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>dir
 El volumen de la unidad C no tiene etiqueta.
 El número de serie del volumen es: D20A-0365

 Directorio de c:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores

16/04/2018  11:22 a.m.    <DIR>          .
16/04/2018  11:22 a.m.    <DIR>          ..
16/04/2018  11:22 a.m.                85 helloWorld.c
               1 archivos             85 bytes
               2 dirs  260.762.550.272 bytes libres
			   
			   
// 2. Preprocesar hello2.c, no compilar, y generar hello2.i. Analizar su
contenido. //

----------------- Resultado de preprocesamiento del archivo hello2.c :	---------------------------------------------------------------------------------------

C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>gcc hello2.c -E



  int __attribute__((__cdecl__)) fwprintf(FILE * __restrict__ _File,const wchar_
t * __restrict__ _Format,...);
  int __attribute__((__cdecl__)) wprintf(const wchar_t * __restrict__ _Format,..
.);
  int __attribute__((__cdecl__)) vfwprintf(FILE * __restrict__ _File,const wchar
_t * __restrict__ _Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vwprintf(const wchar_t * __restrict__ _Format,v
a_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) swprintf(wchar_
t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) vswprintf(wchar
_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
# 799 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-
mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfsopen(cons
t wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t __attribute__((__cdecl__)) fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwchar(v
oid);
  wint_t __attribute__((__cdecl__)) fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwchar(w
char_t _Ch);
  wint_t __attribute__((__cdecl__)) getwc(FILE *_File);
  wint_t __attribute__((__cdecl__)) getwchar(void);
  wint_t __attribute__((__cdecl__)) putwc(wchar_t _Ch,FILE *_File);
  wint_t __attribute__((__cdecl__)) putwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__attribute__((__cdecl__)) fgetws(wchar_t * __restrict__ _Dst,int _Si
zeInWords,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) fputws(const wchar_t * __restrict__ _Str,FILE *
 __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws(wch
ar_t *_String) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putws(const wc
har_t *_Str);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf(cons
t wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_l(wch
ar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_loc
ale_t locale,... ) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c(wch
ar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Fo
rmat,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c(wc
har_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _F
ormat,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf(wcha
r_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...)
 ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf(wch
ar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_
list _Args) ;








  int __attribute__((__cdecl__)) __ms_snwprintf (wchar_t * __restrict__ s, size_
t n, const wchar_t * __restrict__ format, ...);
  int __attribute__((__cdecl__)) __ms_vsnwprintf (wchar_t * __restrict__ , size_
t, const wchar_t * __restrict__ , va_list);
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict_
_ format, ...)
  {
    int r;
    va_list argp;
    __builtin_va_start (argp, format);
    r = _vsnwprintf (s, n, format, argp);
    __builtin_va_end (argp);
    return r;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) vsnwprintf (wchar_t * __restrict__ s, size_t n,
 const wchar_t * __restrict__ format, va_list arg)
  {
    return _vsnwprintf(s,n,format,arg);
  }





  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p(FIL
E * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p(cons
t wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p(FI
LE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p(con
st wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p(wch
ar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Forma
t,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_p(wc
har_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Form
at,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p(co
nst wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_p(c
onst wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_l(cons
t wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p_l(co
nst wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_l(con
st wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p_l(c
onst wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_l(FIL
E * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,..
.);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p_l(F
ILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,
...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_l(FI
LE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,v
a_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p_l(
FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale
,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c_l(w
char_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _For
mat,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p_l(w
char_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _For
mat,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c_l(
wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Fo
rmat,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_p_l(
wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Fo
rmat,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_l(co
nst wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p_l(
const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_p_l
(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_l(wc
har_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Form
at,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_l(w
char_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _For
mat,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf(wchar
_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf(wcha
r_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __swprintf_l(wc
har_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Ploci
nfo,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_l(wc
har_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_lo
cale_t locale,va_list argptr) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __vswprintf_l(w
char_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Ploc
info,va_list _Args) ;
# 892 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-
mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtempnam(
const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf(con
st wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_l(c
onst wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwscanf_l(FILE
 * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...
) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swscanf_l(cons
t wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Lo
cale,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf(const
 wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Form
at,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_l(con
st wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Fo
rmat,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wscanf_l(const
 wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfdopen(int
_FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfopen(const
 wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfreopen(con
st wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __
restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wperror(const
 wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wpopen(const
 wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wremove(const
wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtmpnam(w
char_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwc_nolo
ck(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwc_nolo
ck(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _ungetwc_nol
ock(wint_t _Ch,FILE *_File);
# 947 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-
mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _lock_file(FIL
E *_File);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _unlock_file(F
ILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fclose_nolock(
FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fflush_nolock(
FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_noloc
k(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restric
t__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseek_nolock(F
ILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _ftell_nolock(
FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _
fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl
__)) _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fwrite_nolo
ck(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restric
t__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ungetc_nolock(
int _Ch,FILE *_File);





  char *__attribute__((__cdecl__)) tempnam(const char *_Directory,const char *_F
ilePrefix) ;
  int __attribute__((__cdecl__)) fcloseall(void) ;
  FILE *__attribute__((__cdecl__)) fdopen(int _FileHandle,const char *_Format) ;

  int __attribute__((__cdecl__)) fgetchar(void) ;
  int __attribute__((__cdecl__)) fileno(FILE *_File) ;
  int __attribute__((__cdecl__)) flushall(void) ;
  int __attribute__((__cdecl__)) fputchar(int _Ch) ;
  int __attribute__((__cdecl__)) getw(FILE *_File) ;
  int __attribute__((__cdecl__)) putw(int _Ch,FILE *_File) ;
  int __attribute__((__cdecl__)) rmtmp(void) ;
# 989 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-
mingw32/include/stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_wide_utf8 (const wchar_t * const wptr
, char **mbptr, size_t * buflen);
# 1003 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64
-mingw32/include/stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_utf8_wide (const char *const mbptr, w
char_t ** wptr, size_t * buflen);
# 1012 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64
-mingw32/include/stdio.h" 3
void __attribute__((__cdecl__)) __mingw_str_free(void *ptr);







#pragma pack(pop)

# 1 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-mi
ngw32/include/sec_api/stdio_s.h" 1 3
# 9 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-mi
ngw32/include/sec_api/stdio_s.h" 3
# 1 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-mi
ngw32/include/stdio.h" 1 3
# 10 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-m
ingw32/include/sec_api/stdio_s.h" 2 3
# 1023 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64
-mingw32/include/stdio.h" 2 3

# 1 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-mi
ngw32/include/_mingw_print_pop.h" 1 3
# 1025 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64
-mingw32/include/stdio.h" 2 3
# 3 "hello2.c" 2
int main(void){
int i=42;
prontf("La respuesta es %d\n");


--------------------------------GENERAMOS hello2.i--------------------------------------------------------------------------------------------------------------


C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>gcc hello2.c -E -P -o hel
lo2.i

Resultado luego de compilarlo...

C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>gcc hello2.i
hello2.i: In function 'main':
hello2.i:439:1: error: expected declaration or statement at end of input


-------- 3) Escribir hello3.c, una nueva variante: ---------------------------------------------------------

-------- 4)	Investigar la semántica de la primera línea.----------------------------------------------------

-------- 5) Preprocesar hello3.c, no compilar, y generar hello3.i. Buscar diferencias
entre hello3.c y hello3.i.	-------------------------------------------------------------------------------------------------------


Preproceso hello3.c	...

C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>gcc hello3.c -E
# 1 "hello3.c"
# 1 "<command-line>"
# 1 "hello3.c"


int printf(const char *s, ...);
int main(void){
int i=42;
prontf("La respuesta es %d\n");

C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>


--- Genero hello3.i ---

C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>gcc hello3.c -E -P -o hel
lo3.i


----------------------------------------	6) Compilar el resultado y generar hello3.s, no ensamblar.	--------------------------------------------

Compilo el resultado...

C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>gcc hello3.c  -o hello3.o

hello3.c: In function 'main':
hello3.c:6:1: error: expected declaration or statement at end of input

Genero hello3.s ...


C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>gcc hello3.i -s
hello3.i: In function 'main':
hello3.i:4:1: error: expected declaration or statement at end of input


--------------------------------------------	7) Corregir en el nuevo archivo hello4.c y empezar de nuevo, generar
hello4.s, no ensamblar.	--------------------------------------------------------------------------------------------------------------------

Preproceso hello4.c ...

C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>gcc hello4.c -E



  int __attribute__((__cdecl__)) wprintf(const wchar_t * __restrict__ _Format,..
.);
  int __attribute__((__cdecl__)) vfwprintf(FILE * __restrict__ _File,const wchar
_t * __restrict__ _Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vwprintf(const wchar_t * __restrict__ _Format,v
a_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) swprintf(wchar_
t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) vswprintf(wchar
_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
# 799 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-
mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfsopen(cons
t wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t __attribute__((__cdecl__)) fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwchar(v
oid);
  wint_t __attribute__((__cdecl__)) fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwchar(w
char_t _Ch);
  wint_t __attribute__((__cdecl__)) getwc(FILE *_File);
  wint_t __attribute__((__cdecl__)) getwchar(void);
  wint_t __attribute__((__cdecl__)) putwc(wchar_t _Ch,FILE *_File);
  wint_t __attribute__((__cdecl__)) putwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__attribute__((__cdecl__)) fgetws(wchar_t * __restrict__ _Dst,int _Si
zeInWords,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) fputws(const wchar_t * __restrict__ _Str,FILE *
 __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws(wch
ar_t *_String) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putws(const wc
har_t *_Str);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf(cons
t wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_l(wch
ar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_loc
ale_t locale,... ) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c(wch
ar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Fo
rmat,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c(wc
har_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _F
ormat,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf(wcha
r_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...)
 ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf(wch
ar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_
list _Args) ;








  int __attribute__((__cdecl__)) __ms_snwprintf (wchar_t * __restrict__ s, size_
t n, const wchar_t * __restrict__ format, ...);
  int __attribute__((__cdecl__)) __ms_vsnwprintf (wchar_t * __restrict__ , size_
t, const wchar_t * __restrict__ , va_list);
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict_
_ format, ...)
  {
    int r;
    va_list argp;
    __builtin_va_start (argp, format);
    r = _vsnwprintf (s, n, format, argp);
    __builtin_va_end (argp);
    return r;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) vsnwprintf (wchar_t * __restrict__ s, size_t n,
 const wchar_t * __restrict__ format, va_list arg)
  {
    return _vsnwprintf(s,n,format,arg);
  }





  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p(FIL
E * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p(cons
t wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p(FI
LE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p(con
st wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p(wch
ar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Forma
t,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_p(wc
har_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Form
at,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p(co
nst wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_p(c
onst wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_l(cons
t wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p_l(co
nst wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_l(con
st wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p_l(c
onst wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_l(FIL
E * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,..
.);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p_l(F
ILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,
...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_l(FI
LE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,v
a_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p_l(
FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale
,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c_l(w
char_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _For
mat,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p_l(w
char_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _For
mat,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c_l(
wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Fo
rmat,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_p_l(
wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Fo
rmat,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_l(co
nst wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p_l(
const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_p_l
(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_l(wc
har_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Form
at,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_l(w
char_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _For
mat,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf(wchar
_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf(wcha
r_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __swprintf_l(wc
har_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Ploci
nfo,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_l(wc
har_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_lo
cale_t locale,va_list argptr) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __vswprintf_l(w
char_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Ploc
info,va_list _Args) ;
# 892 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-
mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtempnam(
const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf(con
st wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_l(c
onst wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwscanf_l(FILE
 * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...
) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swscanf_l(cons
t wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Lo
cale,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf(const
 wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Form
at,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_l(con
st wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Fo
rmat,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wscanf_l(const
 wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfdopen(int
_FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfopen(const
 wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfreopen(con
st wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __
restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wperror(const
 wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wpopen(const
 wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wremove(const
wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtmpnam(w
char_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwc_nolo
ck(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwc_nolo
ck(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _ungetwc_nol
ock(wint_t _Ch,FILE *_File);
# 947 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-
mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _lock_file(FIL
E *_File);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _unlock_file(F
ILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fclose_nolock(
FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fflush_nolock(
FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_noloc
k(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restric
t__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseek_nolock(F
ILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _ftell_nolock(
FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _
fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl
__)) _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fwrite_nolo
ck(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restric
t__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ungetc_nolock(
int _Ch,FILE *_File);





  char *__attribute__((__cdecl__)) tempnam(const char *_Directory,const char *_F
ilePrefix) ;
  int __attribute__((__cdecl__)) fcloseall(void) ;
  FILE *__attribute__((__cdecl__)) fdopen(int _FileHandle,const char *_Format) ;

  int __attribute__((__cdecl__)) fgetchar(void) ;
  int __attribute__((__cdecl__)) fileno(FILE *_File) ;
  int __attribute__((__cdecl__)) flushall(void) ;
  int __attribute__((__cdecl__)) fputchar(int _Ch) ;
  int __attribute__((__cdecl__)) getw(FILE *_File) ;
  int __attribute__((__cdecl__)) putw(int _Ch,FILE *_File) ;
  int __attribute__((__cdecl__)) rmtmp(void) ;
# 989 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-
mingw32/include/stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_wide_utf8 (const wchar_t * const wptr
, char **mbptr, size_t * buflen);
# 1003 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64
-mingw32/include/stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_utf8_wide (const char *const mbptr, w
char_t ** wptr, size_t * buflen);
# 1012 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64
-mingw32/include/stdio.h" 3
void __attribute__((__cdecl__)) __mingw_str_free(void *ptr);







#pragma pack(pop)

# 1 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-mi
ngw32/include/sec_api/stdio_s.h" 1 3
# 9 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-mi
ngw32/include/sec_api/stdio_s.h" 3
# 1 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-mi
ngw32/include/stdio.h" 1 3
# 10 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-m
ingw32/include/sec_api/stdio_s.h" 2 3
# 1023 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64
-mingw32/include/stdio.h" 2 3

# 1 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64-mi
ngw32/include/_mingw_print_pop.h" 1 3
# 1025 "c:\\gcc\\bin\\../lib/gcc/x86_64-w64-mingw32/4.7.0/../../../../x86_64-w64
-mingw32/include/stdio.h" 2 3
# 10 "hello4.c" 2


int printf(const char *s, ...);
int main(void){
int i=42;
printf("La respuesta es %d\n");



--------------------- Genero hello4.i -----------

C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>gcc hello4.c -E -P -o hel
lo4.i

---------- Genero hello4.s ---------

C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>gcc hello4.i -S


------------------------------------------------	9) Ensamblar hello4.s en hello4.o, no vincular.	---------------------------------------------


C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>as -o hello4.o hello4.s


---------------------------------------------	10.Vincular hello4.o con la biblioteca estándar y generar el ejecutable.	---------------------------

C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>ld -o hello4 hello4.o -lc

ld: cannot find -lc

C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>ld -o hello4 /usr/lib/gcc
-lib/i386-linux/2.95.2/collect2 -m elf_i386 -dynamic-linker /lib/ld-linux.so.2 -
o hello4 /usr/lib/crt1.o /usr/lib/crti.o /usr/lib/gcc-lib/i386-linux/2.95.2/crtb
egin.o -L/usr/lib/gcc-lib/i386-linux/2.95.2 hello4.o -lgcc -lc -lgcc /usr/lib/gc
c-lib/i386-linux/2.95.2/crtend.o /usr/lib/crtn.o

ld: unrecognised emulation mode: elf_i386
Supported emulations: i386pep i386pe

Generamos ejecutable ...

C:\Users\Emiliano\Documents\UNIVERSIDAD\SSL\tp1errores>gcc hello4.o -o hello4







-----------------------------------------------------------------------------------------------------------------------------------------------
				
													
													
													
													
													


