/* SPDX-License-Identifier: (LGPL-2.1 OR BSD-2-Clause) */

/* THIS FILE IS AUTOGENERATED! */
#ifndef __BPF_ZONE_INT_FILTER_SKEL_H__
#define __BPF_ZONE_INT_FILTER_SKEL_H__

#include <stdlib.h>
#include <bpf/libbpf.h>

struct bpf_zone_int_filter {
	struct bpf_object_skeleton *skeleton;
	struct bpf_object *obj;
	struct {
		struct bpf_program *main;
	} progs;
	struct {
		struct bpf_link *main;
	} links;
};

static void
bpf_zone_int_filter__destroy(struct bpf_zone_int_filter *obj)
{
	if (!obj)
		return;
	if (obj->skeleton)
		bpf_object__destroy_skeleton(obj->skeleton);
	free(obj);
}

static inline int
bpf_zone_int_filter__create_skeleton(struct bpf_zone_int_filter *obj);

static inline struct bpf_zone_int_filter *
bpf_zone_int_filter__open_opts(const struct bpf_object_open_opts *opts)
{
	struct bpf_zone_int_filter *obj;

	obj = (struct bpf_zone_int_filter *)calloc(1, sizeof(*obj));
	if (!obj)
		return NULL;
	if (bpf_zone_int_filter__create_skeleton(obj))
		goto err;
	if (bpf_object__open_skeleton(obj->skeleton, opts))
		goto err;

	return obj;
err:
	bpf_zone_int_filter__destroy(obj);
	return NULL;
}

static inline struct bpf_zone_int_filter *
bpf_zone_int_filter__open(void)
{
	return bpf_zone_int_filter__open_opts(NULL);
}

static inline int
bpf_zone_int_filter__load(struct bpf_zone_int_filter *obj)
{
	return bpf_object__load_skeleton(obj->skeleton);
}

static inline struct bpf_zone_int_filter *
bpf_zone_int_filter__open_and_load(void)
{
	struct bpf_zone_int_filter *obj;

	obj = bpf_zone_int_filter__open();
	if (!obj)
		return NULL;
	if (bpf_zone_int_filter__load(obj)) {
		bpf_zone_int_filter__destroy(obj);
		return NULL;
	}
	return obj;
}

static inline int
bpf_zone_int_filter__attach(struct bpf_zone_int_filter *obj)
{
	return bpf_object__attach_skeleton(obj->skeleton);
}

static inline void
bpf_zone_int_filter__detach(struct bpf_zone_int_filter *obj)
{
	return bpf_object__detach_skeleton(obj->skeleton);
}

