#ifndef __CRYPTOHASH_H
#define __CRYPTOHASH_H

#define SHA_DIGEST_WORDS 5
#define SHA_WORKSPACE_WORDS 80

void sha_init(__u32 *buf);
void sha_transform(__u32 *digest, const char *data, __u32 *W);

<<<<<<< HEAD
=======
#define MD5_DIGEST_WORDS 4
#define MD5_MESSAGE_BYTES 64

void md5_transform(__u32 *hash, __u32 const *in);

>>>>>>> 3ed9fdb7ac17e98f8501bcbcf78d5374a929ef0e
__u32 half_md4_transform(__u32 buf[4], __u32 const in[8]);

#endif
