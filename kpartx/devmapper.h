#ifndef _KPARTX_DEVMAPPER_H
#define _KPARTX_DEVMAPPER_H

#ifdef DM_SUBSYSTEM_UDEV_FLAG0
#define MPATH_UDEV_RELOAD_FLAG DM_SUBSYSTEM_UDEV_FLAG0
#else
#define MPATH_UDEV_RELOAD_FLAG 0
#endif

extern int udev_sync;

int dm_prereq (char *, int, int, int);
int dm_simplecmd (int, const char *, int, uint16_t);
int dm_addmap (int, const char *, const char *, const char *, uint64_t,
	       int, const char *, int, mode_t, uid_t, gid_t);
int dm_map_present (char *);
char * dm_mapname(int major, int minor);
dev_t dm_get_first_dep(char *devname);
char * dm_mapuuid(int major, int minor);
int dm_devn (char * mapname, int *major, int *minor);
int dm_no_partitions(int major, int minor);

#endif /* _KPARTX_DEVMAPPER_H */