static inline int
bpf_zone_int_filter__create_skeleton(struct bpf_zone_int_filter *obj)
{
	struct bpf_object_skeleton *s;

	s = (struct bpf_object_skeleton *)calloc(1, sizeof(*s));
	if (!s)
		return -1;
	obj->skeleton = s;

	s->sz = sizeof(*s);
	s->name = "bpf_zone_int_filter";
	s->obj = &obj->obj;

	/* programs */
	s->prog_cnt = 1;
	s->prog_skel_sz = sizeof(*s->progs);
	s->progs = (struct bpf_prog_skeleton *)calloc(s->prog_cnt, s->prog_skel_sz);
	if (!s->progs)
		goto err;

	s->progs[0].name = "main";
	s->progs[0].prog = &obj->progs.main;
	s->progs[0].link = &obj->links.main;

	s->data_sz = 2408;
	s->data = (void *)"\
\x7f\x45\x4c\x46\x02\x01\x01\0\0\0\0\0\0\0\0\0\x01\0\xf7\0\x01\0\0\0\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\0\x68\x05\0\0\0\0\0\0\0\0\0\0\x40\0\0\0\0\0\x40\0\x10\0\
\x01\0\xb7\0\0\0\x0d\0\0\0\x95\0\0\0\0\0\0\0\x63\x6c\x61\x6e\x67\x20\x76\x65\
\x72\x73\x69\x6f\x6e\x20\x31\x30\x2e\x30\x2e\x30\x2d\x34\x75\x62\x75\x6e\x74\
\x75\x31\x7e\x31\x38\x2e\x30\x34\x2e\x32\x20\0\x62\x70\x66\x5f\x7a\x6f\x6e\x65\
\x5f\x69\x6e\x74\x5f\x66\x69\x6c\x74\x65\x72\x2e\x63\0\x2f\x68\x6f\x6d\x65\x2f\
\x64\x61\x6e\x74\x61\x6c\x69\x30\x6e\x2f\x70\x72\x6f\x6a\x65\x63\x74\x73\x2f\
\x76\x75\x2f\x71\x65\x6d\x75\x2d\x63\x73\x64\x2f\x71\x65\x6d\x75\x2d\x63\x73\
\x64\x2f\x62\x70\x66\x5f\x70\x72\x6f\x67\x72\x61\x6d\x73\0\x6d\x61\x69\x6e\0\
\x69\x6e\x74\0\x01\x11\x01\x25\x0e\x13\x05\x03\x0e\x10\x17\x1b\x0e\x11\x01\x12\
\x06\0\0\x02\x2e\0\x11\x01\x12\x06\x40\x18\x97\x42\x19\x03\x0e\x3a\x0b\x3b\x0b\
\x49\x13\x3f\x19\0\0\x03\x24\0\x03\x0e\x3e\x0b\x0b\x0b\0\0\0\x47\0\0\0\x04\0\0\
\0\0\0\x08\x01\0\0\0\0\x0c\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x10\0\0\0\
\x02\0\0\0\0\0\0\0\0\x10\0\0\0\x01\x5a\0\0\0\0\x01\x05\x43\0\0\0\x03\0\0\0\0\
\x05\x04\0\x9f\xeb\x01\0\x18\0\0\0\0\0\0\0\x28\0\0\0\x28\0\0\0\x6d\0\0\0\0\0\0\
\0\0\0\0\x0d\x02\0\0\0\x01\0\0\0\0\0\0\x01\x04\0\0\0\x20\0\0\x01\x05\0\0\0\x01\
\0\0\x0c\x01\0\0\0\0\x69\x6e\x74\0\x6d\x61\x69\x6e\0\x2e\x74\x65\x78\x74\0\x2f\
\x68\x6f\x6d\x65\x2f\x64\x61\x6e\x74\x61\x6c\x69\x30\x6e\x2f\x70\x72\x6f\x6a\
\x65\x63\x74\x73\x2f\x76\x75\x2f\x71\x65\x6d\x75\x2d\x63\x73\x64\x2f\x71\x65\
\x6d\x75\x2d\x63\x73\x64\x2f\x62\x70\x66\x5f\x70\x72\x6f\x67\x72\x61\x6d\x73\
\x2f\x62\x70\x66\x5f\x7a\x6f\x6e\x65\x5f\x69\x6e\x74\x5f\x66\x69\x6c\x74\x65\
\x72\x2e\x63\0\x09\x72\x65\x74\x75\x72\x6e\x20\x31\x33\x3b\0\x9f\xeb\x01\0\x20\
\0\0\0\0\0\0\0\x14\0\0\0\x14\0\0\0\x1c\0\0\0\x30\0\0\0\0\0\0\0\x08\0\0\0\x0a\0\
\0\0\x01\0\0\0\0\0\0\0\x03\0\0\0\x10\0\0\0\x0a\0\0\0\x01\0\0\0\0\0\0\0\x10\0\0\
\0\x61\0\0\0\x02\x18\0\0\x0c\0\0\0\xff\xff\xff\xff\x04\0\x08\0\x08\x7c\x0b\0\
\x14\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x10\0\0\0\0\0\0\0\x48\0\0\0\x04\0\x2d\0\0\0\
\x08\x01\x01\xfb\x0e\x0d\0\x01\x01\x01\x01\0\0\0\x01\0\0\x01\0\x62\x70\x66\x5f\
\x7a\x6f\x6e\x65\x5f\x69\x6e\x74\x5f\x66\x69\x6c\x74\x65\x72\x2e\x63\0\0\0\0\0\
\0\x09\x02\0\0\0\0\0\0\0\0\x16\x05\x02\x0a\x13\x02\x02\0\x01\x01\0\0\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x71\0\0\0\x04\0\xf1\xff\0\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x03\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\
\0\0\x03\0\x27\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x03\0\x3d\0\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x03\0\x78\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\
\0\0\x03\0\x7d\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x03\0\x02\0\0\0\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\0\0\0\x03\0\x04\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\
\x03\0\x0a\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x03\0\x0c\0\0\0\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\x3d\0\0\0\x12\0\x02\0\0\0\0\0\0\0\0\0\x10\0\0\0\0\0\0\0\x06\
\0\0\0\0\0\0\0\x0a\0\0\0\x08\0\0\0\x0c\0\0\0\0\0\0\0\x0a\0\0\0\x02\0\0\0\x12\0\
\0\0\0\0\0\0\x0a\0\0\0\x03\0\0\0\x16\0\0\0\0\0\0\0\x0a\0\0\0\x0a\0\0\0\x1a\0\0\
\0\0\0\0\0\x0a\0\0\0\x04\0\0\0\x1e\0\0\0\0\0\0\0\x01\0\0\0\x07\0\0\0\x2b\0\0\0\
\0\0\0\0\x01\0\0\0\x07\0\0\0\x39\0\0\0\0\0\0\0\x0a\0\0\0\x05\0\0\0\x44\0\0\0\0\
\0\0\0\x0a\0\0\0\x06\0\0\0\x2c\0\0\0\0\0\0\0\0\0\0\0\x07\0\0\0\x40\0\0\0\0\0\0\
\0\0\0\0\0\x07\0\0\0\x14\0\0\0\0\0\0\0\x0a\0\0\0\x09\0\0\0\x18\0\0\0\0\0\0\0\
\x01\0\0\0\x07\0\0\0\x3a\0\0\0\0\0\0\0\x01\0\0\0\x07\0\0\0\0\x2e\x64\x65\x62\
\x75\x67\x5f\x61\x62\x62\x72\x65\x76\0\x2e\x74\x65\x78\x74\0\x2e\x72\x65\x6c\
\x2e\x42\x54\x46\x2e\x65\x78\x74\0\x2e\x64\x65\x62\x75\x67\x5f\x73\x74\x72\0\
\x2e\x72\x65\x6c\x2e\x64\x65\x62\x75\x67\x5f\x69\x6e\x66\x6f\0\x6d\x61\x69\x6e\
\0\x2e\x6c\x6c\x76\x6d\x5f\x61\x64\x64\x72\x73\x69\x67\0\x2e\x72\x65\x6c\x2e\
\x64\x65\x62\x75\x67\x5f\x6c\x69\x6e\x65\0\x2e\x72\x65\x6c\x2e\x64\x65\x62\x75\
\x67\x5f\x66\x72\x61\x6d\x65\0\x62\x70\x66\x5f\x7a\x6f\x6e\x65\x5f\x69\x6e\x74\
\x5f\x66\x69\x6c\x74\x65\x72\x2e\x63\0\x2e\x73\x74\x72\x74\x61\x62\0\x2e\x73\
\x79\x6d\x74\x61\x62\0\x2e\x42\x54\x46\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\x87\0\0\0\x03\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\xc8\
\x04\0\0\0\0\0\0\x9c\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x01\0\0\0\0\0\0\0\0\0\0\0\0\
\0\0\0\x0f\0\0\0\x01\0\0\0\x06\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x40\0\0\0\0\0\0\0\
\x10\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x08\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x22\0\0\0\
\x01\0\0\0\x30\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x50\0\0\0\0\0\0\0\x81\0\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\x01\0\0\0\0\0\0\0\x01\0\0\0\0\0\0\0\x01\0\0\0\x01\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\0\0\0\0\xd1\0\0\0\0\0\0\0\x37\0\0\0\0\0\0\0\0\0\0\0\0\0\0\
\0\x01\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x31\0\0\0\x01\0\0\0\0\0\0\0\0\0\0\0\0\0\0\
\0\0\0\0\0\x08\x01\0\0\0\0\0\0\x4b\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x01\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\x2d\0\0\0\x09\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\xe8\
\x03\0\0\0\0\0\0\x90\0\0\0\0\0\0\0\x0f\0\0\0\x05\0\0\0\x08\0\0\0\0\0\0\0\x10\0\
\0\0\0\0\0\0\x97\0\0\0\x01\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x53\x01\0\0\0\
\0\0\0\xad\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x01\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x19\
\0\0\0\x01\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x02\0\0\0\0\0\0\x50\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\0\x01\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x15\0\0\0\x09\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x78\x04\0\0\0\0\0\0\x20\0\0\0\0\0\0\0\x0f\0\0\0\
\x08\0\0\0\x08\0\0\0\0\0\0\0\x10\0\0\0\0\0\0\0\x64\0\0\0\x01\0\0\0\0\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\x50\x02\0\0\0\0\0\0\x28\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x08\
\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x60\0\0\0\x09\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\
\0\0\x98\x04\0\0\0\0\0\0\x20\0\0\0\0\0\0\0\x0f\0\0\0\x0a\0\0\0\x08\0\0\0\0\0\0\
\0\x10\0\0\0\0\0\0\0\x54\0\0\0\x01\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x78\
\x02\0\0\0\0\0\0\x4c\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x01\0\0\0\0\0\0\0\0\0\0\0\0\
\0\0\0\x50\0\0\0\x09\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\xb8\x04\0\0\0\0\0\0\
\x10\0\0\0\0\0\0\0\x0f\0\0\0\x0c\0\0\0\x08\0\0\0\0\0\0\0\x10\0\0\0\0\0\0\0\x42\
\0\0\0\x03\x4c\xff\x6f\0\0\0\x80\0\0\0\0\0\0\0\0\0\0\0\0\xc8\x04\0\0\0\0\0\0\0\
\0\0\0\0\0\0\0\x0f\0\0\0\0\0\0\0\x01\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x8f\0\0\0\
\x02\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\xc8\x02\0\0\0\0\0\0\x20\x01\0\0\0\0\
\0\0\x01\0\0\0\x0b\0\0\0\x08\0\0\0\0\0\0\0\x18\0\0\0\0\0\0\0";

	return 0;
err:
	bpf_object__destroy_skeleton(s);
	return -1;
}

#endif /* __BPF_ZONE_INT_FILTER_SKEL_H__ */
