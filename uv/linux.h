#ifndef UV_LINUX_H
#define UV_LINUX_H

#define UV_PLATFORM_LOOP_FIELDS \
	uv__io_t inotify_read_watcher; \
	void* inotify_watcher; \
	int inotify_fd;

#define UV_PLATFORM_FS_EVENT_FIELDS \
	struct uv__queue watchers; \
	int wd;
#endif
