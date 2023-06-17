typedef enum {
    CSMC_DISABLED,
    CSMC_BOTH,
    CSMC_TEXTURE,
    CSMC_SIZE
} ChestStyleMatchesContentsType;

typedef enum {
    BUNNY_HOOD_VANILLA,
    BUNNY_HOOD_FAST_AND_JUMP,
    BUNNY_HOOD_FAST
} BunnyHoodMode;

typedef enum {
    MIRRORED_WORLD_OFF,
    MIRRORED_WORLD_ALWAYS,
    MIRRORED_WORLD_RANDOM,
    MIRRORED_WORLD_RANDOM_SEEDED,
    MIRRORED_WORLD_DUNGEONS_All,
    MIRRORED_WORLD_DUNGEONS_VANILLA,
    MIRRORED_WORLD_DUNGEONS_MQ,
    MIRRORED_WORLD_DUNGEONS_RANDOM,
    MIRRORED_WORLD_DUNGEONS_RANDOM_SEEDED,
} MirroredWorldMode;

typedef enum {
    ENEMY_RANDOMIZER_OFF,
    ENEMY_RANDOMIZER_RANDOM,
    ENEMY_RANDOMIZER_RANDOM_SEEDED,
} EnemyRandomizerMode;

typedef enum {
    FASTFILE_1,
    FASTFILE_2,
    FASTFILE_3,
    FASTFILE_MAP_SELECT,
    FASTFILE_FILE_SELECT
} FastFileSelectTarget;

typedef enum {
    AUTOSAVE_OFF,
    AUTOSAVE_LOCATION_AND_MAJOR_ITEMS,
    AUTOSAVE_LOCATION_AND_ALL_ITEMS,
    AUTOSAVE_LOCATION,
    AUTOSAVE_MAJOR_ITEMS,
    AUTOSAVE_ALL_ITEMS
} AutosaveType;

typedef enum {
    ZFIGHT_FIX_DISABLED,
    ZFIGHT_FIX_CONSISTENT_VANISH,
    ZFIGHT_FIX_NO_VANISH,
} ZFightingFixType;

typedef enum {
    BONK_DAMAGE_NONE,
    BONK_DAMAGE_QUARTER_HEART,
    BONK_DAMAGE_HALF_HEART,
    BONK_DAMAGE_1_HEART,
    BONK_DAMAGE_2_HEARTS,
    BONK_DAMAGE_4_HEARTS,
    BONK_DAMAGE_8_HEARTS,
    BONK_DAMAGE_OHKO,
} BonkDamage;
