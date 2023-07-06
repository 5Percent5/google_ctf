typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[40];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef enum Elf32_DynTag_x86 {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf32_DynTag_x86;

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_x86 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType_x86;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20]; // SHA1
};

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType_x86;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _DT_INIT(void)

{
  __gmon_start__();
  return;
}



void FUN_00011020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void box(void)

{
  box();
  return;
}



void has_colors(void)

{
  has_colors();
  return;
}



void werase(void)

{
  werase();
  return;
}



void form_driver(void)

{
  form_driver();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void wbkgd(void)

{
  wbkgd();
  return;
}



void newwin(void)

{
  newwin();
  return;
}



void refresh(void)

{
  refresh();
  return;
}



void curs_set(void)

{
  curs_set();
  return;
}



void set_form_win(void)

{
  set_form_win();
  return;
}



void field_buffer(void)

{
  field_buffer();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = strdup(__s);
  return pcVar1;
}



void wgetch(void)

{
  wgetch();
  return;
}



void derwin(void)

{
  derwin();
  return;
}



void noecho(void)

{
  noecho();
  return;
}



void initscr(void)

{
  initscr();
  return;
}



void wrefresh(void)

{
  wrefresh();
  return;
}



void mvwprintw(void)

{
  mvwprintw();
  return;
}



void free_form(void)

{
  free_form();
  return;
}



void start_color(void)

{
  start_color();
  return;
}



void keypad(void)

{
  keypad();
  return;
}



void wattr_on(void)

{
  wattr_on();
  return;
}



void set_field_back(void)

{
  set_field_back();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



void mvprintw(void)

{
  mvprintw();
  return;
}



void clear(void)

{
  clear();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



void delwin(void)

{
  delwin();
  return;
}



void cbreak(void)

{
  cbreak();
  return;
}



void init_pair(void)

{
  init_pair();
  return;
}



void set_field_opts(void)

{
  set_field_opts();
  return;
}



void free_field(void)

{
  free_field();
  return;
}



void new_field(void)

{
  new_field();
  return;
}



void set_form_sub(void)

{
  set_form_sub();
  return;
}



void unpost_form(void)

{
  unpost_form();
  return;
}



void waddch(void)

{
  waddch();
  return;
}



void post_form(void)

{
  post_form();
  return;
}



void endwin(void)

{
  endwin();
  return;
}



void wattr_off(void)

{
  wattr_off();
  return;
}



void new_form(void)

{
  new_form();
  return;
}



void set_field_buffer(void)

{
  set_field_buffer();
  return;
}



void move(void)

{
  move();
  return;
}



void FUN_000112e0(void)

{
  int unaff_EBX;
  
                    // WARNING: Could not recover jumptable at 0x000112e0. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + -0x14))();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_4 [4];
  
  __libc_start_main(FUN_00018459,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx
// WARNING: Removing unreachable block (ram,0x0001134b)
// WARNING: Removing unreachable block (ram,0x00011355)

void FUN_00011330(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx
// WARNING: Removing unreachable block (ram,0x0001139e)
// WARNING: Removing unreachable block (ram,0x000113a8)

void FUN_00011370(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _FINI_0(void)

{
  if (DAT_00035300 == '\0') {
    FUN_000112e0(PTR_LOOP_000350c4);
    FUN_00011330();
    DAT_00035300 = '\x01';
  }
  return;
}



void _INIT_0(void)

{
  FUN_00011370();
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_dx(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001141e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00011470(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined2 * FUN_000114ce(undefined2 *param_1)

{
  *param_1 = 0x3b40;
  *(undefined *)(param_1 + 1) = 0xb6;
  *(undefined2 *)((int)param_1 + 3) = 0x4865;
  *(undefined *)((int)param_1 + 5) = 0xb6;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000114fc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001154e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined2 * FUN_000115ac(undefined2 *param_1)

{
  *param_1 = 0x3b40;
  *(undefined *)(param_1 + 1) = 0xb6;
  *(undefined2 *)((int)param_1 + 3) = 0x4865;
  *(undefined *)((int)param_1 + 5) = 0xb6;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000115da(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001162c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001168a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000116dc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00011739(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char *__format;
  undefined *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  FILE *apFStack_1ac [2];
  undefined auStack_18c [15];
  undefined local_17d;
  undefined local_16e [18];
  undefined auStack_15c [18];
  undefined local_14a;
  undefined local_149 [15];
  undefined auStack_13a [15];
  undefined local_12b;
  undefined local_12a [3];
  undefined auStack_127 [3];
  undefined local_124;
  undefined local_123 [18];
  undefined auStack_111 [18];
  undefined local_ff;
  undefined local_fe [15];
  undefined auStack_ef [15];
  undefined local_e0;
  undefined local_df [3];
  undefined auStack_dc [3];
  undefined local_d9;
  undefined local_d8 [18];
  undefined auStack_c6 [18];
  undefined local_b4;
  undefined local_b3 [15];
  undefined auStack_a4 [15];
  undefined local_95;
  undefined local_94 [18];
  undefined auStack_82 [18];
  undefined local_70;
  undefined local_6f [15];
  undefined auStack_60 [15];
  undefined local_51;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  iVar2 = wattr_on(_stdscr,0x200000,0);
  if (iVar2 != 0) {
    endwin();
    FUN_00011470(local_16e,&local_14a);
    for (local_2c = 0; local_2c < 0x11; local_2c = local_2c + 1) {
      puVar3 = (undefined *)FUN_0002bd72(auStack_15c,local_2c);
      local_17d = FUN_0002bd96(local_16e,*puVar3,local_2c);
      puVar3 = (undefined *)FUN_0002bd72(auStack_15c,local_2c);
      *puVar3 = local_17d;
    }
    puVar3 = (undefined *)FUN_0002bd72(auStack_15c,0x11);
    *puVar3 = 0;
    uVar4 = FUN_0002bdc6(auStack_15c);
    FUN_0001141e(local_149,&local_12b);
    for (local_30 = 0; local_30 < 0xe; local_30 = local_30 + 1) {
      puVar3 = (undefined *)FUN_0002bcfc(auStack_13a,local_30);
      local_17d = FUN_0002bd20(local_149,*puVar3,local_30);
      puVar3 = (undefined *)FUN_0002bcfc(auStack_13a,local_30);
      *puVar3 = local_17d;
    }
    puVar3 = (undefined *)FUN_0002bcfc(auStack_13a,0xe);
    *puVar3 = 0;
    __format = (char *)FUN_0002bd50(auStack_13a);
    fprintf(_stderr,__format,uVar4);
                    // WARNING: Subroutine does not return
    exit(-1);
  }
  if ((param_2 < 0x6f) || (param_1 < 0x1c)) {
    local_14 = -1;
  }
  else {
    local_24 = (param_2 + -0x6f) / 2;
    local_10 = (param_1 + -0x1a) / 2 + -0xf;
    local_28 = local_24 + 0x2e;
    local_14 = (param_1 + -0x12) / 2 + -0xf;
    if ((((local_24 < 0) || (local_10 < 0)) || (local_28 < 0)) || (local_14 < 0)) {
      local_14 = -1;
    }
    else {
      puVar3 = auStack_18c;
      for (local_18 = 0; local_18 < 0x1a; local_18 = local_18 + 1) {
        for (local_1c = 0; *(char *)(local_1c + (&DAT_00035340)[local_18]) != '\0';
            local_1c = local_1c + 1) {
          if (*(char *)(local_1c + (&DAT_00035340)[local_18]) == '\'') {
            *(undefined *)(local_1c + (&DAT_00035340)[local_18]) = 0x22;
          }
        }
        uVar4 = (&DAT_00035340)[local_18];
        *(undefined **)(puVar3 + -0xc) = &local_124;
        *(undefined **)(puVar3 + -0x10) = local_12a;
        *(undefined4 *)(puVar3 + -0x14) = 0x11a00;
        FUN_000114ce();
        for (local_34 = 0; local_34 < 2; local_34 = local_34 + 1) {
          *(uint *)(puVar3 + -0x10) = local_34;
          *(undefined **)(puVar3 + -0x14) = auStack_127;
          *(undefined4 *)(puVar3 + -0x18) = 0x11a21;
          pbVar6 = (byte *)FUN_0002bde8();
          bVar1 = *pbVar6;
          *(uint *)(puVar3 + -0xc) = local_34;
          *(uint *)(puVar3 + -0x10) = (uint)bVar1;
          *(undefined **)(puVar3 + -0x14) = local_12a;
          *(undefined4 *)(puVar3 + -0x18) = 0x11a3d;
          local_17d = FUN_0002be0c();
          *(uint *)(puVar3 + -0x10) = local_34;
          *(undefined **)(puVar3 + -0x14) = auStack_127;
          *(undefined4 *)(puVar3 + -0x18) = 0x11a5b;
          puVar5 = (undefined *)FUN_0002bde8();
          *puVar5 = local_17d;
        }
        *(undefined4 *)(puVar3 + -0x10) = 2;
        *(undefined **)(puVar3 + -0x14) = auStack_127;
        *(undefined4 *)(puVar3 + -0x18) = 0x11a85;
        puVar5 = (undefined *)FUN_0002bde8();
        *puVar5 = 0;
        *(undefined **)(puVar3 + -0x14) = auStack_127;
        *(undefined4 *)(puVar3 + -0x18) = 0x11a9d;
        uVar7 = FUN_0002be3c();
        *(undefined4 *)(puVar3 + -8) = uVar4;
        *(undefined4 *)(puVar3 + -0xc) = uVar7;
        *(int *)(puVar3 + -0x10) = local_24;
        *(int *)(puVar3 + -0x14) = local_10;
        *(undefined4 *)(puVar3 + -0x18) = 0x11ab7;
        local_10 = local_10 + 1;
        iVar2 = mvprintw();
        if (iVar2 != 0) {
          *(undefined4 *)(puVar3 + -8) = 0x11acc;
          endwin();
          *(undefined **)(puVar3 + -0x10) = &local_ff;
          *(undefined **)(puVar3 + -0x14) = local_123;
          *(undefined4 *)(puVar3 + -0x18) = 0x11ae2;
          FUN_0001154e();
          for (local_38 = 0; local_38 < 0x11; local_38 = local_38 + 1) {
            *(uint *)(puVar3 + -0x14) = local_38;
            *(undefined **)(puVar3 + -0x18) = auStack_111;
            *(undefined4 *)(puVar3 + -0x1c) = 0x11b03;
            pbVar6 = (byte *)FUN_0002bd72();
            bVar1 = *pbVar6;
            *(uint *)(puVar3 + -0x10) = local_38;
            *(uint *)(puVar3 + -0x14) = (uint)bVar1;
            *(undefined **)(puVar3 + -0x18) = local_123;
            *(undefined4 *)(puVar3 + -0x1c) = 0x11b1f;
            local_17d = FUN_0002bd96();
            *(uint *)(puVar3 + -0x14) = local_38;
            *(undefined **)(puVar3 + -0x18) = auStack_111;
            *(undefined4 *)(puVar3 + -0x1c) = 0x11b3d;
            puVar5 = (undefined *)FUN_0002bd72();
            *puVar5 = local_17d;
          }
          *(undefined4 *)(puVar3 + -0x14) = 0x11;
          *(undefined **)(puVar3 + -0x18) = auStack_111;
          *(undefined4 *)(puVar3 + -0x1c) = 0x11b67;
          puVar5 = (undefined *)FUN_0002bd72();
          *puVar5 = 0;
          *(undefined **)(puVar3 + -0x18) = auStack_111;
          *(undefined4 *)(puVar3 + -0x1c) = 0x11b7f;
          uVar4 = FUN_0002bdc6();
          *(undefined **)(puVar3 + -0x14) = &local_e0;
          *(undefined **)(puVar3 + -0x18) = local_fe;
          *(undefined4 *)(puVar3 + -0x1c) = 0x11b9b;
          FUN_000114fc();
          for (local_3c = 0; local_3c < 0xe; local_3c = local_3c + 1) {
            *(uint *)(puVar3 + -0x18) = local_3c;
            *(undefined **)(puVar3 + -0x1c) = auStack_ef;
            *(undefined4 *)(puVar3 + -0x20) = 0x11bbc;
            pbVar6 = (byte *)FUN_0002bcfc();
            bVar1 = *pbVar6;
            *(uint *)(puVar3 + -0x14) = local_3c;
            *(uint *)(puVar3 + -0x18) = (uint)bVar1;
            *(undefined **)(puVar3 + -0x1c) = local_fe;
            *(undefined4 *)(puVar3 + -0x20) = 0x11bd8;
            local_17d = FUN_0002bd20();
            *(uint *)(puVar3 + -0x18) = local_3c;
            *(undefined **)(puVar3 + -0x1c) = auStack_ef;
            *(undefined4 *)(puVar3 + -0x20) = 0x11bf6;
            puVar5 = (undefined *)FUN_0002bcfc();
            *puVar5 = local_17d;
          }
          *(undefined4 *)(puVar3 + -0x18) = 0xe;
          *(undefined **)(puVar3 + -0x1c) = auStack_ef;
          *(undefined4 *)(puVar3 + -0x20) = 0x11c20;
          puVar5 = (undefined *)FUN_0002bcfc();
          *puVar5 = 0;
          *(undefined **)(puVar3 + -0x1c) = auStack_ef;
          *(undefined4 *)(puVar3 + -0x20) = 0x11c38;
          uVar7 = FUN_0002bd50();
          *(undefined4 *)(puVar3 + -0x14) = uVar4;
          *(undefined4 *)(puVar3 + -0x18) = uVar7;
          *(FILE **)(puVar3 + -0x1c) = _stderr;
          *(undefined4 *)(puVar3 + -0x20) = 0x11c4f;
          fprintf(*(FILE **)(puVar3 + -0x1c),*(char **)(puVar3 + -0x18));
          *(undefined4 *)(puVar3 + -0x1c) = 0xffffffff;
                    // WARNING: Subroutine does not return
          *(undefined4 *)(puVar3 + -0x20) = 0x11c5c;
          exit(*(int *)(puVar3 + -0x1c));
        }
        puVar3 = puVar3 + -4;
      }
      if (DAT_00035320 != 0) {
        DAT_000352e0 = DAT_000352e0 + 7;
      }
      for (local_20 = 0; local_20 < 0x12; local_20 = local_20 + 1) {
        uVar4 = (&DAT_000353c0)[local_20];
        *(undefined **)(puVar3 + -0xc) = &local_d9;
        *(undefined **)(puVar3 + -0x10) = local_df;
        *(undefined4 *)(puVar3 + -0x14) = 0x11cb1;
        FUN_000115ac();
        for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
          *(uint *)(puVar3 + -0x10) = local_40;
          *(undefined **)(puVar3 + -0x14) = auStack_dc;
          *(undefined4 *)(puVar3 + -0x18) = 0x11cd2;
          pbVar6 = (byte *)FUN_0002bde8();
          bVar1 = *pbVar6;
          *(uint *)(puVar3 + -0xc) = local_40;
          *(uint *)(puVar3 + -0x10) = (uint)bVar1;
          *(undefined **)(puVar3 + -0x14) = local_df;
          *(undefined4 *)(puVar3 + -0x18) = 0x11cee;
          local_17d = FUN_0002be0c();
          *(uint *)(puVar3 + -0x10) = local_40;
          *(undefined **)(puVar3 + -0x14) = auStack_dc;
          *(undefined4 *)(puVar3 + -0x18) = 0x11d0c;
          puVar5 = (undefined *)FUN_0002bde8();
          *puVar5 = local_17d;
        }
        *(undefined4 *)(puVar3 + -0x10) = 2;
        *(undefined **)(puVar3 + -0x14) = auStack_dc;
        *(undefined4 *)(puVar3 + -0x18) = 0x11d36;
        puVar5 = (undefined *)FUN_0002bde8();
        *puVar5 = 0;
        *(undefined **)(puVar3 + -0x14) = auStack_dc;
        *(undefined4 *)(puVar3 + -0x18) = 0x11d4e;
        uVar7 = FUN_0002be3c();
        *(undefined4 *)(puVar3 + -8) = uVar4;
        *(undefined4 *)(puVar3 + -0xc) = uVar7;
        *(int *)(puVar3 + -0x10) = local_28;
        *(int *)(puVar3 + -0x14) = local_14;
        *(undefined4 *)(puVar3 + -0x18) = 0x11d68;
        local_14 = local_14 + 1;
        iVar2 = mvprintw();
        if (iVar2 != 0) {
          *(undefined4 *)(puVar3 + -8) = 0x11d7d;
          endwin();
          *(undefined **)(puVar3 + -0x10) = &local_b4;
          *(undefined **)(puVar3 + -0x14) = local_d8;
          *(undefined4 *)(puVar3 + -0x18) = 0x11d93;
          FUN_0001162c();
          for (local_44 = 0; local_44 < 0x11; local_44 = local_44 + 1) {
            *(uint *)(puVar3 + -0x14) = local_44;
            *(undefined **)(puVar3 + -0x18) = auStack_c6;
            *(undefined4 *)(puVar3 + -0x1c) = 0x11db4;
            pbVar6 = (byte *)FUN_0002bd72();
            bVar1 = *pbVar6;
            *(uint *)(puVar3 + -0x10) = local_44;
            *(uint *)(puVar3 + -0x14) = (uint)bVar1;
            *(undefined **)(puVar3 + -0x18) = local_d8;
            *(undefined4 *)(puVar3 + -0x1c) = 0x11dd0;
            local_17d = FUN_0002bd96();
            *(uint *)(puVar3 + -0x14) = local_44;
            *(undefined **)(puVar3 + -0x18) = auStack_c6;
            *(undefined4 *)(puVar3 + -0x1c) = 0x11dee;
            puVar5 = (undefined *)FUN_0002bd72();
            *puVar5 = local_17d;
          }
          *(undefined4 *)(puVar3 + -0x14) = 0x11;
          *(undefined **)(puVar3 + -0x18) = auStack_c6;
          *(undefined4 *)(puVar3 + -0x1c) = 0x11e18;
          puVar5 = (undefined *)FUN_0002bd72();
          *puVar5 = 0;
          *(undefined **)(puVar3 + -0x18) = auStack_c6;
          *(undefined4 *)(puVar3 + -0x1c) = 0x11e30;
          uVar4 = FUN_0002bdc6();
          *(undefined **)(puVar3 + -0x14) = &local_95;
          *(undefined **)(puVar3 + -0x18) = local_b3;
          *(undefined4 *)(puVar3 + -0x1c) = 0x11e4c;
          FUN_000115da();
          for (local_48 = 0; local_48 < 0xe; local_48 = local_48 + 1) {
            *(uint *)(puVar3 + -0x18) = local_48;
            *(undefined **)(puVar3 + -0x1c) = auStack_a4;
            *(undefined4 *)(puVar3 + -0x20) = 0x11e6d;
            pbVar6 = (byte *)FUN_0002bcfc();
            bVar1 = *pbVar6;
            *(uint *)(puVar3 + -0x14) = local_48;
            *(uint *)(puVar3 + -0x18) = (uint)bVar1;
            *(undefined **)(puVar3 + -0x1c) = local_b3;
            *(undefined4 *)(puVar3 + -0x20) = 0x11e89;
            local_17d = FUN_0002bd20();
            *(uint *)(puVar3 + -0x18) = local_48;
            *(undefined **)(puVar3 + -0x1c) = auStack_a4;
            *(undefined4 *)(puVar3 + -0x20) = 0x11ea7;
            puVar5 = (undefined *)FUN_0002bcfc();
            *puVar5 = local_17d;
          }
          *(undefined4 *)(puVar3 + -0x18) = 0xe;
          *(undefined **)(puVar3 + -0x1c) = auStack_a4;
          *(undefined4 *)(puVar3 + -0x20) = 0x11ed1;
          puVar5 = (undefined *)FUN_0002bcfc();
          *puVar5 = 0;
          *(undefined **)(puVar3 + -0x1c) = auStack_a4;
          *(undefined4 *)(puVar3 + -0x20) = 0x11ee9;
          uVar7 = FUN_0002bd50();
          *(undefined4 *)(puVar3 + -0x14) = uVar4;
          *(undefined4 *)(puVar3 + -0x18) = uVar7;
          *(FILE **)(puVar3 + -0x1c) = _stderr;
          *(undefined4 *)(puVar3 + -0x20) = 0x11f00;
          fprintf(*(FILE **)(puVar3 + -0x1c),*(char **)(puVar3 + -0x18));
          *(undefined4 *)(puVar3 + -0x1c) = 0xffffffff;
                    // WARNING: Subroutine does not return
          *(undefined4 *)(puVar3 + -0x20) = 0x11f0d;
          exit(*(int *)(puVar3 + -0x1c));
        }
        puVar3 = puVar3 + -4;
      }
      *(undefined4 *)(puVar3 + -8) = 0;
      *(undefined4 *)(puVar3 + -0xc) = 0x200000;
      *(undefined4 *)(puVar3 + -0x10) = _stdscr;
      *(undefined4 *)(puVar3 + -0x14) = 0x11f35;
      iVar2 = wattr_off();
      if (iVar2 != 0) {
        *(undefined4 *)(puVar3 + -4) = 0x11f4a;
        endwin();
        *(undefined **)(puVar3 + -0xc) = &local_70;
        *(undefined **)(puVar3 + -0x10) = local_94;
        *(undefined4 *)(puVar3 + -0x14) = 0x11f5d;
        FUN_000116dc();
        for (local_4c = 0; local_4c < 0x11; local_4c = local_4c + 1) {
          *(uint *)(puVar3 + -0x10) = local_4c;
          *(undefined **)(puVar3 + -0x14) = auStack_82;
          *(undefined4 *)(puVar3 + -0x18) = 0x11f7e;
          pbVar6 = (byte *)FUN_0002bd72();
          bVar1 = *pbVar6;
          *(uint *)(puVar3 + -0xc) = local_4c;
          *(uint *)(puVar3 + -0x10) = (uint)bVar1;
          *(undefined **)(puVar3 + -0x14) = local_94;
          *(undefined4 *)(puVar3 + -0x18) = 0x11f9a;
          local_17d = FUN_0002bd96();
          *(uint *)(puVar3 + -0x10) = local_4c;
          *(undefined **)(puVar3 + -0x14) = auStack_82;
          *(undefined4 *)(puVar3 + -0x18) = 0x11fb8;
          puVar5 = (undefined *)FUN_0002bd72();
          *puVar5 = local_17d;
        }
        *(undefined4 *)(puVar3 + -0x10) = 0x11;
        *(undefined **)(puVar3 + -0x14) = auStack_82;
        *(undefined4 *)(puVar3 + -0x18) = 0x11fe2;
        puVar5 = (undefined *)FUN_0002bd72();
        *puVar5 = 0;
        *(undefined **)(puVar3 + -0x14) = auStack_82;
        *(undefined4 *)(puVar3 + -0x18) = 0x11ffa;
        uVar4 = FUN_0002bdc6();
        *(undefined **)(puVar3 + -0x10) = &local_51;
        *(undefined **)(puVar3 + -0x14) = local_6f;
        *(undefined4 *)(puVar3 + -0x18) = 0x12010;
        FUN_0001168a();
        for (local_50 = 0; local_50 < 0xe; local_50 = local_50 + 1) {
          *(uint *)(puVar3 + -0x14) = local_50;
          *(undefined **)(puVar3 + -0x18) = auStack_60;
          *(undefined4 *)(puVar3 + -0x1c) = 0x1202e;
          pbVar6 = (byte *)FUN_0002bcfc();
          bVar1 = *pbVar6;
          *(uint *)(puVar3 + -0x10) = local_50;
          *(uint *)(puVar3 + -0x14) = (uint)bVar1;
          *(undefined **)(puVar3 + -0x18) = local_6f;
          *(undefined4 *)(puVar3 + -0x1c) = 0x12047;
          local_17d = FUN_0002bd20();
          *(uint *)(puVar3 + -0x14) = local_50;
          *(undefined **)(puVar3 + -0x18) = auStack_60;
          *(undefined4 *)(puVar3 + -0x1c) = 0x12062;
          puVar5 = (undefined *)FUN_0002bcfc();
          *puVar5 = local_17d;
        }
        *(undefined4 *)(puVar3 + -0x14) = 0xe;
        *(undefined **)(puVar3 + -0x18) = auStack_60;
        *(undefined4 *)(puVar3 + -0x1c) = 0x12089;
        puVar5 = (undefined *)FUN_0002bcfc();
        *puVar5 = 0;
        *(undefined **)(puVar3 + -0x18) = auStack_60;
        *(undefined4 *)(puVar3 + -0x1c) = 0x1209e;
        uVar7 = FUN_0002bd50();
        *(undefined4 *)(puVar3 + -0x10) = uVar4;
        *(undefined4 *)(puVar3 + -0x14) = uVar7;
        *(FILE **)(puVar3 + -0x18) = _stderr;
        *(undefined4 *)(puVar3 + -0x1c) = 0x120b5;
        fprintf(*(FILE **)(puVar3 + -0x18),*(char **)(puVar3 + -0x14));
        *(undefined4 *)(puVar3 + -0x18) = 0xffffffff;
                    // WARNING: Subroutine does not return
        *(undefined4 *)(puVar3 + -0x1c) = 0x120c2;
        exit(*(int *)(puVar3 + -0x18));
      }
      if (local_14 < local_10) {
        local_14 = local_10;
      }
    }
  }
  return local_14;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000120da(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  *(undefined4 *)((int)param_1 + 0x3e) = 0x40670b57;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002e200 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x42U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 FUN_0001212a(int param_1,char *param_2)

{
  byte bVar1;
  size_t sVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined *puVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  byte bVar13;
  int aiStackY_284 [2];
  undefined4 uStack_270;
  undefined auStack_26c [15];
  undefined local_25d;
  uint local_258 [80];
  uint local_118 [25];
  undefined local_b3 [33];
  undefined auStack_92 [33];
  undefined local_71;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  undefined *local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  char local_29;
  uint local_28;
  int local_24;
  uint local_20;
  
  bVar13 = 0;
  puVar10 = auStack_26c;
  uStack_270 = 0x1213b;
  sVar2 = strlen(param_2);
  if (sVar2 == 0x1d) {
    puVar12 = local_118;
    for (iVar8 = 0x19; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
    }
    local_24 = 0;
    for (local_20 = 0; param_2[local_20] != '\0'; local_20 = local_20 + 1) {
      if ((((local_20 == 5) || (local_20 == 0xb)) || (local_20 == 0x11)) || (local_20 == 0x17)) {
        if (param_2[local_20] != '-') {
          return 0;
        }
      }
      else {
        local_29 = '\0';
        puVar9 = puVar10;
        for (local_28 = 0; puVar10 = puVar9, (int)local_28 < 0x20; local_28 = local_28 + 1) {
          *(undefined **)(puVar9 + -0xc) = &local_71;
          *(undefined **)(puVar9 + -0x10) = local_b3;
          *(undefined4 *)(puVar9 + -0x14) = 0x121dd;
          FUN_000120da();
          puVar10 = puVar9 + -4;
          for (local_70 = 0; local_70 < 0x20; local_70 = local_70 + 1) {
            *(uint *)(puVar9 + -0x10) = local_70;
            *(undefined **)(puVar9 + -0x14) = auStack_92;
            *(undefined4 *)(puVar9 + -0x18) = 0x121fe;
            pbVar4 = (byte *)FUN_0002b8d6();
            bVar1 = *pbVar4;
            *(uint *)(puVar9 + -0xc) = local_70;
            *(uint *)(puVar9 + -0x10) = (uint)bVar1;
            *(undefined **)(puVar9 + -0x14) = local_b3;
            *(undefined4 *)(puVar9 + -0x18) = 0x1221a;
            local_25d = FUN_0002b8fa();
            *(uint *)(puVar9 + -0x10) = local_70;
            *(undefined **)(puVar9 + -0x14) = auStack_92;
            *(undefined4 *)(puVar9 + -0x18) = 0x12238;
            puVar5 = (undefined *)FUN_0002b8d6();
            *puVar5 = local_25d;
          }
          *(undefined4 *)(puVar9 + -0x10) = 0x20;
          *(undefined **)(puVar9 + -0x14) = auStack_92;
          *(undefined4 *)(puVar9 + -0x18) = 0x12262;
          puVar5 = (undefined *)FUN_0002b8d6();
          *puVar5 = 0;
          *(undefined **)(puVar9 + -0x14) = auStack_92;
          *(undefined4 *)(puVar9 + -0x18) = 0x1227a;
          iVar6 = FUN_0002b92a();
          iVar8 = local_24;
          if (*(char *)(iVar6 + local_28) == param_2[local_20]) {
            iVar6 = local_24 / 5;
            local_24 = local_24 + 1;
            local_118[iVar6 * 5 + iVar8 % 5] = local_28;
            local_29 = '\x01';
            break;
          }
          puVar9 = puVar9 + -4;
        }
        if (local_29 != '\x01') {
          return 0;
        }
      }
    }
    local_30 = 0;
    local_34 = DAT_000352e0;
    puVar12 = local_258;
    for (iVar8 = 0x50; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
    }
    local_38 = 0;
    local_3c = 0;
    local_20 = 0;
    while( true ) {
      *(int *)(puVar10 + -0x10) = param_1;
      *(undefined4 *)(puVar10 + -0x14) = 0x1252a;
      sVar2 = strlen(*(char **)(puVar10 + -0x10));
      if (sVar2 <= local_20) break;
      local_40 = 0;
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        sVar2 = local_24 + local_20;
        *(int *)(puVar10 + -0x10) = param_1;
        *(undefined4 *)(puVar10 + -0x14) = 0x1238e;
        sVar7 = strlen(*(char **)(puVar10 + -0x10));
        if (sVar2 == sVar7) break;
        local_40 = (int)*(char *)(param_1 + local_24 + local_20) & 0x7fU | local_40 << 7;
      }
      for (local_28 = 0; (int)local_28 < 3; local_28 = local_28 + 1) {
        local_6c = *(undefined4 *)(&DAT_00035160 + ((local_34 % 0x20) * 3 + local_28) * 4);
        bVar13 = (byte)*(undefined4 *)(&DAT_00035160 + ((local_34 % 0x20) * 3 + local_28) * 4);
        local_30 = (int)(1 << (bVar13 & 0x1f) & local_40) >> (bVar13 & 0x1f) | local_30 * 2;
      }
      for (local_28 = 0; (int)local_28 < 3; local_28 = local_28 + 1) {
        local_68 = *(undefined4 *)(&DAT_00035160 + ((local_34 % 0x20) * 3 + local_28) * 4);
        bVar13 = (byte)*(undefined4 *)(&DAT_00035160 + ((local_34 % 0x20) * 3 + local_28) * 4);
        local_40 = (1 << (bVar13 & 0x1f)) - 1U & local_40 |
                   ((int)local_40 >> (bVar13 + 1 & 0x1f)) << (bVar13 & 0x1f);
      }
      local_3c = local_3c + 3;
      for (local_28 = 0; (int)local_28 <= (int)(local_30 & 7); local_28 = local_28 + 1) {
        local_34 = (local_34 * 0x1fb9 + 0x6efb) % 0x20d38;
      }
      for (local_28 = 0; (int)local_28 < 5; local_28 = local_28 + 1) {
        local_258[local_28 + local_38 * 0x10] = ~local_40 & 0x1f;
        local_40 = (int)local_40 >> 5;
      }
      local_38 = local_38 + 1;
      local_20 = local_20 + 4;
    }
    if ((local_3c < 0x21) && (4 < local_38)) {
      for (local_44 = 4; -1 < local_44; local_44 = local_44 + -1) {
      }
      for (local_20 = 0; (int)local_20 < local_38; local_20 = local_20 + 1) {
        local_48 = (local_258[local_20 + 0x20] & 3) << 10 |
                   local_258[local_20 + 0x10] << 5 | local_258[local_20];
        local_4c = local_258[local_20 + 0x40] << 8 |
                   (int)local_258[local_20 + 0x20] >> 2 & 7U | local_258[local_20 + 0x30] << 3;
        for (local_24 = 0; local_24 < 0xd; local_24 = local_24 + 1) {
          local_64 = (1 << ((byte)local_3c & 0x1f)) - 1U &
                     ~((int)local_30 >> ((byte)local_3c - 1 & 0x1f) | local_30 * 2) ^
                     ((int)local_4c >> 0xc | local_4c * 8) & 0x7fff ^ local_48;
          local_48 = local_4c & 0x7fff;
          local_4c = local_64 & 0x7fff;
        }
        local_258[local_20] = local_48 & 0x1f;
        local_258[local_20 + 0x10] = (int)local_48 >> 5 & 0x1f;
        local_258[local_20 + 0x20] = (int)local_48 >> 10 & 3U | local_4c & 0x1c;
        local_258[local_20 + 0x30] = (int)local_4c >> 5 & 0x1f;
        local_258[local_20 + 0x40] = (int)local_4c >> 10 & 0x1f;
      }
      for (local_50 = 4; -1 < local_50; local_50 = local_50 + -1) {
      }
      for (local_20 = 0; (int)local_20 < 5; local_20 = local_20 + 1) {
        for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
          local_118[local_20 * 5 + local_24] =
               *(uint *)(&DAT_0002e180 + local_118[local_20 * 5 + local_24] * 4);
        }
      }
      for (local_20 = 0; (int)local_20 < 5; local_20 = local_20 + 1) {
        for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
          local_118[local_20 * 5 + local_24] =
               local_118[local_20 * 5 + local_24] ^
               *(uint *)(&DAT_000350e0 + (local_24 + local_20 * 5) * 4);
        }
      }
      for (local_20 = 1; (int)local_20 < 5; local_20 = local_20 + 1) {
        local_5c = local_20 + -1;
        iVar6 = ((local_20 * 4 + 0xf) / 0x10) * -0x10;
        puVar11 = (undefined4 *)(puVar10 + iVar6);
        local_60 = puVar10 + iVar6;
        *(undefined4 *)(puVar10 + iVar6) = 0;
        for (iVar8 = local_20 + -2; puVar11 = puVar11 + 1, -1 < iVar8; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
        }
        for (local_24 = 0; local_24 < (int)local_20; local_24 = local_24 + 1) {
          *(uint *)(puVar10 + local_24 * 4 + iVar6) = local_118[local_20 * 5 + local_24];
        }
        for (local_24 = local_20; local_24 < 5; local_24 = local_24 + 1) {
          local_118[local_24 + local_20 * 4] = local_118[local_20 * 5 + local_24];
        }
        for (local_24 = 5 - local_20; local_24 < 5; local_24 = local_24 + 1) {
          local_118[local_20 * 5 + local_24] =
               *(uint *)(puVar10 + (local_24 + -5 + local_20) * 4 + iVar6);
        }
      }
      for (local_54 = 4; -1 < local_54; local_54 = local_54 + -1) {
      }
      for (local_20 = 0; (int)local_20 < 5; local_20 = local_20 + 1) {
        for (local_24 = 0; local_24 < local_38; local_24 = local_24 + 1) {
          local_58 = 0;
          for (local_28 = 0; (int)local_28 < 5; local_28 = local_28 + 1) {
            local_58 = local_58 +
                       local_258[local_28 + local_20 * 0x10] * local_118[local_28 * 5 + local_24] &
                       0x1f;
          }
          if (((local_20 == local_24) && (local_58 != 1)) ||
             ((local_20 != local_24 && (local_58 != 0)))) {
            return 0;
          }
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000129b6(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012a08(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012a66(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012ab8(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012b16(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012b68(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012bc6(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012c18(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012c76(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012cc8(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012d26(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012d78(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  param_1[6] = 0x61264b18;
  param_1[7] = 0x3d520fcc;
  param_1[8] = 0x5cc45e14;
  param_1[9] = 0xf1db295d;
  param_1[10] = 0xcc997748;
  param_1[0xb] = 0x32a44fb7;
  param_1[0xc] = 0x9c755344;
  param_1[0xd] = 0x373db78c;
  param_1[0xe] = 0xe456b6c;
  param_1[0xf] = 0x3d2060a0;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012e02(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012e54(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012eb2(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012f04(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012f62(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00012fb4(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013012(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013064(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000130c2(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013114(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013172(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000131c4(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013222(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013274(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000132d2(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013324(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013382(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000133d4(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013432(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013484(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000134e2(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013534(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013592(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000135e4(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  *(undefined2 *)(param_1 + 5) = 0xc7fc;
  *(undefined4 *)((int)param_1 + 0x16) = 0x5cc45e14;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xf1db295d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x89857a48;
  *(undefined4 *)((int)param_1 + 0x22) = 0x7da500b0;
  *(undefined4 *)((int)param_1 + 0x26) = 0x85671e43;
  *(undefined2 *)((int)param_1 + 0x2a) = 0xc790;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013650(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000136a2(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  *(undefined4 *)((int)param_1 + 0x17) = 0x264b1845;
  *(undefined4 *)((int)param_1 + 0x1b) = 0x5fd85a03;
  *(undefined4 *)((int)param_1 + 0x1f) = 0xfe9a335b;
  *(undefined4 *)((int)param_1 + 0x23) = 0xdd97761a;
  *(undefined4 *)((int)param_1 + 0x27) = 0x32a64fa1;
  *(undefined4 *)((int)param_1 + 0x2b) = 0xc9681a57;
  *(undefined4 *)((int)param_1 + 0x2f) = 0x213cae8b;
  *(undefined4 *)((int)param_1 + 0x32) = 0x263c7721;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001371e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013770(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000137ce(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013820(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001387e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000138d0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001392e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013980(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000139de(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013a30(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013a8e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013ae0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013b3e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013b90(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013bee(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013c40(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013c9e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013cf0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013d4e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013da0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  param_1[6] = 0x61264b18;
  *(undefined2 *)(param_1 + 7) = 0xfcc;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x5fd85a03;
  *(undefined4 *)((int)param_1 + 0x22) = 0xfe9a335b;
  *(undefined4 *)((int)param_1 + 0x26) = 0xdd97761a;
  *(undefined4 *)((int)param_1 + 0x2a) = 0x33a34fa1;
  *(undefined4 *)((int)param_1 + 0x2e) = 0x87741644;
  *(undefined4 *)((int)param_1 + 0x32) = 0x3272ab9d;
  *(undefined4 *)((int)param_1 + 0x36) = 0xe422571;
  *(undefined2 *)((int)param_1 + 0x3a) = 0xfbb;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013e28(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013e7a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013ed8(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013f2a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013f88(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00013fda(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014038(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001408a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000140e8(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  *(undefined4 *)((int)param_1 + 0x6e) = 0x385f543b;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002e260 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x72U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014138(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001418a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000141e8(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  *(undefined *)(param_1 + 6) = 0x18;
  *(undefined4 *)((int)param_1 + 0x19) = 0x45c37a60;
  *(undefined4 *)((int)param_1 + 0x1d) = 0xf4c8285c;
  *(undefined4 *)((int)param_1 + 0x21) = 0xc0827212;
  *(undefined4 *)((int)param_1 + 0x25) = 0xfea01ab;
  *(undefined4 *)((int)param_1 + 0x29) = 0x80730255;
  *(undefined4 *)((int)param_1 + 0x2d) = 0x6536a28e;
  *(undefined *)((int)param_1 + 0x31) = 0x18;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001425e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000142b0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001430e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014360(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  *(undefined2 *)(param_1 + 6) = 0x4b18;
  *(undefined4 *)((int)param_1 + 0x1a) = 0x5fd85a03;
  *(undefined4 *)((int)param_1 + 0x1e) = 0xfe9a335b;
  *(undefined4 *)((int)param_1 + 0x22) = 0xdd97761a;
  *(undefined4 *)((int)param_1 + 0x26) = 0x32ac4fa1;
  *(undefined4 *)((int)param_1 + 0x2a) = 0x8f261e42;
  *(undefined4 *)((int)param_1 + 0x2e) = 0x213ea295;
  *(undefined2 *)((int)param_1 + 0x32) = 0x4b6b;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000143da(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  *(undefined2 *)(param_1 + 2) = 0x1368;
  *(undefined4 *)((int)param_1 + 10) = 0x43d34815;
  *(undefined4 *)((int)param_1 + 0xe) = 0xf8d7265a;
  *(undefined2 *)((int)param_1 + 0x12) = 0x1352;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001441c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001446e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000144cc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  *(undefined2 *)(param_1 + 2) = 0x1368;
  *(undefined4 *)((int)param_1 + 10) = 0x42c55a10;
  *(undefined4 *)((int)param_1 + 0xe) = 0xf9c82843;
  *(undefined2 *)((int)param_1 + 0x12) = 0x1352;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001450e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014560(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000145be(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014610(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001466e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000146c0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001471e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014770(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000147ce(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014820(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001487e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000148d0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001492e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014980(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000149de(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014a30(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014a8e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014ae0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014b3e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014b90(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014bee(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014c40(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014c9e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014cf0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014d4e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014da0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014dfe(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014e50(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined4 *)((int)param_1 + 0xf) = 0x673305d;
  *(undefined4 *)((int)param_1 + 0x13) = 0x5fd85a03;
  *(undefined4 *)((int)param_1 + 0x17) = 0xfe9a335b;
  *(undefined4 *)((int)param_1 + 0x1b) = 0xdd97761a;
  *(undefined4 *)((int)param_1 + 0x1f) = 0x32ac4fa1;
  *(undefined4 *)((int)param_1 + 0x22) = 0x61e4232;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014eb0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014f02(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014f60(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00014fb2(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015010(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015062(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000150c0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015112(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  *(undefined4 *)((int)param_1 + 0x17) = 0x264b1845;
  *(undefined4 *)((int)param_1 + 0x1b) = 0x5fd85a03;
  *(undefined4 *)((int)param_1 + 0x1f) = 0xfe9a335b;
  *(undefined4 *)((int)param_1 + 0x23) = 0xdd97761a;
  *(undefined4 *)((int)param_1 + 0x27) = 0x32a64fa1;
  *(undefined4 *)((int)param_1 + 0x2b) = 0xc9681a57;
  *(undefined4 *)((int)param_1 + 0x2f) = 0x3126b29e;
  *(undefined4 *)((int)param_1 + 0x32) = 0x26257731;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001518e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000151e0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001523e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015290(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000152ee(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  *(undefined2 *)(param_1 + 1) = 0x4734;
  *(undefined4 *)((int)param_1 + 6) = 0x58d1540c;
  *(undefined2 *)((int)param_1 + 10) = 0x475a;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015322(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015374(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000153d2(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015424(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  *(undefined2 *)(param_1 + 6) = 0x4b18;
  *(undefined4 *)((int)param_1 + 0x1a) = 0x5fd85a03;
  *(undefined4 *)((int)param_1 + 0x1e) = 0xfe9a335b;
  *(undefined4 *)((int)param_1 + 0x22) = 0xdd97761a;
  *(undefined4 *)((int)param_1 + 0x26) = 0x25af4fa1;
  *(undefined4 *)((int)param_1 + 0x2a) = 0x8b260759;
  *(undefined4 *)((int)param_1 + 0x2e) = 0x2a26b389;
  *(undefined2 *)((int)param_1 + 0x32) = 0x4b76;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001549e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000154f0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001554e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000155a0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000155fe(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  *(undefined *)(param_1 + 1) = 0x34;
  *(undefined4 *)((int)param_1 + 5) = 0x45df4305;
  *(undefined *)((int)param_1 + 9) = 0x34;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001562e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015680(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000156de(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015730(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001578e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000157e0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001583e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015890(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000158ee(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015940(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001599e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000159f0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015a4e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015aa0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015afe(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015b50(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015bae(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015c00(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015c5e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015cb0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015d0e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015d60(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015dbe(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015e10(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015e6e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015ec0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015f1e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015f70(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00015fce(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016020(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001607e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000160d0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001612e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016180(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000161de(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016230(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001628e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000162e0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001633e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016390(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000163ee(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016440(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001649e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000164f0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001654e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000165a0(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  *(undefined2 *)(param_1 + 5) = 0xc7fc;
  *(undefined4 *)((int)param_1 + 0x16) = 0x5cc45e14;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xf1db295d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x89857a48;
  *(undefined4 *)((int)param_1 + 0x22) = 0x7da500b0;
  *(undefined4 *)((int)param_1 + 0x26) = 0x85671e43;
  *(undefined2 *)((int)param_1 + 0x2a) = 0xc790;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001660c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001665e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000166bc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001670e(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001676c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000167be(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  param_1[6] = 0x61264b18;
  param_1[7] = 0x5fd85a03;
  param_1[8] = 0xfe9a335b;
  param_1[9] = 0xdd97761a;
  param_1[10] = 0x38b84fa1;
  param_1[0xb] = 0x9d6a0643;
  param_1[0xc] = 0x2b3bb0dc;
  param_1[0xd] = 0x6151247c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001683a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001688c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000168ea(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001693c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001699a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000169ec(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016a4a(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x12] = 0xe7e59bbe;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002e2e0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x4cU >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016a9a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016aec(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016b4a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016b9c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016bfa(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x13] = 0x1da4c9e2;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002e340 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x50U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016c4a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016c9c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016cfa(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016d4c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016daa(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016dfc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016e5a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016eac(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016f0a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016f5c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00016fba(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001700c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001706a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000170bc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001711a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001716c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000171ca(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001721c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001727a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000172cc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001732a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001737c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000173da(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001742c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001748a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000174dc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001753a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001758c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000175ea(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001763c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001769a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000176ec(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd3e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc890332d;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001774a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001779c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000177fa(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001784c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000178aa(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000178fc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001795a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000179ac(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017a0a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017a5c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017aba(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017b0c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017b6a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017bbc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017c1a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017c6c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017cca(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017d1c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017d7a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017dcc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017e2a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017e7c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017eda(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017f2c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017f8a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_00017fdc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001803a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001808c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000180ea(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001813c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001819a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000181ec(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001824a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001829c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000182fa(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0001834c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000183aa(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  *(undefined4 *)((int)param_1 + 0xb) = 0xca6fc4a9;
  *(undefined4 *)((int)param_1 + 0xf) = 0x11eb1a1b;
  *(undefined4 *)((int)param_1 + 0x13) = 0xf2c83571;
  *(undefined4 *)((int)param_1 + 0x17) = 0x8cd63d1a;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xca65b78c;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_000183fc(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  *(undefined2 *)(param_1 + 4) = 0x7330;
  *(undefined4 *)((int)param_1 + 0x12) = 0x74e56801;
  *(undefined4 *)((int)param_1 + 0x16) = 0xd8e51366;
  *(undefined4 *)((int)param_1 + 0x1a) = 0xc8903339;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x39af03ad;
  *(undefined2 *)((int)param_1 + 0x22) = 0x7311;
  return param_1;
}


/*
Unable to decompile 'FUN_00018459'
Cause: Exception while decompiling 00018459: process: timeout

*/


// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_00027e51(int param_1,int param_2)

{
  undefined uVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined local_1158 [24];
  undefined auStack_1140 [24];
  undefined local_1128;
  undefined local_1127 [29];
  undefined auStack_110a [29];
  undefined local_10ed;
  undefined local_10ec [32];
  undefined auStack_10cc [32];
  undefined local_10ac;
  undefined local_10ab [33];
  undefined auStack_108a [33];
  undefined local_1069;
  undefined local_1068 [34];
  undefined auStack_1046 [34];
  undefined local_1024;
  undefined local_1023 [35];
  undefined auStack_1000 [35];
  undefined local_fdd;
  undefined local_fdc [35];
  undefined auStack_fb9 [35];
  undefined local_f96;
  undefined local_f95 [35];
  undefined auStack_f72 [35];
  undefined local_f4f;
  undefined local_f4e [35];
  undefined auStack_f2b [35];
  undefined local_f08;
  undefined local_f07 [34];
  undefined auStack_ee5 [34];
  undefined local_ec3;
  undefined local_ec2 [34];
  undefined auStack_ea0 [34];
  undefined local_e7e;
  undefined local_e7d [33];
  undefined auStack_e5c [33];
  undefined local_e3b;
  undefined local_e3a [32];
  undefined auStack_e1a [32];
  undefined local_dfa;
  undefined local_df9 [30];
  undefined auStack_ddb [30];
  undefined local_dbd;
  undefined local_dbc [29];
  undefined auStack_d9f [29];
  undefined local_d82;
  undefined local_d81 [39];
  undefined auStack_d5a [39];
  undefined local_d33;
  undefined local_d32 [40];
  undefined auStack_d0a [40];
  undefined local_ce2;
  undefined local_ce1 [40];
  undefined auStack_cb9 [40];
  undefined local_c91;
  undefined local_c90 [42];
  undefined auStack_c66 [42];
  undefined local_c3c;
  undefined local_c3b [42];
  undefined auStack_c11 [42];
  undefined local_be7;
  undefined local_be6 [33];
  undefined auStack_bc5 [33];
  undefined local_ba4;
  undefined local_ba3 [32];
  undefined auStack_b83 [32];
  undefined local_b63;
  undefined local_b62 [41];
  undefined auStack_b39 [41];
  undefined local_b10;
  undefined local_b0f [42];
  undefined auStack_ae5 [42];
  undefined local_abb;
  undefined local_aba [41];
  undefined auStack_a91 [41];
  undefined local_a68;
  undefined local_a67 [40];
  undefined auStack_a3f [40];
  undefined local_a17;
  undefined local_a16 [66];
  undefined auStack_9d4 [66];
  undefined local_992;
  undefined local_991 [66];
  undefined auStack_94f [66];
  undefined local_90d;
  undefined local_90c [66];
  undefined auStack_8ca [66];
  undefined local_888;
  undefined local_887 [66];
  undefined auStack_845 [66];
  undefined local_803;
  undefined local_802 [66];
  undefined auStack_7c0 [66];
  undefined local_77e;
  undefined local_77d [66];
  undefined auStack_73b [66];
  undefined local_6f9;
  undefined local_6f8 [66];
  undefined auStack_6b6 [66];
  undefined local_674;
  undefined local_673 [66];
  undefined auStack_631 [66];
  undefined local_5ef;
  undefined local_5ee [66];
  undefined auStack_5ac [66];
  undefined local_56a;
  undefined local_569 [66];
  undefined auStack_527 [66];
  undefined local_4e5;
  undefined local_4e4 [66];
  undefined auStack_4a2 [66];
  undefined local_460;
  undefined local_45f [66];
  undefined auStack_41d [66];
  undefined local_3db;
  undefined local_3da [66];
  undefined auStack_398 [66];
  undefined local_356;
  undefined local_355 [66];
  undefined auStack_313 [66];
  undefined local_2d1;
  undefined local_2d0 [66];
  undefined auStack_28e [66];
  undefined local_24c;
  undefined local_24b [66];
  undefined auStack_209 [66];
  undefined local_1c7;
  undefined local_1c6 [66];
  undefined auStack_184 [66];
  undefined local_142;
  undefined local_141 [66];
  undefined auStack_ff [66];
  undefined local_bd;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    FUN_0002a26c(local_1158,&local_1128);
    for (local_10 = 0; local_10 < 0x17; local_10 = local_10 + 1) {
      puVar2 = (undefined *)FUN_0002b774(auStack_1140,local_10);
      uVar1 = FUN_0002b798(local_1158,*puVar2,local_10);
      puVar2 = (undefined *)FUN_0002b774(auStack_1140,local_10);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b774(auStack_1140,0x17);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002b7c8(auStack_1140);
    DAT_00035340 = strdup(pcVar3);
    FUN_0002a316(local_1127,&local_10ed);
    for (local_14 = 0; local_14 < 0x1c; local_14 = local_14 + 1) {
      puVar2 = (undefined *)FUN_0002b7ea(auStack_110a,local_14);
      uVar1 = FUN_0002b80e(local_1127,*puVar2,local_14);
      puVar2 = (undefined *)FUN_0002b7ea(auStack_110a,local_14);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b7ea(auStack_110a,0x1c);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002b83e(auStack_110a);
    DAT_00035344 = strdup(pcVar3);
    FUN_0002a3d6(local_10ec,&local_10ac);
    for (local_18 = 0; local_18 < 0x1f; local_18 = local_18 + 1) {
      puVar2 = (undefined *)FUN_0002b860(auStack_10cc,local_18);
      uVar1 = FUN_0002b884(local_10ec,*puVar2,local_18);
      puVar2 = (undefined *)FUN_0002b860(auStack_10cc,local_18);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b860(auStack_10cc,0x1f);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002b8b4(auStack_10cc);
    DAT_00035348 = strdup(pcVar3);
    FUN_0002a49c(local_10ab,&local_1069);
    for (local_1c = 0; local_1c < 0x20; local_1c = local_1c + 1) {
      puVar2 = (undefined *)FUN_0002b8d6(auStack_108a,local_1c);
      uVar1 = FUN_0002b8fa(local_10ab,*puVar2,local_1c);
      puVar2 = (undefined *)FUN_0002b8d6(auStack_108a,local_1c);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b8d6(auStack_108a,0x20);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002b92a(auStack_108a);
    DAT_0003534c = strdup(pcVar3);
    FUN_0002a528(local_1068,&local_1024);
    for (local_20 = 0; local_20 < 0x21; local_20 = local_20 + 1) {
      puVar2 = (undefined *)FUN_0002b94c(auStack_1046,local_20);
      uVar1 = FUN_0002b970(local_1068,*puVar2,local_20);
      puVar2 = (undefined *)FUN_0002b94c(auStack_1046,local_20);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b94c(auStack_1046,0x21);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002b9a0(auStack_1046);
    DAT_00035350 = strdup(pcVar3);
    FUN_0002a5b4(local_1023,&local_fdd);
    for (local_24 = 0; local_24 < 0x22; local_24 = local_24 + 1) {
      puVar2 = (undefined *)FUN_0002b9c2(auStack_1000,local_24);
      uVar1 = FUN_0002b9e6(local_1023,*puVar2,local_24);
      puVar2 = (undefined *)FUN_0002b9c2(auStack_1000,local_24);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b9c2(auStack_1000,0x22);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002ba16(auStack_1000);
    DAT_00035354 = strdup(pcVar3);
    FUN_0002a604(local_fdc,&local_f96);
    for (local_28 = 0; local_28 < 0x22; local_28 = local_28 + 1) {
      puVar2 = (undefined *)FUN_0002b9c2(auStack_fb9,local_28);
      uVar1 = FUN_0002b9e6(local_fdc,*puVar2,local_28);
      puVar2 = (undefined *)FUN_0002b9c2(auStack_fb9,local_28);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b9c2(auStack_fb9,0x22);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002ba16(auStack_fb9);
    DAT_00035358 = strdup(pcVar3);
    FUN_0002a654(local_f95,&local_f4f);
    for (local_2c = 0; local_2c < 0x22; local_2c = local_2c + 1) {
      puVar2 = (undefined *)FUN_0002b9c2(auStack_f72,local_2c);
      uVar1 = FUN_0002b9e6(local_f95,*puVar2,local_2c);
      puVar2 = (undefined *)FUN_0002b9c2(auStack_f72,local_2c);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b9c2(auStack_f72,0x22);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002ba16(auStack_f72);
    DAT_0003535c = strdup(pcVar3);
    FUN_0002a6a4(local_f4e,&local_f08);
    for (local_30 = 0; local_30 < 0x22; local_30 = local_30 + 1) {
      puVar2 = (undefined *)FUN_0002b9c2(auStack_f2b,local_30);
      uVar1 = FUN_0002b9e6(local_f4e,*puVar2,local_30);
      puVar2 = (undefined *)FUN_0002b9c2(auStack_f2b,local_30);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b9c2(auStack_f2b,0x22);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002ba16(auStack_f2b);
    DAT_00035360 = strdup(pcVar3);
    FUN_0002a6f4(local_f07,&local_ec3);
    for (local_34 = 0; local_34 < 0x21; local_34 = local_34 + 1) {
      puVar2 = (undefined *)FUN_0002b94c(auStack_ee5,local_34);
      uVar1 = FUN_0002b970(local_f07,*puVar2,local_34);
      puVar2 = (undefined *)FUN_0002b94c(auStack_ee5,local_34);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b94c(auStack_ee5,0x21);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002b9a0(auStack_ee5);
    DAT_00035364 = strdup(pcVar3);
    FUN_0002a744(local_ec2,&local_e7e);
    for (local_38 = 0; local_38 < 0x21; local_38 = local_38 + 1) {
      puVar2 = (undefined *)FUN_0002b94c(auStack_ea0,local_38);
      uVar1 = FUN_0002b970(local_ec2,*puVar2,local_38);
      puVar2 = (undefined *)FUN_0002b94c(auStack_ea0,local_38);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b94c(auStack_ea0,0x21);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002b9a0(auStack_ea0);
    DAT_00035368 = strdup(pcVar3);
    FUN_0002a794(local_e7d,&local_e3b);
    for (local_3c = 0; local_3c < 0x20; local_3c = local_3c + 1) {
      puVar2 = (undefined *)FUN_0002b8d6(auStack_e5c,local_3c);
      uVar1 = FUN_0002b8fa(local_e7d,*puVar2,local_3c);
      puVar2 = (undefined *)FUN_0002b8d6(auStack_e5c,local_3c);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b8d6(auStack_e5c,0x20);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002b92a(auStack_e5c);
    DAT_0003536c = strdup(pcVar3);
    FUN_0002a7e4(local_e3a,&local_dfa);
    for (local_40 = 0; local_40 < 0x1f; local_40 = local_40 + 1) {
      puVar2 = (undefined *)FUN_0002b860(auStack_e1a,local_40);
      uVar1 = FUN_0002b884(local_e3a,*puVar2,local_40);
      puVar2 = (undefined *)FUN_0002b860(auStack_e1a,local_40);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b860(auStack_e1a,0x1f);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002b8b4(auStack_e1a);
    DAT_00035370 = strdup(pcVar3);
    FUN_0002a8aa(local_df9,&local_dbd);
    for (local_44 = 0; local_44 < 0x1d; local_44 = local_44 + 1) {
      puVar2 = (undefined *)FUN_0002ba38(auStack_ddb,local_44);
      uVar1 = FUN_0002ba5c(local_df9,*puVar2,local_44);
      puVar2 = (undefined *)FUN_0002ba38(auStack_ddb,local_44);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002ba38(auStack_ddb,0x1d);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002ba8c(auStack_ddb);
    DAT_00035374 = strdup(pcVar3);
    FUN_0002a932(local_dbc,&local_d82);
    for (local_48 = 0; local_48 < 0x1c; local_48 = local_48 + 1) {
      puVar2 = (undefined *)FUN_0002b7ea(auStack_d9f,local_48);
      uVar1 = FUN_0002b80e(local_dbc,*puVar2,local_48);
      puVar2 = (undefined *)FUN_0002b7ea(auStack_d9f,local_48);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b7ea(auStack_d9f,0x1c);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002b83e(auStack_d9f);
    DAT_00035378 = strdup(pcVar3);
    FUN_0002a9f2(local_d81,&local_d33);
    for (local_4c = 0; local_4c < 0x26; local_4c = local_4c + 1) {
      puVar2 = (undefined *)FUN_0002baae(auStack_d5a,local_4c);
      uVar1 = FUN_0002bad2(local_d81,*puVar2,local_4c);
      puVar2 = (undefined *)FUN_0002baae(auStack_d5a,local_4c);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002baae(auStack_d5a,0x26);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bb02(auStack_d5a);
    DAT_0003537c = strdup(pcVar3);
    FUN_0002aa7e(local_d32,&local_ce2);
    for (local_50 = 0; local_50 < 0x27; local_50 = local_50 + 1) {
      puVar2 = (undefined *)FUN_0002bb24(auStack_d0a,local_50);
      uVar1 = FUN_0002bb48(local_d32,*puVar2,local_50);
      puVar2 = (undefined *)FUN_0002bb24(auStack_d0a,local_50);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bb24(auStack_d0a,0x27);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bb78(auStack_d0a);
    DAT_00035380 = strdup(pcVar3);
    FUN_0002aace(local_ce1,&local_c91);
    for (local_54 = 0; local_54 < 0x27; local_54 = local_54 + 1) {
      puVar2 = (undefined *)FUN_0002bb24(auStack_cb9,local_54);
      uVar1 = FUN_0002bb48(local_ce1,*puVar2,local_54);
      puVar2 = (undefined *)FUN_0002bb24(auStack_cb9,local_54);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bb24(auStack_cb9,0x27);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bb78(auStack_cb9);
    DAT_00035384 = strdup(pcVar3);
    FUN_0002ab5a(local_c90,&local_c3c);
    for (local_58 = 0; local_58 < 0x29; local_58 = local_58 + 1) {
      puVar2 = (undefined *)FUN_0002bb9a(auStack_c66,local_58);
      uVar1 = FUN_0002bbbe(local_c90,*puVar2,local_58);
      puVar2 = (undefined *)FUN_0002bb9a(auStack_c66,local_58);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bb9a(auStack_c66,0x29);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bbee(auStack_c66);
    DAT_00035388 = strdup(pcVar3);
    FUN_0002abaa(local_c3b,&local_be7);
    for (local_5c = 0; local_5c < 0x29; local_5c = local_5c + 1) {
      puVar2 = (undefined *)FUN_0002bb9a(auStack_c11,local_5c);
      uVar1 = FUN_0002bbbe(local_c3b,*puVar2,local_5c);
      puVar2 = (undefined *)FUN_0002bb9a(auStack_c11,local_5c);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bb9a(auStack_c11,0x29);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bbee(auStack_c11);
    DAT_0003538c = strdup(pcVar3);
    FUN_0002abfa(local_be6,&local_ba4);
    for (local_60 = 0; local_60 < 0x20; local_60 = local_60 + 1) {
      puVar2 = (undefined *)FUN_0002b8d6(auStack_bc5,local_60);
      uVar1 = FUN_0002b8fa(local_be6,*puVar2,local_60);
      puVar2 = (undefined *)FUN_0002b8d6(auStack_bc5,local_60);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b8d6(auStack_bc5,0x20);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002b92a(auStack_bc5);
    DAT_00035390 = strdup(pcVar3);
    FUN_0002ac4a(local_ba3,&local_b63);
    for (local_64 = 0; local_64 < 0x1f; local_64 = local_64 + 1) {
      puVar2 = (undefined *)FUN_0002b860(auStack_b83,local_64);
      uVar1 = FUN_0002b884(local_ba3,*puVar2,local_64);
      puVar2 = (undefined *)FUN_0002b860(auStack_b83,local_64);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002b860(auStack_b83,0x1f);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002b8b4(auStack_b83);
    DAT_00035394 = strdup(pcVar3);
    FUN_0002ad10(local_b62,&local_b10);
    for (local_68 = 0; local_68 < 0x28; local_68 = local_68 + 1) {
      puVar2 = (undefined *)FUN_0002bc10(auStack_b39,local_68);
      uVar1 = FUN_0002bc34(local_b62,*puVar2,local_68);
      puVar2 = (undefined *)FUN_0002bc10(auStack_b39,local_68);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc10(auStack_b39,0x28);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bc64(auStack_b39);
    DAT_00035398 = strdup(pcVar3);
    FUN_0002ad60(local_b0f,&local_abb);
    for (local_6c = 0; local_6c < 0x29; local_6c = local_6c + 1) {
      puVar2 = (undefined *)FUN_0002bb9a(auStack_ae5,local_6c);
      uVar1 = FUN_0002bbbe(local_b0f,*puVar2,local_6c);
      puVar2 = (undefined *)FUN_0002bb9a(auStack_ae5,local_6c);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bb9a(auStack_ae5,0x29);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bbee(auStack_ae5);
    DAT_0003539c = strdup(pcVar3);
    FUN_0002adb0(local_aba,&local_a68);
    for (local_70 = 0; local_70 < 0x28; local_70 = local_70 + 1) {
      puVar2 = (undefined *)FUN_0002bc10(auStack_a91,local_70);
      uVar1 = FUN_0002bc34(local_aba,*puVar2,local_70);
      puVar2 = (undefined *)FUN_0002bc10(auStack_a91,local_70);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc10(auStack_a91,0x28);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bc64(auStack_a91);
    DAT_000353a0 = strdup(pcVar3);
    FUN_0002ae00(local_a67,&local_a17);
    for (local_74 = 0; local_74 < 0x27; local_74 = local_74 + 1) {
      puVar2 = (undefined *)FUN_0002bb24(auStack_a3f,local_74);
      uVar1 = FUN_0002bb48(local_a67,*puVar2,local_74);
      puVar2 = (undefined *)FUN_0002bb24(auStack_a3f,local_74);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bb24(auStack_a3f,0x27);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bb78(auStack_a3f);
    DAT_000353a4 = strdup(pcVar3);
    FUN_0002ae8c(local_a16,&local_992);
    for (local_78 = 0; local_78 < 0x41; local_78 = local_78 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_9d4,local_78);
      uVar1 = FUN_0002bcaa(local_a16,*puVar2,local_78);
      puVar2 = (undefined *)FUN_0002bc86(auStack_9d4,local_78);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_9d4,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_9d4);
    DAT_000353c0 = strdup(pcVar3);
    FUN_0002aedc(local_991,&local_90d);
    for (local_7c = 0; local_7c < 0x41; local_7c = local_7c + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_94f,local_7c);
      uVar1 = FUN_0002bcaa(local_991,*puVar2,local_7c);
      puVar2 = (undefined *)FUN_0002bc86(auStack_94f,local_7c);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_94f,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_94f);
    DAT_000353c4 = strdup(pcVar3);
    FUN_0002af2c(local_90c,&local_888);
    for (local_80 = 0; local_80 < 0x41; local_80 = local_80 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_8ca,local_80);
      uVar1 = FUN_0002bcaa(local_90c,*puVar2,local_80);
      puVar2 = (undefined *)FUN_0002bc86(auStack_8ca,local_80);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_8ca,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_8ca);
    DAT_000353c8 = strdup(pcVar3);
    FUN_0002af7c(local_887,&local_803);
    for (local_84 = 0; local_84 < 0x41; local_84 = local_84 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_845,local_84);
      uVar1 = FUN_0002bcaa(local_887,*puVar2,local_84);
      puVar2 = (undefined *)FUN_0002bc86(auStack_845,local_84);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_845,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_845);
    DAT_000353cc = strdup(pcVar3);
    FUN_0002afcc(local_802,&local_77e);
    for (local_88 = 0; local_88 < 0x41; local_88 = local_88 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_7c0,local_88);
      uVar1 = FUN_0002bcaa(local_802,*puVar2,local_88);
      puVar2 = (undefined *)FUN_0002bc86(auStack_7c0,local_88);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_7c0,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_7c0);
    DAT_000353d0 = strdup(pcVar3);
    FUN_0002b01c(local_77d,&local_6f9);
    for (local_8c = 0; local_8c < 0x41; local_8c = local_8c + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_73b,local_8c);
      uVar1 = FUN_0002bcaa(local_77d,*puVar2,local_8c);
      puVar2 = (undefined *)FUN_0002bc86(auStack_73b,local_8c);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_73b,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_73b);
    DAT_000353d4 = strdup(pcVar3);
    FUN_0002b06c(local_6f8,&local_674);
    for (local_90 = 0; local_90 < 0x41; local_90 = local_90 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_6b6,local_90);
      uVar1 = FUN_0002bcaa(local_6f8,*puVar2,local_90);
      puVar2 = (undefined *)FUN_0002bc86(auStack_6b6,local_90);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_6b6,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_6b6);
    DAT_000353d8 = strdup(pcVar3);
    FUN_0002b0bc(local_673,&local_5ef);
    for (local_94 = 0; local_94 < 0x41; local_94 = local_94 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_631,local_94);
      uVar1 = FUN_0002bcaa(local_673,*puVar2,local_94);
      puVar2 = (undefined *)FUN_0002bc86(auStack_631,local_94);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_631,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_631);
    DAT_000353dc = strdup(pcVar3);
    FUN_0002b10c(local_5ee,&local_56a);
    for (local_98 = 0; local_98 < 0x41; local_98 = local_98 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_5ac,local_98);
      uVar1 = FUN_0002bcaa(local_5ee,*puVar2,local_98);
      puVar2 = (undefined *)FUN_0002bc86(auStack_5ac,local_98);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_5ac,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_5ac);
    DAT_000353e0 = strdup(pcVar3);
    FUN_0002b15c(local_569,&local_4e5);
    for (local_9c = 0; local_9c < 0x41; local_9c = local_9c + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_527,local_9c);
      uVar1 = FUN_0002bcaa(local_569,*puVar2,local_9c);
      puVar2 = (undefined *)FUN_0002bc86(auStack_527,local_9c);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_527,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_527);
    DAT_000353e4 = strdup(pcVar3);
    FUN_0002b1ac(local_4e4,&local_460);
    for (local_a0 = 0; local_a0 < 0x41; local_a0 = local_a0 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_4a2,local_a0);
      uVar1 = FUN_0002bcaa(local_4e4,*puVar2,local_a0);
      puVar2 = (undefined *)FUN_0002bc86(auStack_4a2,local_a0);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_4a2,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_4a2);
    DAT_000353e8 = strdup(pcVar3);
    FUN_0002b1fc(local_45f,&local_3db);
    for (local_a4 = 0; local_a4 < 0x41; local_a4 = local_a4 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_41d,local_a4);
      uVar1 = FUN_0002bcaa(local_45f,*puVar2,local_a4);
      puVar2 = (undefined *)FUN_0002bc86(auStack_41d,local_a4);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_41d,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_41d);
    DAT_000353ec = strdup(pcVar3);
    FUN_0002b24c(local_3da,&local_356);
    for (local_a8 = 0; local_a8 < 0x41; local_a8 = local_a8 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_398,local_a8);
      uVar1 = FUN_0002bcaa(local_3da,*puVar2,local_a8);
      puVar2 = (undefined *)FUN_0002bc86(auStack_398,local_a8);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_398,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_398);
    DAT_000353f0 = strdup(pcVar3);
    FUN_0002b29c(local_355,&local_2d1);
    for (local_ac = 0; local_ac < 0x41; local_ac = local_ac + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_313,local_ac);
      uVar1 = FUN_0002bcaa(local_355,*puVar2,local_ac);
      puVar2 = (undefined *)FUN_0002bc86(auStack_313,local_ac);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_313,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_313);
    DAT_000353f4 = strdup(pcVar3);
    FUN_0002b2ec(local_2d0,&local_24c);
    for (local_b0 = 0; local_b0 < 0x41; local_b0 = local_b0 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_28e,local_b0);
      uVar1 = FUN_0002bcaa(local_2d0,*puVar2,local_b0);
      puVar2 = (undefined *)FUN_0002bc86(auStack_28e,local_b0);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_28e,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_28e);
    DAT_000353f8 = strdup(pcVar3);
    FUN_0002b33c(local_24b,&local_1c7);
    for (local_b4 = 0; local_b4 < 0x41; local_b4 = local_b4 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_209,local_b4);
      uVar1 = FUN_0002bcaa(local_24b,*puVar2,local_b4);
      puVar2 = (undefined *)FUN_0002bc86(auStack_209,local_b4);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_209,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_209);
    DAT_000353fc = strdup(pcVar3);
    FUN_0002b38c(local_1c6,&local_142);
    for (local_b8 = 0; local_b8 < 0x41; local_b8 = local_b8 + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_184,local_b8);
      uVar1 = FUN_0002bcaa(local_1c6,*puVar2,local_b8);
      puVar2 = (undefined *)FUN_0002bc86(auStack_184,local_b8);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_184,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_184);
    DAT_00035400 = strdup(pcVar3);
    FUN_0002b3dc(local_141,&local_bd);
    for (local_bc = 0; local_bc < 0x41; local_bc = local_bc + 1) {
      puVar2 = (undefined *)FUN_0002bc86(auStack_ff,local_bc);
      uVar1 = FUN_0002bcaa(local_141,*puVar2,local_bc);
      puVar2 = (undefined *)FUN_0002bc86(auStack_ff,local_bc);
      *puVar2 = uVar1;
    }
    puVar2 = (undefined *)FUN_0002bc86(auStack_ff,0x41);
    *puVar2 = 0;
    pcVar3 = (char *)FUN_0002bcda(auStack_ff);
    DAT_00035404 = strdup(pcVar3);
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void _INIT_1(void)

{
  FUN_00027e51(1,0xffff);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002a230(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a254(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002a254(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a26c(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  param_1[6] = 0x11961b60;
  param_1[7] = 0xbd9a6714;
  param_1[8] = 0x89d63348;
  param_1[9] = 0x7dea4fe4;
  param_1[10] = 0x9c730645;
  param_1[0xb] = 0x4527b289;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002a2da(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a2fe(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002a2fe(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a316(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  param_1[6] = 0x61264b18;
  *(undefined *)(param_1 + 7) = 0xcc;
  *(undefined4 *)((int)param_1 + 0x1d) = 0x11961b60;
  *(undefined4 *)((int)param_1 + 0x21) = 0xbd9a6714;
  *(undefined4 *)((int)param_1 + 0x25) = 0x89d63348;
  *(undefined4 *)((int)param_1 + 0x29) = 0x79bf1ae4;
  *(undefined4 *)((int)param_1 + 0x2d) = 0xcd225714;
  *(undefined4 *)((int)param_1 + 0x31) = 0x6176e3d8;
  *(undefined4 *)((int)param_1 + 0x35) = 0x14536f3c;
  *(undefined *)((int)param_1 + 0x39) = 0xcc;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002a39a(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a3be(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002a3be(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a3d6(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  param_1[6] = 0x61264b18;
  param_1[7] = 0x3d520fcc;
  param_1[8] = 0x11961b60;
  param_1[9] = 0xbd9a6714;
  param_1[10] = 0xdc833348;
  param_1[0xb] = 0x79ee4be0;
  param_1[0xc] = 0xcd225714;
  param_1[0xd] = 0x6176e3d8;
  param_1[0xe] = 0x45026f3c;
  param_1[0xf] = 0x3d277ae8;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002a460(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a484(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002a484(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a49c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  *(undefined4 *)((int)param_1 + 0x3e) = 0x4048762b;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d020 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x42U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002a4ec(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a510(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002a510(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a528(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x10] = 0xb351976;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d080 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x44U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002a578(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a59c(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002a59c(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a5b4(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  *(undefined4 *)((int)param_1 + 0x42) = 0x9e7e6419;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d0e0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x46U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a604(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  *(undefined4 *)((int)param_1 + 0x42) = 0x9e7e6419;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d0e0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x46U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a654(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  *(undefined4 *)((int)param_1 + 0x42) = 0x9e7e6419;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d140 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x46U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a6a4(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  *(undefined4 *)((int)param_1 + 0x42) = 0x9e2c6419;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d1a0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x46U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a6f4(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x10] = 0xb641976;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d200 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x44U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a744(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x10] = 0xb641976;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d260 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x44U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a794(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  *(undefined4 *)((int)param_1 + 0x3e) = 0x401a762b;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d2c0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x42U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a7e4(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  param_1[6] = 0x61264b18;
  param_1[7] = 0x3d520fcc;
  param_1[8] = 0x11961b60;
  param_1[9] = 0xbd9a6714;
  param_1[10] = 0x8dd13348;
  param_1[0xb] = 0x79ee4be0;
  param_1[0xc] = 0xc9215714;
  param_1[0xd] = 0x6175e7dc;
  param_1[0xe] = 0x45026f3c;
  param_1[0xf] = 0x3d752be8;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002a86e(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a892(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002a892(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a8aa(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  param_1[6] = 0x61264b18;
  *(undefined2 *)(param_1 + 7) = 0xfcc;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x11961b60;
  *(undefined4 *)((int)param_1 + 0x22) = 0xbd9a6714;
  *(undefined4 *)((int)param_1 + 0x26) = 0x89d63348;
  *(undefined4 *)((int)param_1 + 0x2a) = 0x79ee4bb1;
  *(undefined4 *)((int)param_1 + 0x2e) = 0xcd225714;
  *(undefined4 *)((int)param_1 + 0x32) = 0x6176e389;
  *(undefined4 *)((int)param_1 + 0x36) = 0x45026f3c;
  *(undefined2 *)((int)param_1 + 0x3a) = 0xfb9;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a932(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  param_1[6] = 0x61264b18;
  *(undefined *)(param_1 + 7) = 0xcc;
  *(undefined4 *)((int)param_1 + 0x1d) = 0x11961b60;
  *(undefined4 *)((int)param_1 + 0x21) = 0xbd9a6714;
  *(undefined4 *)((int)param_1 + 0x25) = 0x89d63348;
  *(undefined4 *)((int)param_1 + 0x29) = 0x7aee1ae4;
  *(undefined4 *)((int)param_1 + 0x2d) = 0xce225414;
  *(undefined4 *)((int)param_1 + 0x31) = 0x6276e0d8;
  *(undefined4 *)((int)param_1 + 0x35) = 0x14026c3c;
  *(undefined *)((int)param_1 + 0x39) = 0xcc;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002a9b6(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a9da(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002a9da(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002a9f2(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  *(undefined4 *)((int)param_1 + 0x4a) = 0x8a92b9d4;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d320 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x4eU >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002aa42(undefined4 param_1,undefined4 param_2)

{
  FUN_0002aa66(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002aa66(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002aa7e(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x13] = 0x1daec3e8;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d380 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x50U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002aace(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x13] = 0x1daec3e8;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d3e0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x50U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002ab1e(undefined4 param_1,undefined4 param_2)

{
  FUN_0002ab42(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002ab42(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002ab5a(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x14] = 0xb3f439ae;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d440 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x54U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002abaa(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x14] = 0xb3f739ae;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d4a0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x54U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002abfa(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  *(undefined4 *)((int)param_1 + 0x3e) = 0x401a7528;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d500 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x42U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002ac4a(undefined4 *param_1)

{
  *param_1 = 0x31b63b40;
  param_1[1] = 0x9dba4734;
  param_1[2] = 0xa9f61368;
  param_1[3] = 0x5dca6fc4;
  param_1[4] = 0xe9067330;
  param_1[5] = 0x4552c7fc;
  param_1[6] = 0x61264b18;
  param_1[7] = 0x3d520fcc;
  param_1[8] = 0x11961b60;
  param_1[9] = 0xbd9a6714;
  param_1[10] = 0xdcd63348;
  param_1[0xb] = 0x7dbf1ab1;
  param_1[0xc] = 0xcd225417;
  param_1[0xd] = 0x6176e3d8;
  param_1[0xe] = 0x45026f3c;
  param_1[0xf] = 0x3d277ab9;
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002acd4(undefined4 param_1,undefined4 param_2)

{
  FUN_0002acf8(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002acf8(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002ad10(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  *(undefined4 *)((int)param_1 + 0x4e) = 0xd039aec3;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d560 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x52U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002ad60(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x14] = 0xb3f739ae;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d5c0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x54U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002adb0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  *(undefined4 *)((int)param_1 + 0x4e) = 0xd03aadc3;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d620 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x52U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002ae00(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x13] = 0x1dadc3e8;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d680 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x50U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002ae50(undefined4 param_1,undefined4 param_2)

{
  FUN_0002ae74(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002ae74(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002ae8c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d6e0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002aedc(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a6e21;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d780 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002af2c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a772c;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d820 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002af7c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d8c0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002afcc(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d960 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b01c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002da00 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b06c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002daa0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b0bc(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a6e21;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002db40 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b10c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a772c;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002dbe0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b15c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002dc80 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b1ac(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002dd20 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b1fc(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002ddc0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b24c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002de60 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b29c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002df00 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b2ec(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002dfa0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b33c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002e040 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b38c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002e0e0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 * FUN_0002b3dc(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x31b63b40;
  param_1[0x20] = 0xb33a7738;
  iVar2 = (int)param_1 - (int)(undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  puVar3 = (undefined4 *)((int)&DAT_0002d6e0 - iVar2);
  puVar4 = (undefined4 *)((uint)(param_1 + 1) & 0xfffffffc);
  for (uVar1 = iVar2 + 0x84U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b42c(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b450(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b450(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b468(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b48c(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b48c(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b4a4(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b4c8(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b4c8(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b4e0(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b504(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b504(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b51c(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b540(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b540(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b558(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b57c(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b57c(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b594(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b5b8(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b5b8(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b5d0(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b5f4(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b5f4(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b60c(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b630(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b630(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b648(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b66c(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b66c(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b684(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b6a8(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b6a8(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b6c0(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b6e4(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b6e4(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b6fc(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b720(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b720(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b738(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b75c(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

int FUN_0002b75c(int param_1,int param_2)

{
  return param_2 + param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b774(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a254(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002b798(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002a230(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b7c8(undefined4 param_1)

{
  FUN_0002c36f(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b7ea(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a2fe(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002b80e(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002a2da(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b83e(undefined4 param_1)

{
  FUN_0002c381(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b860(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a3be(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002b884(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002a39a(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b8b4(undefined4 param_1)

{
  FUN_0002c393(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b8d6(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a484(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002b8fa(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002a460(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b92a(undefined4 param_1)

{
  FUN_0002c3a5(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b94c(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a510(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002b970(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002a4ec(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b9a0(undefined4 param_1)

{
  FUN_0002c3b7(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002b9c2(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a59c(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002b9e6(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002a578(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002ba16(undefined4 param_1)

{
  FUN_0002c3c9(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002ba38(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a892(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002ba5c(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002a86e(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002ba8c(undefined4 param_1)

{
  FUN_0002c3db(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002baae(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a9da(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002bad2(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002a9b6(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bb02(undefined4 param_1)

{
  FUN_0002c3ed(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bb24(undefined4 param_1,undefined4 param_2)

{
  FUN_0002aa66(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002bb48(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002aa42(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bb78(undefined4 param_1)

{
  FUN_0002c3ff(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bb9a(undefined4 param_1,undefined4 param_2)

{
  FUN_0002ab42(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002bbbe(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002ab1e(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bbee(undefined4 param_1)

{
  FUN_0002c411(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bc10(undefined4 param_1,undefined4 param_2)

{
  FUN_0002acf8(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002bc34(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002acd4(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bc64(undefined4 param_1)

{
  FUN_0002c423(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bc86(undefined4 param_1,undefined4 param_2)

{
  FUN_0002ae74(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002bcaa(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002ae50(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bcda(undefined4 param_1)

{
  FUN_0002c435(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bcfc(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b450(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002bd20(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b42c(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bd50(undefined4 param_1)

{
  FUN_0002c447(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bd72(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b48c(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002bd96(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b468(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bdc6(undefined4 param_1)

{
  FUN_0002c459(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bde8(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b4c8(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002be0c(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b4a4(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002be3c(undefined4 param_1)

{
  FUN_0002c46b(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002be5e(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b504(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002be82(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b4e0(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002beb2(undefined4 param_1)

{
  FUN_0002c47d(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bed4(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b540(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002bef8(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b51c(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bf28(undefined4 param_1)

{
  FUN_0002c48f(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bf4a(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b57c(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002bf6e(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b558(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bf9e(undefined4 param_1)

{
  FUN_0002c4a1(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002bfc0(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b5b8(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002bfe4(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b594(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c014(undefined4 param_1)

{
  FUN_0002c4b3(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c036(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b5f4(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002c05a(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b5d0(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c08a(undefined4 param_1)

{
  FUN_0002c4c5(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c0ac(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b630(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002c0d0(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b60c(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c100(undefined4 param_1)

{
  FUN_0002c4d7(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c122(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b66c(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002c146(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b648(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c176(undefined4 param_1)

{
  FUN_0002c4e9(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c198(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b6a8(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002c1bc(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b684(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c1ec(undefined4 param_1)

{
  FUN_0002c4fb(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c20e(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b6e4(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002c232(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b6c0(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c262(undefined4 param_1)

{
  FUN_0002c50d(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c284(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b720(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002c2a8(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b6fc(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c2d8(undefined4 param_1)

{
  FUN_0002c51f(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c2fa(undefined4 param_1,undefined4 param_2)

{
  FUN_0002b75c(param_1,param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

byte FUN_0002c31e(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0002b738(param_1,param_3);
  return *pbVar1 ^ param_2;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

void FUN_0002c34e(undefined4 param_1)

{
  FUN_0002c531(param_1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c36f(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c381(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c393(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c3a5(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c3b7(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c3c9(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c3db(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c3ed(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c3ff(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c411(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c423(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c435(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c447(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c459(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c46b(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c47d(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c48f(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c4a1(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c4b3(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c4c5(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c4d7(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c4e9(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c4fb(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c50d(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c51f(undefined4 param_1)

{
  return param_1;
}



// WARNING: Function: __i686.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax

undefined4 FUN_0002c531(undefined4 param_1)

{
  return param_1;
}



// WARNING: This is an inlined function

undefined4 __i686_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _DT_FINI(void)

{
  return;
}


