#ifndef CMD_H
#define CMD_H 1

#define ETH_P_CMD	(0x8909)
#define CMD_O_SGT	(0x0001)
#define SGT_TCI_MASK    (0x1ffffu)
#define SGT_TAG_PRESENT	(1u<<16)
#define SGT_HEAD_LEN (8u)

struct sgt_fixed1_head
{
  __be16 ethtype;
  __be16 ver_len;
  __be16 o1_len_type;
  __be16 o1_value;
};

#endif /* CMD_H */
