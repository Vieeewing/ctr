#ifndef _SETTINGS_H_
#define _SETTINGS_H_

#include "types.h"
#include "keyset.h"
#include "filepath.h"

typedef struct
{
	keyset keys;
	filepath exefspath;
	filepath exefsdirpath;
	filepath firmdirpath;
	filepath romfspath;
	filepath exheaderpath;
	filepath certspath;
	filepath contentpath;
	filepath tikpath;
	filepath tmdpath;
	filepath metapath;	
	filepath lzsspath;
	unsigned int mediaunitsize;
	int ignoreprogramid;
} settings;

void settings_init(settings* usersettings);
filepath* settings_get_lzss_path(settings* usersettings);
filepath* settings_get_exefs_path(settings* usersettings);
filepath* settings_get_romfs_path(settings* usersettings);
filepath* settings_get_exheader_path(settings* usersettings);
filepath* settings_get_certs_path(settings* usersettings);
filepath* settings_get_tik_path(settings* usersettings);
filepath* settings_get_tmd_path(settings* usersettings);
filepath* settings_get_meta_path(settings* usersettings);
filepath* settings_get_content_path(settings* usersettings);
filepath* settings_get_exefs_dir_path(settings* usersettings);
filepath* settings_get_firm_dir_path(settings* usersettings);
unsigned int settings_get_mediaunit_size(settings* usersettings);
unsigned char* settings_get_ncch_key(settings* usersettings);
unsigned char* settings_get_common_key(settings* usersettings);
int settings_is_common_key_valid(settings* usersettings);
int settings_get_ignore_programid(settings* usersettings);

void settings_set_lzss_path(settings* usersettings, const char* path);
void settings_set_exefs_path(settings* usersettings, const char* path);
void settings_set_romfs_path(settings* usersettings, const char* path);
void settings_set_exheader_path(settings* usersettings, const char* path);
void settings_set_certs_path(settings* usersettings, const char* path);
void settings_set_tik_path(settings* usersettings, const char* path);
void settings_set_tmd_path(settings* usersettings, const char* path);
void settings_set_meta_path(settings* usersettings, const char* path);
void settings_set_content_path(settings* usersettings, const char* path);
void settings_set_exefs_dir_path(settings* usersettings, const char* path);
void settings_set_firm_dir_path(settings* usersettings, const char* path);
void settings_set_mediaunit_size(settings* usersettings, unsigned int size);
void settings_set_ignore_programid(settings* usersettings, int enable);

#endif // _SETTINGS_H_
