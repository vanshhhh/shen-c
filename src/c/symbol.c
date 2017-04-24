#include "symbol.h"

unsigned long auto_increment_symbol_name_id = 0;
char* auto_increment_symbol_name_prefix = "G__";
khash_t(SymbolNameTable)* symbol_name_table;

extern char* get_symbol_name (Symbol* symbol);
extern void set_symbol_name (Symbol* symbol, char* symbol_name);
extern KLObject* get_symbol_function (Symbol* symbol);
extern void set_symbol_function (Symbol* symbol, KLObject* function_object);
extern KLObject* get_symbol_variable_value (Symbol* symbol);
extern void set_symbol_variable_value (Symbol* symbol,
                                       KLObject* variable_value_object);
extern Symbol* create_symbol (char* symbol_name);

extern Symbol* get_symbol (KLObject* symbol_object);
extern void set_symbol (KLObject* symbol_object, Symbol* symbol);
extern KLObject* create_kl_symbol (char* symbol_name);
extern char* get_kl_symbol_name (KLObject* symbol_object);
extern void set_kl_symbol_name (KLObject* symbol_object, char* symbol_name);
extern KLObject* get_kl_symbol_function (KLObject* symbol_object);
extern void set_kl_symbol_function (KLObject* symbol_object,
                                    KLObject* function_object);
extern KLObject* get_kl_symbol_variable_value (KLObject* symbol_object);
extern void set_kl_symbol_variable_value (KLObject* symbol_object,
                                          KLObject* variable_value_object);
extern bool is_kl_symbol (KLObject* object);
extern bool is_symbol_equal (Symbol* left_symbol, Symbol* right_symbol);
extern bool is_kl_symbol_equal (KLObject* left_object, KLObject* right_object);

extern unsigned long get_auto_increment_symbol_name_id (void);
extern unsigned long pre_increment_auto_increment_symbol_name_id (void);
extern char* get_auto_increment_symbol_name_prefix (void);
extern char* create_auto_increment_symbol_name (void);
extern KLObject* create_auto_increment_kl_symbol (void);

extern khash_t(SymbolNameTable)* get_symbol_name_table (void);
extern void initialize_symbol_name_table (void);
extern KLObject* lookup_symbol_name_table (char* symbol_name);
extern void extend_symbol_name_table (char* symbol_name, KLObject* object);
