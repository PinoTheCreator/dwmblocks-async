#define CMDLENGTH 100
#define DELIMITER " "
#define CLICKABLE_BLOCKS true

#define DR "~/.local/bin/blocks/"

const Block blocks[] = {
  /*    command   updatetime  signal*/
        //BLOCK(DR "music", 1, 15),
        BLOCK(DR "packup", 18000, 16),
        //BLOCK(DR "weather", 3600, 11),
        //BLOCK(DR "vol", 0, 13),
        BLOCK(DR "internet", 20, 20),
        BLOCK(DR "memory", 10, 19),
        BLOCK(DR "cpu", 5, 18),
        BLOCK(DR "temp", 20, 12),
        BLOCK(DR "bat", 180, 14),
        BLOCK(DR "date", 1, 17),
};
