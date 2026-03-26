#ifndef UV_THREADPOOL_H_
#define UV_THREADPOOL_H_

#include "uv.h"

struct uv__work {
	void (*work)(struct uv__work* w);
	void (*done)(struct uv__work* w, int status);
	struct uv_loop_s* loop;
	struct uv__queue wq;
};

#endif