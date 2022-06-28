#ifndef _NpcType_h__
#define _NpcType_h__

enum NpcCode {
    Skeleton = 0,
    Returned = 1,
    BoneWarrior = 2,
    BurningDead = 3,
    Horror = 4,
    Zombie = 5,
    HungryDead = 6,
    Ghoul = 7,
    DrownedCarcass = 8,
    PlagueBearer = 9,
    Afflicted = 10,
    Tainted = 11,
    Misshapen = 12,
    Disfigured = 13,
    Damned = 14,
    FoulCrow = 15,
    BloodHawk = 16,
    BlackRaptor = 17,
    CloudStalker = 18,
    Fallen = 19,
    Carver = 20,
    Devilkin = 21,
    DarkOne = 22,
    WarpedFallen = 23,
    Brute = 24,
    Yeti = 25,
    Crusher = 26,
    WailingBeast = 27,
    GargantuanBeast = 28,
    SandRaider = 29,
    Marauder = 30,
    Invader = 31,
    Infidel = 32,
    Assailant = 33,
    Gorgon = 34,   // Unused
    Gorgon2 = 35,  // Unused
    Gorgon3 = 36,  // Unused
    Gorgon4 = 37,  // Unused
    Ghost = 38,
    Wraith = 39,
    Specter = 40,
    Apparition = 41,
    DarkShape = 42,
    DarkHunter = 43,
    VileHunter = 44,
    DarkStalker = 45,
    BlackRogue = 46,
    FleshHunter = 47,
    DuneBeast = 48,
    RockDweller = 49,
    JungleHunter = 50,
    DoomApe = 51,
    TempleGuard = 52,
    MoonClan = 53,
    NightClan = 54,
    BloodClan = 55,
    HellClan = 56,
    DeathClan = 57,
    FallenShaman = 58,
    CarverShaman = 59,
    DevilkinShaman = 60,
    DarkShaman = 61,
    WarpedShaman = 62,
    QuillRat = 63,
    SpikeFiend = 64,
    ThornBeast = 65,
    RazorSpine = 66,
    JungleUrchin = 67,
    SandMaggot = 68,
    RockWorm = 69,
    Devourer = 70,
    GiantLamprey = 71,
    WorldKiller = 72,
    TombViper = 73,
    ClawViper = 74,
    Salamander = 75,
    PitViper = 76,
    SerpentMagus = 77,
    SandLeaper = 78,
    CaveLeaper = 79,
    TombCreeper = 80,
    TreeLurker = 81,
    RazorPitDemon = 82,
    Huntress = 83,
    SaberCat = 84,
    NightTiger = 85,
    HellCat = 86,
    Itchies = 87,
    BlackLocusts = 88,
    PlagueBugs = 89,
    HellSwarm = 90,
    DungSoldier = 91,
    SandWarrior = 92,
    Scarab = 93,
    SteelWeevil = 94,
    AlbinoRoach = 95,
    DriedCorpse = 96,
    Decayed = 97,
    Embalmed = 98,
    PreservedDead = 99,
    Cadaver = 100,
    HollowOne = 101,
    Guardian = 102,
    Unraveler = 103,
    HoradrimAncient = 104,
    BaalSubjectMummy = 105,
    ChaosHorde = 106,   // Unused
    ChaosHorde2 = 107,  // Unused
    ChaosHorde3 = 108,  // Unused
    ChaosHorde4 = 109,  // Unused
    CarrionBird = 110,
    UndeadScavenger = 111,
    HellBuzzard = 112,
    WingedNightmare = 113,
    Sucker = 114,
    Feeder = 115,
    BloodHook = 116,
    BloodWing = 117,
    Gloam = 118,
    SwampGhost = 119,
    BurningSoul = 120,
    BlackSoul = 121,
    Arach = 122,
    SandFisher = 123,
    PoisonSpinner = 124,
    FlameSpider = 125,
    SpiderMagus = 126,
    ThornedHulk = 127,
    BrambleHulk = 128,
    Thrasher = 129,
    Spikefist = 130,
    GhoulLord = 131,
    NightLord = 132,
    DarkLord = 133,
    BloodLord = 134,
    Banished = 135,
    DesertWing = 136,
    Fiend = 137,
    Gloombat = 138,
    BloodDiver = 139,
    DarkFamiliar = 140,
    RatMan = 141,
    Fetish = 142,
    Flayer = 143,
    SoulKiller = 144,
    StygianDoll = 145,
    DeckardCain = 146,
    Gheed = 147,
    Akara = 148,
    Chicken = 149,  // Dummy
    Kashya = 150,
    Rat = 151,         // Dummy
    Rogue = 152,       // Dummy
    HellMeteor = 153,  // Dummy
    Charsi = 154,
    Warriv = 155,
    Andariel = 156,
    Bird = 157,   // Dummy
    Bird2 = 158,  // Dummy
    Bat = 159,    // Dummy
    DarkRanger = 160,
    VileArcher = 161,
    DarkArcher = 162,
    BlackArcher = 163,
    FleshArcher = 164,
    DarkSpearwoman = 165,
    VileLancer = 166,
    DarkLancer = 167,
    BlackLancer = 168,
    FleshLancer = 169,
    SkeletonArcher = 170,
    ReturnedArcher = 171,
    BoneArcher = 172,
    BurningDeadArcher = 173,
    HorrorArcher = 174,
    Warriv2 = 175,
    Atma = 176,
    Drognan = 177,
    Fara = 178,
    Cow = 179,  // Dummy
    SandMaggotYoung = 180,
    RockWormYoung = 181,
    DevourerYoung = 182,
    GiantLampreyYoung = 183,
    WorldKillerYoung = 184,
    Camel = 185,  // Dummy
    Blunderbore = 186,
    Gorbelly = 187,
    Mauler = 188,
    Urdar = 189,
    SandMaggotEgg = 190,
    RockWormEgg = 191,
    DevourerEgg = 192,
    GiantLampreyEgg = 193,
    WorldKillerEgg = 194,
    Act2Male = 195,    // Dummy
    Act2Female = 196,  // Dummy
    Act2Child = 197,   // Dummy
    Greiz = 198,
    Elzix = 199,
    Geglash = 200,
    Jerhyn = 201,
    Lysander = 202,
    Act2Guard = 203,    // Dummy
    Act2Vendor = 204,   // Dummy
    Act2Vendor2 = 205,  // Dummy
    FoulCrowNest = 206,
    BloodHawkNest = 207,
    BlackVultureNest = 208,
    CloudStalkerNest = 209,
    Meshif = 210,
    Duriel = 211,
    UndeadRatMan = 212,       //Unused???
    UndeadFetish = 213,       //Unused???
    UndeadFlayer = 214,       //Unused???
    UndeadSoulKiller = 215,   //Unused???
    UndeadStygianDoll = 216,  //Unused???
    DarkGuard = 217,          // Unused
    DarkGuard2 = 218,         // Unused
    DarkGuard3 = 219,         // Unused
    DarkGuard4 = 220,         // Unused
    DarkGuard5 = 221,         // Unused
    BloodMage = 222,          // Unused
    BloodMage2 = 223,         // Unused
    BloodMage3 = 224,         // Unused
    BloodMage4 = 225,         // Unused
    BloodMage5 = 226,         // Unused
    Maggot = 227,
    MummyGenerator = 228,  //TEST: Sarcophagus
    Radament = 229,
    FireBeast = 230,       // Unused
    IceGlobe = 231,        // Unused
    LightningBeast = 232,  // Unused
    PoisonOrb = 233,       // Unused
    FlyingScimitar = 234,
    Zakarumite = 235,
    Faithful = 236,
    Zealot = 237,
    Sexton = 238,
    Cantor = 239,
    Heirophant = 240,
    Heirophant2 = 241,
    Mephisto = 242,
    Diablo = 243,
    DeckardCain2 = 244,
    DeckardCain3 = 245,
    DeckardCain4 = 246,
    SwampDweller = 247,
    BogCreature = 248,
    SlimePrince = 249,
    Summoner = 250,
    Tyrael = 251,
    Asheara = 252,
    Hratli = 253,
    Alkor = 254,
    Ormus = 255,
    Izual = 256,
    Halbu = 257,
    WaterWatcherLimb = 258,
    RiverStalkerLimb = 259,
    StygianWatcherLimb = 260,
    WaterWatcherHead = 261,
    RiverStalkerHead = 262,
    StygianWatcherHead = 263,
    Meshif2 = 264,
    DeckardCain5 = 265,
    Navi = 266,
    BloodRaven = 267,
    Bug = 268,       // Dummy
    Scorpion = 269,  // Dummy
    RogueScout = 270,
    Rogue2 = 271,  // Dummy
    Rogue3 = 272,  // Dummy
    GargoyleTrap = 273,
    ReturnedMage = 274,
    BoneMage = 275,
    BurningDeadMage = 276,
    HorrorMage = 277,
    RatManShaman = 278,
    FetishShaman = 279,
    FlayerShaman = 280,
    SoulKillerShaman = 281,
    StygianDollShaman = 282,
    Larva = 283,
    SandMaggotQueen = 284,
    RockWormQueen = 285,
    DevourerQueen = 286,
    GiantLampreyQueen = 287,
    WorldKillerQueen = 288,
    ClayGolem = 289,
    BloodGolem = 290,
    IronGolem = 291,
    FireGolem = 292,
    Familiar = 293,  // Dummy
    Act3Male = 294,  // Dummy
    NightMarauder = 295,
    Act3Female = 296,  // Dummy
    Natalya = 297,
    FleshSpawner = 298,
    StygianHag = 299,
    Grotesque = 300,
    FleshBeast = 301,
    StygianDog = 302,
    GrotesqueWyrm = 303,
    Groper = 304,
    Strangler = 305,
    StormCaster = 306,
    Corpulent = 307,
    CorpseSpitter = 308,
    MawFiend = 309,
    DoomKnight = 310,
    AbyssKnight = 311,
    OblivionKnight = 312,
    QuillBear = 313,
    SpikeGiant = 314,
    ThornBrute = 315,
    RazorBeast = 316,
    GiantUrchin = 317,
    Snake = 318,            // Dummy
    Parrot = 319,           // Dummy
    Fish = 320,             // Dummy
    EvilHole = 321,         // Dummy
    EvilHole2 = 322,        // Dummy
    EvilHole3 = 323,        // Dummy
    EvilHole4 = 324,        // Dummy
    EvilHole5 = 325,        // Dummy
    FireboltTrap = 326,     // A trap
    HorzMissileTrap = 327,  // A trap
    VertMissileTrap = 328,  // A trap
    PoisonCloudTrap = 329,  // A trap
    LightningTrap = 330,    // A trap
    Kaelan = 331,           // Act2Guard2
    InvisoSpawner = 332,    // Dummy
    DiabloClone = 333,      //Unused???
    SuckerNest = 334,
    FeederNest = 335,
    BloodHookNest = 336,
    BloodWingNest = 337,
    Guard = 338,        // Act2Hire
    MiniSpider = 339,   // Dummy
    BonePrison = 340,   //Unused???
    BonePrison2 = 341,  //Unused???
    BonePrison3 = 342,  //Unused???
    BonePrison4 = 343,  //Unused???
    BoneWall = 344,     // Dummy
    CouncilMember = 345,
    CouncilMember2 = 346,
    CouncilMember3 = 347,
    Turret = 348,
    Turret2 = 349,
    Turret3 = 350,
    Hydra = 351,
    Hydra2 = 352,
    Hydra3 = 353,
    MeleeTrap = 354,   // A trap
    SevenTombs = 355,  // Dummy
    Decoy = 356,
    Valkyrie = 357,
    Act2Guard3 = 358,  //Unused???
    IronWolf = 359,    // Act3Hire
    Balrog = 360,
    PitLord = 361,
    VenomLord = 362,
    NecroSkeleton = 363,
    NecroMage = 364,
    Griswold = 365,
    CompellingOrbNpc = 366,
    Tyrael2 = 367,
    DarkWanderer = 368,
    NovaTrap = 369,
    SpiritMummy = 370,  // Dummy
    LightningSpire = 371,
    FireTower = 372,
    Slinger = 373,
    SpearCat = 374,
    NightSlinger = 375,
    HellSlinger = 376,
    Act2Guard4 = 377,  // Dummy
    Act2Guard5 = 378,  // Dummy
    ReturnedMage2 = 379,
    BoneMage2 = 380,
    BaalColdMage = 381,
    HorrorMage2 = 382,
    ReturnedMage3 = 383,
    BoneMage3 = 384,
    BurningDeadMage2 = 385,
    HorrorMage3 = 386,
    ReturnedMage4 = 387,
    BoneMage4 = 388,
    BurningDeadMage3 = 389,
    HorrorMage4 = 390,
    HellBovine = 391,
    Window = 392,   // Dummy
    Window2 = 393,  // Dummy
    SpearCat2 = 394,
    NightSlinger2 = 395,
    RatMan2 = 396,
    Fetish2 = 397,
    Flayer2 = 398,
    SoulKiller2 = 399,
    StygianDoll2 = 400,
    MephistoSpirit = 401,  // Dummy
    TheSmith = 402,
    TrappedSoul = 403,
    TrappedSoul2 = 404,
    Jamella = 405,
    Izual2 = 406,
    RatMan3 = 407,
    Malachai = 408,
    Hephasto = 409,  // The Feature Creep ?!?

    // Expansion (Are We missing something here?  D2BS has a 410 that we DONT have)
    WakeOfDestruction = 410,
    ChargedBoltSentry = 411,
    LightningSentry = 412,
    BladeCreeper = 413,
    InvisiblePet = 414,  // Dummy ? Unused ?
    InfernoSentry = 415,
    DeathSentry = 416,
    ShadowWarrior = 417,
    ShadowMaster = 418,
    DruidHawk = 419,
    DruidSpiritWolf = 420,
    DruidFenris = 421,
    SpiritOfBarbs = 422,
    HeartOfWolverine = 423,
    OakSage = 424,
    DruidPlaguePoppy = 425,
    DruidCycleOfLife = 426,
    VineCreature = 427,
    DruidBear = 428,
    Eagle = 429,
    Wolf = 430,
    Bear = 431,
    BarricadeDoor = 432,
    BarricadeDoor2 = 433,
    PrisonDoor = 434,
    BarricadeTower = 435,
    RotWalker = 436,
    ReanimatedHorde = 437,
    ProwlingDead = 438,
    UnholyCorpse = 439,
    DefiledWarrior = 440,
    SiegeBeast = 441,
    CrushBiest = 442,
    BloodBringer = 443,
    GoreBearer = 444,
    DeamonSteed = 445,
    SnowYeti = 446,
    SnowYeti2 = 447,
    SnowYeti3 = 448,
    SnowYeti4 = 449,
    WolfRider = 450,
    WolfRider2 = 451,
    WolfRider3 = 452,
    MinionExp = 453,  // ??
    SlayerExp = 454,  // ??
    IceBoar = 455,
    FireBoar = 456,
    HellSpawn = 457,
    IceSpawn = 458,
    GreaterHellSpawn = 459,
    GreaterIceSpawn = 460,
    FanaticMinion = 461,
    BerserkSlayer = 462,
    ConsumedIceBoar = 463,
    ConsumedFireBoar = 464,
    FrenziedHellSpawn = 465,
    FrenziedIceSpawn = 466,
    InsaneHellSpawn = 467,
    InsaneIceSpawn = 468,
    SuccubusExp = 469,  // just Succubus ??
    VileTemptress = 470,
    StygianHarlot = 471,
    HellTemptress = 472,
    BloodTemptress = 473,
    Dominus = 474,
    VileWitch = 475,
    StygianFury = 476,
    BloodWitch = 477,
    HellWitch = 478,
    OverSeer = 479,
    Lasher = 480,
    OverLord = 481,
    BloodBoss = 482,
    HellWhip = 483,
    MinionSpawner = 484,
    MinionSlayerSpawner = 485,
    MinionBoarSpawner = 486,
    MinionBoarSpawner2 = 487,
    MinionSpawnSpawner = 488,
    MinionBoarSpawner3 = 489,
    MinionBoarSpawner4 = 490,
    MinionSpawnSpawner2 = 491,
    Imp = 492,
    Imp2 = 493,
    Imp3 = 494,
    Imp4 = 495,
    Imp5 = 496,
    CatapultS = 497,
    CatapultE = 498,
    CatapultSiege = 499,
    CatapultW = 500,
    FrozenHorror = 501,
    FrozenHorror2 = 502,
    FrozenHorror3 = 503,
    FrozenHorror4 = 504,
    FrozenHorror5 = 505,
    BloodLord2 = 506,
    BloodLord3 = 507,
    BloodLord4 = 508,
    BloodLord5 = 509,
    BloodLord6 = 510,
    Larzuk = 511,
    Drehya = 512,
    Malah = 513,
    NihlathakTown = 514,
    QualKehk = 515,
    CatapultSpotterS = 516,
    CatapultSpotterE = 517,
    CatapultSpotterSiege = 518,
    CatapultSpotterW = 519,
    DeckardCain6 = 520,
    Tyrael3 = 521,
    Act5Combatant = 522,
    Act5Combatant2 = 523,
    BarricadeWallRight = 524,
    BarricadeWallLeft = 525,
    Nihlathak = 526,
    Drehya2 = 527,
    EvilHut = 528,
    DeathMauler = 529,
    DeathMauler2 = 530,
    DeathMauler3 = 531,
    DeathMauler4 = 532,
    DeathMauler5 = 533,
    POW = 534,
    Act5Townguard = 535,
    Act5Townguard2 = 536,
    AncientStatue = 537,
    AncientStatueNpc2 = 538,
    AncientStatueNpc3 = 539,
    AncientBarbarian = 540,
    AncientBarbarian2 = 541,
    AncientBarbarian3 = 542,
    BaalThrone = 543,
    BaalCrab = 544,
    BaalTaunt = 545,
    PutridDefiler = 546,
    PutridDefiler2 = 547,
    PutridDefiler3 = 548,
    PutridDefiler4 = 549,
    PutridDefiler5 = 550,
    PainWorm = 551,
    PainWorm2 = 552,
    PainWorm3 = 553,
    PainWorm4 = 554,
    PainWorm5 = 555,
    Bunny = 556,
    CouncilMemberBall = 557,
    VenomLord2 = 558,
    BaalCrabToStairs = 559,
    Act5Hireling1Hand = 560,
    Act5Hireling2Hand = 561,
    BaalTentacle = 562,
    BaalTentacle2 = 563,
    BaalTentacle3 = 564,
    BaalTentacle4 = 565,
    BaalTentacle5 = 566,
    InjuredBarbarian = 567,
    InjuredBarbarian2 = 568,
    InjuredBarbarian3 = 569,
    BaalCrabClone = 570,
    BaalsMinion = 571,
    BaalsMinion2 = 572,
    BaalsMinion3 = 573,
    WorldstoneEffect = 574,  // D2BS stops here???
    BurningDeadArcher2 = 575,
    BoneArcher2 = 576,
    BurningDeadArcher3 = 577,
    ReturnedArcher2 = 578,
    HorrorArcher2 = 579,
    Afflicted2 = 580,
    Tainted2 = 581,
    Misshapen2 = 582,
    Disfigured2 = 583,
    Damned2 = 584,
    MoonClan2 = 585,
    NightClan2 = 586,
    HellClan2 = 587,
    BloodClan2 = 588,
    DeathClan2 = 589,
    FoulCrow2 = 590,
    BloodHawk2 = 591,
    BlackRaptor2 = 592,
    CloudStalker2 = 593,
    ClawViper2 = 594,
    PitViper2 = 595,
    Salamander2 = 596,
    TombViper2 = 597,
    SerpentMagus2 = 598,
    Marauder2 = 599,
    Infidel2 = 600,
    SandRaider2 = 601,
    Invader2 = 602,
    Assailant2 = 603,
    DeathMauler6 = 604,
    QuillRat2 = 605,
    SpikeFiend2 = 606,
    RazorSpine2 = 607,
    CarrionBird2 = 608,
    ThornedHulk2 = 609,
    Slinger2 = 610,
    Slinger3 = 611,
    Slinger4 = 612,
    VileArcher2 = 613,
    DarkArcher2 = 614,
    VileLancer2 = 615,
    DarkLancer2 = 616,
    BlackLancer2 = 617,
    Blunderbore2 = 618,
    Mauler2 = 619,
    ReturnedMage5 = 620,
    BurningDeadMage4 = 621,
    ReturnedMage6 = 622,
    HorrorMage5 = 623,
    BoneMage5 = 624,
    HorrorMage6 = 625,
    HorrorMage7 = 626,
    Huntress2 = 627,
    SaberCat2 = 628,
    CaveLeaper2 = 629,
    TombCreeper2 = 630,
    Ghost2 = 631,
    Wraith2 = 632,
    Specter2 = 633,
    SuccubusExp2 = 634,
    HellTemptress2 = 635,
    Dominus2 = 636,
    HellWitch2 = 637,
    VileWitch2 = 638,
    Gloam2 = 639,
    BlackSoul2 = 640,
    BurningSoul2 = 641,
    Carver2 = 642,
    Devilkin2 = 643,
    DarkOne2 = 644,
    CarverShaman2 = 645,
    DevilkinShaman2 = 646,
    DarkShaman2 = 647,
    BoneWarrior2 = 648,
    Returned2 = 649,
    Gloombat2 = 650,
    Fiend2 = 651,
    BloodLord7 = 652,
    BloodLord8 = 653,
    Scarab2 = 654,
    SteelWeevil2 = 655,
    Flayer3 = 656,
    StygianDoll3 = 657,
    SoulKiller3 = 658,
    Flayer4 = 659,
    StygianDoll4 = 660,
    SoulKiller4 = 661,
    FlayerShaman2 = 662,
    StygianDollShaman2 = 663,
    SoulKillerShaman2 = 664,
    TempleGuard2 = 665,
    TempleGuard3 = 666,
    Guardian2 = 667,
    Unraveler2 = 668,
    HoradrimAncient2 = 669,
    HoradrimAncient3 = 670,
    Zealot2 = 671,
    Zealot3 = 672,
    Heirophant3 = 673,
    Heirophant4 = 674,
    Grotesque2 = 675,
    FleshSpawner2 = 676,
    GrotesqueWyrm2 = 677,
    FleshBeast2 = 678,
    WorldKiller2 = 679,
    WorldKillerYoung2 = 680,
    WorldKillerEgg2 = 681,
    SlayerExp2 = 682,
    HellSpawn2 = 683,
    GreaterHellSpawn2 = 684,
    Arach2 = 685,
    Balrog2 = 686,
    PitLord2 = 687,
    Imp6 = 688,
    Imp7 = 689,
    UndeadStygianDoll2 = 690,
    UndeadSoulKiller2 = 691,
    Strangler2 = 692,
    StormCaster2 = 693,
    MawFiend2 = 694,
    BloodLord9 = 695,
    GhoulLord2 = 696,
    DarkLord2 = 697,
    UnholyCorpse2 = 698,
    DoomKnight2 = 699,
    DoomKnight3 = 700,
    OblivionKnight2 = 701,
    OblivionKnight3 = 702,
    Cadaver2 = 703,
    UberMephisto = 704,
    UberDiablo = 705,
    UberIzual = 706,
    Lilith = 707,
    UberDuriel = 708,
    UberBaal = 709,
    EvilHut2 = 710,
    DemonHole = 711,  // Dummy
    PitLord3 = 712,
    OblivionKnight4 = 713,
    Imp8 = 714,
    HellSwarm2 = 715,
    WorldKiller3 = 716,
    Arach3 = 717,
    SteelWeevil3 = 718,
    HellTemptress3 = 719,
    VileWitch3 = 720,
    FleshHunter2 = 721,
    DarkArcher3 = 722,
    BlackLancer3 = 723,
    HellWhip2 = 724,
    Returned3 = 725,
    HorrorArcher3 = 726,
    BurningDeadMage5 = 727,
    HorrorMage8 = 728,
    BoneMage6 = 729,
    HorrorMage9 = 730,
    DarkLord3 = 731,
    Specter3 = 732,
    BurningSoul3 = 733,

    Invalid,
    NpcNotApplicable = 0xFFFF
};

static char* lookup_npc_name(int code){
    switch (code){
        case NpcCode::Skeleton: return "Skeleton";
        case NpcCode::Returned: return "Returned";
        case NpcCode::BoneWarrior: return "BoneWarrior";
        case NpcCode::BurningDead: return "BurningDead";
        case NpcCode::Horror: return "Horror";
        case NpcCode::Zombie: return "Zombie";
        case NpcCode::HungryDead: return "HungryDead";
        case NpcCode::Ghoul: return "Ghoul";
        case NpcCode::DrownedCarcass: return "DrownedCarcass";
        case NpcCode::PlagueBearer: return "PlagueBearer";
        case NpcCode::Afflicted: return "Afflicted";
        case NpcCode::Tainted: return "Tainted";
        case NpcCode::Misshapen: return "Misshapen";
        case NpcCode::Disfigured: return "Disfigured";
        case NpcCode::Damned: return "Damned";
        case NpcCode::FoulCrow: return "FoulCrow";
        case NpcCode::BloodHawk: return "BloodHawk";
        case NpcCode::BlackRaptor: return "BlackRaptor";
        case NpcCode::CloudStalker: return "CloudStalker";
        case NpcCode::Fallen: return "Fallen";
        case NpcCode::Carver: return "Carver";
        case NpcCode::Devilkin: return "Devilkin";
        case NpcCode::DarkOne: return "DarkOne";
        case NpcCode::WarpedFallen: return "WarpedFallen";
        case NpcCode::Brute: return "Brute";
        case NpcCode::Yeti: return "Yeti";
        case NpcCode::Crusher: return "Crusher";
        case NpcCode::WailingBeast: return "WailingBeast";
        case NpcCode::GargantuanBeast: return "GargantuanBeast";
        case NpcCode::SandRaider: return "SandRaider";
        case NpcCode::Marauder: return "Marauder";
        case NpcCode::Invader: return "Invader";
        case NpcCode::Infidel: return "Infidel";
        case NpcCode::Assailant: return "Assailant";
        case NpcCode::Gorgon: return "Gorgon";
        case NpcCode::Gorgon2: return "Gorgon2";
        case NpcCode::Gorgon3: return "Gorgon3";
        case NpcCode::Gorgon4: return "Gorgon4";
        case NpcCode::Ghost: return "Ghost";
        case NpcCode::Wraith: return "Wraith";
        case NpcCode::Specter: return "Specter";
        case NpcCode::Apparition: return "Apparition";
        case NpcCode::DarkShape: return "DarkShape";
        case NpcCode::DarkHunter: return "DarkHunter";
        case NpcCode::VileHunter: return "VileHunter";
        case NpcCode::DarkStalker: return "DarkStalker";
        case NpcCode::BlackRogue: return "BlackRogue";
        case NpcCode::FleshHunter: return "FleshHunter";
        case NpcCode::DuneBeast: return "DuneBeast";
        case NpcCode::RockDweller: return "RockDweller";
        case NpcCode::JungleHunter: return "JungleHunter";
        case NpcCode::DoomApe: return "DoomApe";
        case NpcCode::TempleGuard: return "TempleGuard";
        case NpcCode::MoonClan: return "MoonClan";
        case NpcCode::NightClan: return "NightClan";
        case NpcCode::BloodClan: return "BloodClan";
        case NpcCode::HellClan: return "HellClan";
        case NpcCode::DeathClan: return "DeathClan";
        case NpcCode::FallenShaman: return "FallenShaman";
        case NpcCode::CarverShaman: return "CarverShaman";
        case NpcCode::DevilkinShaman: return "DevilkinShaman";
        case NpcCode::DarkShaman: return "DarkShaman";
        case NpcCode::WarpedShaman: return "WarpedShaman";
        case NpcCode::QuillRat: return "QuillRat";
        case NpcCode::SpikeFiend: return "SpikeFiend";
        case NpcCode::ThornBeast: return "ThornBeast";
        case NpcCode::RazorSpine: return "RazorSpine";
        case NpcCode::JungleUrchin: return "JungleUrchin";
        case NpcCode::SandMaggot: return "SandMaggot";
        case NpcCode::RockWorm: return "RockWorm";
        case NpcCode::Devourer: return "Devourer";
        case NpcCode::GiantLamprey: return "GiantLamprey";
        case NpcCode::WorldKiller: return "WorldKiller";
        case NpcCode::TombViper: return "TombViper";
        case NpcCode::ClawViper: return "ClawViper";
        case NpcCode::Salamander: return "Salamander";
        case NpcCode::PitViper: return "PitViper";
        case NpcCode::SerpentMagus: return "SerpentMagus";
        case NpcCode::SandLeaper: return "SandLeaper";
        case NpcCode::CaveLeaper: return "CaveLeaper";
        case NpcCode::TombCreeper: return "TombCreeper";
        case NpcCode::TreeLurker: return "TreeLurker";
        case NpcCode::RazorPitDemon: return "RazorPitDemon";
        case NpcCode::Huntress: return "Huntress";
        case NpcCode::SaberCat: return "SaberCat";
        case NpcCode::NightTiger: return "NightTiger";
        case NpcCode::HellCat: return "HellCat";
        case NpcCode::Itchies: return "Itchies";
        case NpcCode::BlackLocusts: return "BlackLocusts";
        case NpcCode::PlagueBugs: return "PlagueBugs";
        case NpcCode::HellSwarm: return "HellSwarm";
        case NpcCode::DungSoldier: return "DungSoldier";
        case NpcCode::SandWarrior: return "SandWarrior";
        case NpcCode::Scarab: return "Scarab";
        case NpcCode::SteelWeevil: return "SteelWeevil";
        case NpcCode::AlbinoRoach: return "AlbinoRoach";
        case NpcCode::DriedCorpse: return "DriedCorpse";
        case NpcCode::Decayed: return "Decayed";
        case NpcCode::Embalmed: return "Embalmed";
        case NpcCode::PreservedDead: return "PreservedDead";
        case NpcCode::Cadaver: return "Cadaver";
        case NpcCode::HollowOne: return "HollowOne";
        case NpcCode::Guardian: return "Guardian";
        case NpcCode::Unraveler: return "Unraveler";
        case NpcCode::HoradrimAncient: return "HoradrimAncient";
        case NpcCode::BaalSubjectMummy: return "BaalSubjectMummy";
        case NpcCode::ChaosHorde: return "ChaosHorde";
        case NpcCode::ChaosHorde2: return "ChaosHorde2";
        case NpcCode::ChaosHorde3: return "ChaosHorde3";
        case NpcCode::ChaosHorde4: return "ChaosHorde4";
        case NpcCode::CarrionBird: return "CarrionBird";
        case NpcCode::UndeadScavenger: return "UndeadScavenger";
        case NpcCode::HellBuzzard: return "HellBuzzard";
        case NpcCode::WingedNightmare: return "WingedNightmare";
        case NpcCode::Sucker: return "Sucker";
        case NpcCode::Feeder: return "Feeder";
        case NpcCode::BloodHook: return "BloodHook";
        case NpcCode::BloodWing: return "BloodWing";
        case NpcCode::Gloam: return "Gloam";
        case NpcCode::SwampGhost: return "SwampGhost";
        case NpcCode::BurningSoul: return "BurningSoul";
        case NpcCode::BlackSoul: return "BlackSoul";
        case NpcCode::Arach: return "Arach";
        case NpcCode::SandFisher: return "SandFisher";
        case NpcCode::PoisonSpinner: return "PoisonSpinner";
        case NpcCode::FlameSpider: return "FlameSpider";
        case NpcCode::SpiderMagus: return "SpiderMagus";
        case NpcCode::ThornedHulk: return "ThornedHulk";
        case NpcCode::BrambleHulk: return "BrambleHulk";
        case NpcCode::Thrasher: return "Thrasher";
        case NpcCode::Spikefist: return "Spikefist";
        case NpcCode::GhoulLord: return "GhoulLord";
        case NpcCode::NightLord: return "NightLord";
        case NpcCode::DarkLord: return "DarkLord";
        case NpcCode::BloodLord: return "BloodLord";
        case NpcCode::Banished: return "Banished";
        case NpcCode::DesertWing: return "DesertWing";
        case NpcCode::Fiend: return "Fiend";
        case NpcCode::Gloombat: return "Gloombat";
        case NpcCode::BloodDiver: return "BloodDiver";
        case NpcCode::DarkFamiliar: return "DarkFamiliar";
        case NpcCode::RatMan: return "RatMan";
        case NpcCode::Fetish: return "Fetish";
        case NpcCode::Flayer: return "Flayer";
        case NpcCode::SoulKiller: return "SoulKiller";
        case NpcCode::StygianDoll: return "StygianDoll";
        case NpcCode::DeckardCain: return "DeckardCain";
        case NpcCode::Gheed: return "Gheed";
        case NpcCode::Akara: return "Akara";
        case NpcCode::Chicken: return "Chicken";
        case NpcCode::Kashya: return "Kashya";
        case NpcCode::Rat: return "Rat";
        case NpcCode::Rogue: return "Rogue";
        case NpcCode::HellMeteor: return "HellMeteor";
        case NpcCode::Charsi: return "Charsi";
        case NpcCode::Warriv: return "Warriv";
        case NpcCode::Andariel: return "Andariel";
        case NpcCode::Bird: return "Bird";
        case NpcCode::Bird2: return "Bird2";
        case NpcCode::Bat: return "Bat";
        case NpcCode::DarkRanger: return "DarkRanger";
        case NpcCode::VileArcher: return "VileArcher";
        case NpcCode::DarkArcher: return "DarkArcher";
        case NpcCode::BlackArcher: return "BlackArcher";
        case NpcCode::FleshArcher: return "FleshArcher";
        case NpcCode::DarkSpearwoman: return "DarkSpearwoman";
        case NpcCode::VileLancer: return "VileLancer";
        case NpcCode::DarkLancer: return "DarkLancer";
        case NpcCode::BlackLancer: return "BlackLancer";
        case NpcCode::FleshLancer: return "FleshLancer";
        case NpcCode::SkeletonArcher: return "SkeletonArcher";
        case NpcCode::ReturnedArcher: return "ReturnedArcher";
        case NpcCode::BoneArcher: return "BoneArcher";
        case NpcCode::BurningDeadArcher: return "BurningDeadArcher";
        case NpcCode::HorrorArcher: return "HorrorArcher";
        case NpcCode::Warriv2: return "Warriv2";
        case NpcCode::Atma: return "Atma";
        case NpcCode::Drognan: return "Drognan";
        case NpcCode::Fara: return "Fara";
        case NpcCode::Cow: return "Cow";
        case NpcCode::SandMaggotYoung: return "SandMaggotYoung";
        case NpcCode::RockWormYoung: return "RockWormYoung";
        case NpcCode::DevourerYoung: return "DevourerYoung";
        case NpcCode::GiantLampreyYoung: return "GiantLampreyYoung";
        case NpcCode::WorldKillerYoung: return "WorldKillerYoung";
        case NpcCode::Camel: return "Camel";
        case NpcCode::Blunderbore: return "Blunderbore";
        case NpcCode::Gorbelly: return "Gorbelly";
        case NpcCode::Mauler: return "Mauler";
        case NpcCode::Urdar: return "Urdar";
        case NpcCode::SandMaggotEgg: return "SandMaggotEgg";
        case NpcCode::RockWormEgg: return "RockWormEgg";
        case NpcCode::DevourerEgg: return "DevourerEgg";
        case NpcCode::GiantLampreyEgg: return "GiantLampreyEgg";
        case NpcCode::WorldKillerEgg: return "WorldKillerEgg";
        case NpcCode::Act2Male: return "Act2Male";
        case NpcCode::Act2Female: return "Act2Female";
        case NpcCode::Act2Child: return "Act2Child";
        case NpcCode::Greiz: return "Greiz";
        case NpcCode::Elzix: return "Elzix";
        case NpcCode::Geglash: return "Geglash";
        case NpcCode::Jerhyn: return "Jerhyn";
        case NpcCode::Lysander: return "Lysander";
        case NpcCode::Act2Guard: return "Act2Guard";
        case NpcCode::Act2Vendor: return "Act2Vendor";
        case NpcCode::Act2Vendor2: return "Act2Vendor2";
        case NpcCode::FoulCrowNest: return "FoulCrowNest";
        case NpcCode::BloodHawkNest: return "BloodHawkNest";
        case NpcCode::BlackVultureNest: return "BlackVultureNest";
        case NpcCode::CloudStalkerNest: return "CloudStalkerNest";
        case NpcCode::Meshif: return "Meshif";
        case NpcCode::Duriel: return "Duriel";
        case NpcCode::UndeadRatMan: return "UndeadRatMan";
        case NpcCode::UndeadFetish: return "UndeadFetish";
        case NpcCode::UndeadFlayer: return "UndeadFlayer";
        case NpcCode::UndeadSoulKiller: return "UndeadSoulKiller";
        case NpcCode::UndeadStygianDoll: return "UndeadStygianDoll";
        case NpcCode::DarkGuard: return "DarkGuard";
        case NpcCode::DarkGuard2: return "DarkGuard2";
        case NpcCode::DarkGuard3: return "DarkGuard3";
        case NpcCode::DarkGuard4: return "DarkGuard4";
        case NpcCode::DarkGuard5: return "DarkGuard5";
        case NpcCode::BloodMage: return "BloodMage";
        case NpcCode::BloodMage2: return "BloodMage2";
        case NpcCode::BloodMage3: return "BloodMage3";
        case NpcCode::BloodMage4: return "BloodMage4";
        case NpcCode::BloodMage5: return "BloodMage5";
        case NpcCode::Maggot: return "Maggot";
        case NpcCode::MummyGenerator: return "MummyGenerator";
        case NpcCode::Radament: return "Radament";
        case NpcCode::FireBeast: return "FireBeast";
        case NpcCode::IceGlobe: return "IceGlobe";
        case NpcCode::LightningBeast: return "LightningBeast";
        case NpcCode::PoisonOrb: return "PoisonOrb";
        case NpcCode::FlyingScimitar: return "FlyingScimitar";
        case NpcCode::Zakarumite: return "Zakarumite";
        case NpcCode::Faithful: return "Faithful";
        case NpcCode::Zealot: return "Zealot";
        case NpcCode::Sexton: return "Sexton";
        case NpcCode::Cantor: return "Cantor";
        case NpcCode::Heirophant: return "Heirophant";
        case NpcCode::Heirophant2: return "Heirophant2";
        case NpcCode::Mephisto: return "Mephisto";
        case NpcCode::Diablo: return "Diablo";
        case NpcCode::DeckardCain2: return "DeckardCain2";
        case NpcCode::DeckardCain3: return "DeckardCain3";
        case NpcCode::DeckardCain4: return "DeckardCain4";
        case NpcCode::SwampDweller: return "SwampDweller";
        case NpcCode::BogCreature: return "BogCreature";
        case NpcCode::SlimePrince: return "SlimePrince";
        case NpcCode::Summoner: return "Summoner";
        case NpcCode::Tyrael: return "Tyrael";
        case NpcCode::Asheara: return "Asheara";
        case NpcCode::Hratli: return "Hratli";
        case NpcCode::Alkor: return "Alkor";
        case NpcCode::Ormus: return "Ormus";
        case NpcCode::Izual: return "Izual";
        case NpcCode::Halbu: return "Halbu";
        case NpcCode::WaterWatcherLimb: return "WaterWatcherLimb";
        case NpcCode::RiverStalkerLimb: return "RiverStalkerLimb";
        case NpcCode::StygianWatcherLimb: return "StygianWatcherLimb";
        case NpcCode::WaterWatcherHead: return "WaterWatcherHead";
        case NpcCode::RiverStalkerHead: return "RiverStalkerHead";
        case NpcCode::StygianWatcherHead: return "StygianWatcherHead";
        case NpcCode::Meshif2: return "Meshif2";
        case NpcCode::DeckardCain5: return "DeckardCain5";
        case NpcCode::Navi: return "Navi";
        case NpcCode::BloodRaven: return "BloodRaven";
        case NpcCode::Bug: return "Bug";
        case NpcCode::Scorpion: return "Scorpion";
        case NpcCode::RogueScout: return "RogueScout";
        case NpcCode::Rogue2: return "Rogue2";
        case NpcCode::Rogue3: return "Rogue3";
        case NpcCode::GargoyleTrap: return "GargoyleTrap";
        case NpcCode::ReturnedMage: return "ReturnedMage";
        case NpcCode::BoneMage: return "BoneMage";
        case NpcCode::BurningDeadMage: return "BurningDeadMage";
        case NpcCode::HorrorMage: return "HorrorMage";
        case NpcCode::RatManShaman: return "RatManShaman";
        case NpcCode::FetishShaman: return "FetishShaman";
        case NpcCode::FlayerShaman: return "FlayerShaman";
        case NpcCode::SoulKillerShaman: return "SoulKillerShaman";
        case NpcCode::StygianDollShaman: return "StygianDollShaman";
        case NpcCode::Larva: return "Larva";
        case NpcCode::SandMaggotQueen: return "SandMaggotQueen";
        case NpcCode::RockWormQueen: return "RockWormQueen";
        case NpcCode::DevourerQueen: return "DevourerQueen";
        case NpcCode::GiantLampreyQueen: return "GiantLampreyQueen";
        case NpcCode::WorldKillerQueen: return "WorldKillerQueen";
        case NpcCode::ClayGolem: return "ClayGolem";
        case NpcCode::BloodGolem: return "BloodGolem";
        case NpcCode::IronGolem: return "IronGolem";
        case NpcCode::FireGolem: return "FireGolem";
        case NpcCode::Familiar: return "Familiar";
        case NpcCode::Act3Male: return "Act3Male";
        case NpcCode::NightMarauder: return "NightMarauder";
        case NpcCode::Act3Female: return "Act3Female";
        case NpcCode::Natalya: return "Natalya";
        case NpcCode::FleshSpawner: return "FleshSpawner";
        case NpcCode::StygianHag: return "StygianHag";
        case NpcCode::Grotesque: return "Grotesque";
        case NpcCode::FleshBeast: return "FleshBeast";
        case NpcCode::StygianDog: return "StygianDog";
        case NpcCode::GrotesqueWyrm: return "GrotesqueWyrm";
        case NpcCode::Groper: return "Groper";
        case NpcCode::Strangler: return "Strangler";
        case NpcCode::StormCaster: return "StormCaster";
        case NpcCode::Corpulent: return "Corpulent";
        case NpcCode::CorpseSpitter: return "CorpseSpitter";
        case NpcCode::MawFiend: return "MawFiend";
        case NpcCode::DoomKnight: return "DoomKnight";
        case NpcCode::AbyssKnight: return "AbyssKnight";
        case NpcCode::OblivionKnight: return "OblivionKnight";
        case NpcCode::QuillBear: return "QuillBear";
        case NpcCode::SpikeGiant: return "SpikeGiant";
        case NpcCode::ThornBrute: return "ThornBrute";
        case NpcCode::RazorBeast: return "RazorBeast";
        case NpcCode::GiantUrchin: return "GiantUrchin";
        case NpcCode::Snake: return "Snake";
        case NpcCode::Parrot: return "Parrot";
        case NpcCode::Fish: return "Fish";
        case NpcCode::EvilHole: return "EvilHole";
        case NpcCode::EvilHole2: return "EvilHole2";
        case NpcCode::EvilHole3: return "EvilHole3";
        case NpcCode::EvilHole4: return "EvilHole4";
        case NpcCode::EvilHole5: return "EvilHole5";
        case NpcCode::FireboltTrap: return "FireboltTrap";
        case NpcCode::HorzMissileTrap: return "HorzMissileTrap";
        case NpcCode::VertMissileTrap: return "VertMissileTrap";
        case NpcCode::PoisonCloudTrap: return "PoisonCloudTrap";
        case NpcCode::LightningTrap: return "LightningTrap";
        case NpcCode::Kaelan: return "Kaelan";
        case NpcCode::InvisoSpawner: return "InvisoSpawner";
        case NpcCode::DiabloClone: return "DiabloClone";
        case NpcCode::SuckerNest: return "SuckerNest";
        case NpcCode::FeederNest: return "FeederNest";
        case NpcCode::BloodHookNest: return "BloodHookNest";
        case NpcCode::BloodWingNest: return "BloodWingNest";
        case NpcCode::Guard: return "Guard";
        case NpcCode::MiniSpider: return "MiniSpider";
        case NpcCode::BonePrison: return "BonePrison";
        case NpcCode::BonePrison2: return "BonePrison2";
        case NpcCode::BonePrison3: return "BonePrison3";
        case NpcCode::BonePrison4: return "BonePrison4";
        case NpcCode::BoneWall: return "BoneWall";
        case NpcCode::CouncilMember: return "CouncilMember";
        case NpcCode::CouncilMember2: return "CouncilMember2";
        case NpcCode::CouncilMember3: return "CouncilMember3";
        case NpcCode::Turret: return "Turret";
        case NpcCode::Turret2: return "Turret2";
        case NpcCode::Turret3: return "Turret3";
        case NpcCode::Hydra: return "Hydra";
        case NpcCode::Hydra2: return "Hydra2";
        case NpcCode::Hydra3: return "Hydra3";
        case NpcCode::MeleeTrap: return "MeleeTrap";
        case NpcCode::SevenTombs: return "SevenTombs";
        case NpcCode::Decoy: return "Decoy";
        case NpcCode::Valkyrie: return "Valkyrie";
        case NpcCode::Act2Guard3: return "Act2Guard3";
        case NpcCode::IronWolf: return "IronWolf";
        case NpcCode::Balrog: return "Balrog";
        case NpcCode::PitLord: return "PitLord";
        case NpcCode::VenomLord: return "VenomLord";
        case NpcCode::NecroSkeleton: return "NecroSkeleton";
        case NpcCode::NecroMage: return "NecroMage";
        case NpcCode::Griswold: return "Griswold";
        case NpcCode::CompellingOrbNpc: return "CompellingOrbNpc";
        case NpcCode::Tyrael2: return "Tyrael2";
        case NpcCode::DarkWanderer: return "DarkWanderer";
        case NpcCode::NovaTrap: return "NovaTrap";
        case NpcCode::SpiritMummy: return "SpiritMummy";
        case NpcCode::LightningSpire: return "LightningSpire";
        case NpcCode::FireTower: return "FireTower";
        case NpcCode::Slinger: return "Slinger";
        case NpcCode::SpearCat: return "SpearCat";
        case NpcCode::NightSlinger: return "NightSlinger";
        case NpcCode::HellSlinger: return "HellSlinger";
        case NpcCode::Act2Guard4: return "Act2Guard4";
        case NpcCode::Act2Guard5: return "Act2Guard5";
        case NpcCode::ReturnedMage2: return "ReturnedMage2";
        case NpcCode::BoneMage2: return "BoneMage2";
        case NpcCode::BaalColdMage: return "BaalColdMage";
        case NpcCode::HorrorMage2: return "HorrorMage2";
        case NpcCode::ReturnedMage3: return "ReturnedMage3";
        case NpcCode::BoneMage3: return "BoneMage3";
        case NpcCode::BurningDeadMage2: return "BurningDeadMage2";
        case NpcCode::HorrorMage3: return "HorrorMage3";
        case NpcCode::ReturnedMage4: return "ReturnedMage4";
        case NpcCode::BoneMage4: return "BoneMage4";
        case NpcCode::BurningDeadMage3: return "BurningDeadMage3";
        case NpcCode::HorrorMage4: return "HorrorMage4";
        case NpcCode::HellBovine: return "HellBovine";
        case NpcCode::Window: return "Window";
        case NpcCode::Window2: return "Window2";
        case NpcCode::SpearCat2: return "SpearCat2";
        case NpcCode::NightSlinger2: return "NightSlinger2";
        case NpcCode::RatMan2: return "RatMan2";
        case NpcCode::Fetish2: return "Fetish2";
        case NpcCode::Flayer2: return "Flayer2";
        case NpcCode::SoulKiller2: return "SoulKiller2";
        case NpcCode::StygianDoll2: return "StygianDoll2";
        case NpcCode::MephistoSpirit: return "MephistoSpirit";
        case NpcCode::TheSmith: return "TheSmith";
        case NpcCode::TrappedSoul: return "TrappedSoul";
        case NpcCode::TrappedSoul2: return "TrappedSoul2";
        case NpcCode::Jamella: return "Jamella";
        case NpcCode::Izual2: return "Izual2";
        case NpcCode::RatMan3: return "RatMan3";
        case NpcCode::Malachai: return "Malachai";
        case NpcCode::Hephasto: return "Hephasto";
        case NpcCode::WakeOfDestruction: return "WakeOfDestruction";
        case NpcCode::ChargedBoltSentry: return "ChargedBoltSentry";
        case NpcCode::LightningSentry: return "LightningSentry";
        case NpcCode::BladeCreeper: return "BladeCreeper";
        case NpcCode::InvisiblePet: return "InvisiblePet";
        case NpcCode::InfernoSentry: return "InfernoSentry";
        case NpcCode::DeathSentry: return "DeathSentry";
        case NpcCode::ShadowWarrior: return "ShadowWarrior";
        case NpcCode::ShadowMaster: return "ShadowMaster";
        case NpcCode::DruidHawk: return "DruidHawk";
        case NpcCode::DruidSpiritWolf: return "DruidSpiritWolf";
        case NpcCode::DruidFenris: return "DruidFenris";
        case NpcCode::SpiritOfBarbs: return "SpiritOfBarbs";
        case NpcCode::HeartOfWolverine: return "HeartOfWolverine";
        case NpcCode::OakSage: return "OakSage";
        case NpcCode::DruidPlaguePoppy: return "DruidPlaguePoppy";
        case NpcCode::DruidCycleOfLife: return "DruidCycleOfLife";
        case NpcCode::VineCreature: return "VineCreature";
        case NpcCode::DruidBear: return "DruidBear";
        case NpcCode::Eagle: return "Eagle";
        case NpcCode::Wolf: return "Wolf";
        case NpcCode::Bear: return "Bear";
        case NpcCode::BarricadeDoor: return "BarricadeDoor";
        case NpcCode::BarricadeDoor2: return "BarricadeDoor2";
        case NpcCode::PrisonDoor: return "PrisonDoor";
        case NpcCode::BarricadeTower: return "BarricadeTower";
        case NpcCode::RotWalker: return "RotWalker";
        case NpcCode::ReanimatedHorde: return "ReanimatedHorde";
        case NpcCode::ProwlingDead: return "ProwlingDead";
        case NpcCode::UnholyCorpse: return "UnholyCorpse";
        case NpcCode::DefiledWarrior: return "DefiledWarrior";
        case NpcCode::SiegeBeast: return "SiegeBeast";
        case NpcCode::CrushBiest: return "CrushBiest";
        case NpcCode::BloodBringer: return "BloodBringer";
        case NpcCode::GoreBearer: return "GoreBearer";
        case NpcCode::DeamonSteed: return "DeamonSteed";
        case NpcCode::SnowYeti: return "SnowYeti";
        case NpcCode::SnowYeti2: return "SnowYeti2";
        case NpcCode::SnowYeti3: return "SnowYeti3";
        case NpcCode::SnowYeti4: return "SnowYeti4";
        case NpcCode::WolfRider: return "WolfRider";
        case NpcCode::WolfRider2: return "WolfRider2";
        case NpcCode::WolfRider3: return "WolfRider3";
        case NpcCode::MinionExp: return "MinionExp";
        case NpcCode::SlayerExp: return "SlayerExp";
        case NpcCode::IceBoar: return "IceBoar";
        case NpcCode::FireBoar: return "FireBoar";
        case NpcCode::HellSpawn: return "HellSpawn";
        case NpcCode::IceSpawn: return "IceSpawn";
        case NpcCode::GreaterHellSpawn: return "GreaterHellSpawn";
        case NpcCode::GreaterIceSpawn: return "GreaterIceSpawn";
        case NpcCode::FanaticMinion: return "FanaticMinion";
        case NpcCode::BerserkSlayer: return "BerserkSlayer";
        case NpcCode::ConsumedIceBoar: return "ConsumedIceBoar";
        case NpcCode::ConsumedFireBoar: return "ConsumedFireBoar";
        case NpcCode::FrenziedHellSpawn: return "FrenziedHellSpawn";
        case NpcCode::FrenziedIceSpawn: return "FrenziedIceSpawn";
        case NpcCode::InsaneHellSpawn: return "InsaneHellSpawn";
        case NpcCode::InsaneIceSpawn: return "InsaneIceSpawn";
        case NpcCode::SuccubusExp: return "SuccubusExp";
        case NpcCode::VileTemptress: return "VileTemptress";
        case NpcCode::StygianHarlot: return "StygianHarlot";
        case NpcCode::HellTemptress: return "HellTemptress";
        case NpcCode::BloodTemptress: return "BloodTemptress";
        case NpcCode::Dominus: return "Dominus";
        case NpcCode::VileWitch: return "VileWitch";
        case NpcCode::StygianFury: return "StygianFury";
        case NpcCode::BloodWitch: return "BloodWitch";
        case NpcCode::HellWitch: return "HellWitch";
        case NpcCode::OverSeer: return "OverSeer";
        case NpcCode::Lasher: return "Lasher";
        case NpcCode::OverLord: return "OverLord";
        case NpcCode::BloodBoss: return "BloodBoss";
        case NpcCode::HellWhip: return "HellWhip";
        case NpcCode::MinionSpawner: return "MinionSpawner";
        case NpcCode::MinionSlayerSpawner: return "MinionSlayerSpawner";
        case NpcCode::MinionBoarSpawner: return "MinionBoarSpawner";
        case NpcCode::MinionBoarSpawner2: return "MinionBoarSpawner2";
        case NpcCode::MinionSpawnSpawner: return "MinionSpawnSpawner";
        case NpcCode::MinionBoarSpawner3: return "MinionBoarSpawner3";
        case NpcCode::MinionBoarSpawner4: return "MinionBoarSpawner4";
        case NpcCode::MinionSpawnSpawner2: return "MinionSpawnSpawner2";
        case NpcCode::Imp: return "Imp";
        case NpcCode::Imp2: return "Imp2";
        case NpcCode::Imp3: return "Imp3";
        case NpcCode::Imp4: return "Imp4";
        case NpcCode::Imp5: return "Imp5";
        case NpcCode::CatapultS: return "CatapultS";
        case NpcCode::CatapultE: return "CatapultE";
        case NpcCode::CatapultSiege: return "CatapultSiege";
        case NpcCode::CatapultW: return "CatapultW";
        case NpcCode::FrozenHorror: return "FrozenHorror";
        case NpcCode::FrozenHorror2: return "FrozenHorror2";
        case NpcCode::FrozenHorror3: return "FrozenHorror3";
        case NpcCode::FrozenHorror4: return "FrozenHorror4";
        case NpcCode::FrozenHorror5: return "FrozenHorror5";
        case NpcCode::BloodLord2: return "BloodLord2";
        case NpcCode::BloodLord3: return "BloodLord3";
        case NpcCode::BloodLord4: return "BloodLord4";
        case NpcCode::BloodLord5: return "BloodLord5";
        case NpcCode::BloodLord6: return "BloodLord6";
        case NpcCode::Larzuk: return "Larzuk";
        case NpcCode::Drehya: return "Drehya";
        case NpcCode::Malah: return "Malah";
        case NpcCode::NihlathakTown: return "NihlathakTown";
        case NpcCode::QualKehk: return "QualKehk";
        case NpcCode::CatapultSpotterS: return "CatapultSpotterS";
        case NpcCode::CatapultSpotterE: return "CatapultSpotterE";
        case NpcCode::CatapultSpotterSiege: return "CatapultSpotterSiege";
        case NpcCode::CatapultSpotterW: return "CatapultSpotterW";
        case NpcCode::DeckardCain6: return "DeckardCain6";
        case NpcCode::Tyrael3: return "Tyrael3";
        case NpcCode::Act5Combatant: return "Act5Combatant";
        case NpcCode::Act5Combatant2: return "Act5Combatant2";
        case NpcCode::BarricadeWallRight: return "BarricadeWallRight";
        case NpcCode::BarricadeWallLeft: return "BarricadeWallLeft";
        case NpcCode::Nihlathak: return "Nihlathak";
        case NpcCode::Drehya2: return "Drehya2";
        case NpcCode::EvilHut: return "EvilHut";
        case NpcCode::DeathMauler: return "DeathMauler";
        case NpcCode::DeathMauler2: return "DeathMauler2";
        case NpcCode::DeathMauler3: return "DeathMauler3";
        case NpcCode::DeathMauler4: return "DeathMauler4";
        case NpcCode::DeathMauler5: return "DeathMauler5";
        case NpcCode::POW: return "POW";
        case NpcCode::Act5Townguard: return "Act5Townguard";
        case NpcCode::Act5Townguard2: return "Act5Townguard2";
        case NpcCode::AncientStatue: return "AncientStatue";
        case NpcCode::AncientStatueNpc2: return "AncientStatueNpc2";
        case NpcCode::AncientStatueNpc3: return "AncientStatueNpc3";
        case NpcCode::AncientBarbarian: return "AncientBarbarian";
        case NpcCode::AncientBarbarian2: return "AncientBarbarian2";
        case NpcCode::AncientBarbarian3: return "AncientBarbarian3";
        case NpcCode::BaalThrone: return "BaalThrone";
        case NpcCode::BaalCrab: return "BaalCrab";
        case NpcCode::BaalTaunt: return "BaalTaunt";
        case NpcCode::PutridDefiler: return "PutridDefiler";
        case NpcCode::PutridDefiler2: return "PutridDefiler2";
        case NpcCode::PutridDefiler3: return "PutridDefiler3";
        case NpcCode::PutridDefiler4: return "PutridDefiler4";
        case NpcCode::PutridDefiler5: return "PutridDefiler5";
        case NpcCode::PainWorm: return "PainWorm";
        case NpcCode::PainWorm2: return "PainWorm2";
        case NpcCode::PainWorm3: return "PainWorm3";
        case NpcCode::PainWorm4: return "PainWorm4";
        case NpcCode::PainWorm5: return "PainWorm5";
        case NpcCode::Bunny: return "Bunny";
        case NpcCode::CouncilMemberBall: return "CouncilMemberBall";
        case NpcCode::VenomLord2: return "VenomLord2";
        case NpcCode::BaalCrabToStairs: return "BaalCrabToStairs";
        case NpcCode::Act5Hireling1Hand: return "Act5Hireling1Hand";
        case NpcCode::Act5Hireling2Hand: return "Act5Hireling2Hand";
        case NpcCode::BaalTentacle: return "BaalTentacle";
        case NpcCode::BaalTentacle2: return "BaalTentacle2";
        case NpcCode::BaalTentacle3: return "BaalTentacle3";
        case NpcCode::BaalTentacle4: return "BaalTentacle4";
        case NpcCode::BaalTentacle5: return "BaalTentacle5";
        case NpcCode::InjuredBarbarian: return "InjuredBarbarian";
        case NpcCode::InjuredBarbarian2: return "InjuredBarbarian2";
        case NpcCode::InjuredBarbarian3: return "InjuredBarbarian3";
        case NpcCode::BaalCrabClone: return "BaalCrabClone";
        case NpcCode::BaalsMinion: return "BaalsMinion";
        case NpcCode::BaalsMinion2: return "BaalsMinion2";
        case NpcCode::BaalsMinion3: return "BaalsMinion3";
        case NpcCode::WorldstoneEffect: return "WorldstoneEffect";
        case NpcCode::BurningDeadArcher2: return "BurningDeadArcher2";
        case NpcCode::BoneArcher2: return "BoneArcher2";
        case NpcCode::BurningDeadArcher3: return "BurningDeadArcher3";
        case NpcCode::ReturnedArcher2: return "ReturnedArcher2";
        case NpcCode::HorrorArcher2: return "HorrorArcher2";
        case NpcCode::Afflicted2: return "Afflicted2";
        case NpcCode::Tainted2: return "Tainted2";
        case NpcCode::Misshapen2: return "Misshapen2";
        case NpcCode::Disfigured2: return "Disfigured2";
        case NpcCode::Damned2: return "Damned2";
        case NpcCode::MoonClan2: return "MoonClan2";
        case NpcCode::NightClan2: return "NightClan2";
        case NpcCode::HellClan2: return "HellClan2";
        case NpcCode::BloodClan2: return "BloodClan2";
        case NpcCode::DeathClan2: return "DeathClan2";
        case NpcCode::FoulCrow2: return "FoulCrow2";
        case NpcCode::BloodHawk2: return "BloodHawk2";
        case NpcCode::BlackRaptor2: return "BlackRaptor2";
        case NpcCode::CloudStalker2: return "CloudStalker2";
        case NpcCode::ClawViper2: return "ClawViper2";
        case NpcCode::PitViper2: return "PitViper2";
        case NpcCode::Salamander2: return "Salamander2";
        case NpcCode::TombViper2: return "TombViper2";
        case NpcCode::SerpentMagus2: return "SerpentMagus2";
        case NpcCode::Marauder2: return "Marauder2";
        case NpcCode::Infidel2: return "Infidel2";
        case NpcCode::SandRaider2: return "SandRaider2";
        case NpcCode::Invader2: return "Invader2";
        case NpcCode::Assailant2: return "Assailant2";
        case NpcCode::DeathMauler6: return "DeathMauler6";
        case NpcCode::QuillRat2: return "QuillRat2";
        case NpcCode::SpikeFiend2: return "SpikeFiend2";
        case NpcCode::RazorSpine2: return "RazorSpine2";
        case NpcCode::CarrionBird2: return "CarrionBird2";
        case NpcCode::ThornedHulk2: return "ThornedHulk2";
        case NpcCode::Slinger2: return "Slinger2";
        case NpcCode::Slinger3: return "Slinger3";
        case NpcCode::Slinger4: return "Slinger4";
        case NpcCode::VileArcher2: return "VileArcher2";
        case NpcCode::DarkArcher2: return "DarkArcher2";
        case NpcCode::VileLancer2: return "VileLancer2";
        case NpcCode::DarkLancer2: return "DarkLancer2";
        case NpcCode::BlackLancer2: return "BlackLancer2";
        case NpcCode::Blunderbore2: return "Blunderbore2";
        case NpcCode::Mauler2: return "Mauler2";
        case NpcCode::ReturnedMage5: return "ReturnedMage5";
        case NpcCode::BurningDeadMage4: return "BurningDeadMage4";
        case NpcCode::ReturnedMage6: return "ReturnedMage6";
        case NpcCode::HorrorMage5: return "HorrorMage5";
        case NpcCode::BoneMage5: return "BoneMage5";
        case NpcCode::HorrorMage6: return "HorrorMage6";
        case NpcCode::HorrorMage7: return "HorrorMage7";
        case NpcCode::Huntress2: return "Huntress2";
        case NpcCode::SaberCat2: return "SaberCat2";
        case NpcCode::CaveLeaper2: return "CaveLeaper2";
        case NpcCode::TombCreeper2: return "TombCreeper2";
        case NpcCode::Ghost2: return "Ghost2";
        case NpcCode::Wraith2: return "Wraith2";
        case NpcCode::Specter2: return "Specter2";
        case NpcCode::SuccubusExp2: return "SuccubusExp2";
        case NpcCode::HellTemptress2: return "HellTemptress2";
        case NpcCode::Dominus2: return "Dominus2";
        case NpcCode::HellWitch2: return "HellWitch2";
        case NpcCode::VileWitch2: return "VileWitch2";
        case NpcCode::Gloam2: return "Gloam2";
        case NpcCode::BlackSoul2: return "BlackSoul2";
        case NpcCode::BurningSoul2: return "BurningSoul2";
        case NpcCode::Carver2: return "Carver2";
        case NpcCode::Devilkin2: return "Devilkin2";
        case NpcCode::DarkOne2: return "DarkOne2";
        case NpcCode::CarverShaman2: return "CarverShaman2";
        case NpcCode::DevilkinShaman2: return "DevilkinShaman2";
        case NpcCode::DarkShaman2: return "DarkShaman2";
        case NpcCode::BoneWarrior2: return "BoneWarrior2";
        case NpcCode::Returned2: return "Returned2";
        case NpcCode::Gloombat2: return "Gloombat2";
        case NpcCode::Fiend2: return "Fiend2";
        case NpcCode::BloodLord7: return "BloodLord7";
        case NpcCode::BloodLord8: return "BloodLord8";
        case NpcCode::Scarab2: return "Scarab2";
        case NpcCode::SteelWeevil2: return "SteelWeevil2";
        case NpcCode::Flayer3: return "Flayer3";
        case NpcCode::StygianDoll3: return "StygianDoll3";
        case NpcCode::SoulKiller3: return "SoulKiller3";
        case NpcCode::Flayer4: return "Flayer4";
        case NpcCode::StygianDoll4: return "StygianDoll4";
        case NpcCode::SoulKiller4: return "SoulKiller4";
        case NpcCode::FlayerShaman2: return "FlayerShaman2";
        case NpcCode::StygianDollShaman2: return "StygianDollShaman2";
        case NpcCode::SoulKillerShaman2: return "SoulKillerShaman2";
        case NpcCode::TempleGuard2: return "TempleGuard2";
        case NpcCode::TempleGuard3: return "TempleGuard3";
        case NpcCode::Guardian2: return "Guardian2";
        case NpcCode::Unraveler2: return "Unraveler2";
        case NpcCode::HoradrimAncient2: return "HoradrimAncient2";
        case NpcCode::HoradrimAncient3: return "HoradrimAncient3";
        case NpcCode::Zealot2: return "Zealot2";
        case NpcCode::Zealot3: return "Zealot3";
        case NpcCode::Heirophant3: return "Heirophant3";
        case NpcCode::Heirophant4: return "Heirophant4";
        case NpcCode::Grotesque2: return "Grotesque2";
        case NpcCode::FleshSpawner2: return "FleshSpawner2";
        case NpcCode::GrotesqueWyrm2: return "GrotesqueWyrm2";
        case NpcCode::FleshBeast2: return "FleshBeast2";
        case NpcCode::WorldKiller2: return "WorldKiller2";
        case NpcCode::WorldKillerYoung2: return "WorldKillerYoung2";
        case NpcCode::WorldKillerEgg2: return "WorldKillerEgg2";
        case NpcCode::SlayerExp2: return "SlayerExp2";
        case NpcCode::HellSpawn2: return "HellSpawn2";
        case NpcCode::GreaterHellSpawn2: return "GreaterHellSpawn2";
        case NpcCode::Arach2: return "Arach2";
        case NpcCode::Balrog2: return "Balrog2";
        case NpcCode::PitLord2: return "PitLord2";
        case NpcCode::Imp6: return "Imp6";
        case NpcCode::Imp7: return "Imp7";
        case NpcCode::UndeadStygianDoll2: return "UndeadStygianDoll2";
        case NpcCode::UndeadSoulKiller2: return "UndeadSoulKiller2";
        case NpcCode::Strangler2: return "Strangler2";
        case NpcCode::StormCaster2: return "StormCaster2";
        case NpcCode::MawFiend2: return "MawFiend2";
        case NpcCode::BloodLord9: return "BloodLord9";
        case NpcCode::GhoulLord2: return "GhoulLord2";
        case NpcCode::DarkLord2: return "DarkLord2";
        case NpcCode::UnholyCorpse2: return "UnholyCorpse2";
        case NpcCode::DoomKnight2: return "DoomKnight2";
        case NpcCode::DoomKnight3: return "DoomKnight3";
        case NpcCode::OblivionKnight2: return "OblivionKnight2";
        case NpcCode::OblivionKnight3: return "OblivionKnight3";
        case NpcCode::Cadaver2: return "Cadaver2";
        case NpcCode::UberMephisto: return "UberMephisto";
        case NpcCode::UberDiablo: return "UberDiablo";
        case NpcCode::UberIzual: return "UberIzual";
        case NpcCode::Lilith: return "Lilith";
        case NpcCode::UberDuriel: return "UberDuriel";
        case NpcCode::UberBaal: return "UberBaal";
        case NpcCode::EvilHut2: return "EvilHut2";
        case NpcCode::DemonHole: return "DemonHole";
        case NpcCode::PitLord3: return "PitLord3";
        case NpcCode::OblivionKnight4: return "OblivionKnight4";
        case NpcCode::Imp8: return "Imp8";
        case NpcCode::HellSwarm2: return "HellSwarm2";
        case NpcCode::WorldKiller3: return "WorldKiller3";
        case NpcCode::Arach3: return "Arach3";
        case NpcCode::SteelWeevil3: return "SteelWeevil3";
        case NpcCode::HellTemptress3: return "HellTemptress3";
        case NpcCode::VileWitch3: return "VileWitch3";
        case NpcCode::FleshHunter2: return "FleshHunter2";
        case NpcCode::DarkArcher3: return "DarkArcher3";
        case NpcCode::BlackLancer3: return "BlackLancer3";
        case NpcCode::HellWhip2: return "HellWhip2";
        case NpcCode::Returned3: return "Returned3";
        case NpcCode::HorrorArcher3: return "HorrorArcher3";
        case NpcCode::BurningDeadMage5: return "BurningDeadMage5";
        case NpcCode::HorrorMage8: return "HorrorMage8";
        case NpcCode::BoneMage6: return "BoneMage6";
        case NpcCode::HorrorMage9: return "HorrorMage9";
        case NpcCode::DarkLord3: return "DarkLord3";
        case NpcCode::Specter3: return "Specter3";
        case NpcCode::BurningSoul3: return "BurningSoul3";
        case NpcCode::Invalid: return "Invalid";
        case NpcCode::NpcNotApplicable: return "NpcNotApplicable";
        default:
            return "Unknown";
    }
}

static bool npc_is_useless(int code) {
    switch (code) {
        case NpcCode::Gorgon:            // Unused
        case NpcCode::Gorgon2:           // Unused
        case NpcCode::Gorgon3:           // Unused
        case NpcCode::Gorgon4:           // Unused
        case NpcCode::ChaosHorde:        // Unused
        case NpcCode::ChaosHorde2:       // Unused
        case NpcCode::ChaosHorde3:       // Unused
        case NpcCode::ChaosHorde4:       // Unused
        case NpcCode::DarkGuard:         // Unused
        case NpcCode::DarkGuard2:        // Unused
        case NpcCode::DarkGuard3:        // Unused
        case NpcCode::DarkGuard4:        // Unused
        case NpcCode::DarkGuard5:        // Unused
        case NpcCode::BloodMage:         // Unused
        case NpcCode::BloodMage2:        // Unused
        case NpcCode::BloodMage3:        // Unused
        case NpcCode::BloodMage4:        // Unused
        case NpcCode::BloodMage5:        // Unused
        case NpcCode::FireBeast:         // Unused
        case NpcCode::IceGlobe:          // Unused
        case NpcCode::LightningBeast:    // Unused
        case NpcCode::PoisonOrb:         // Unused
        case NpcCode::Chicken:           // Dummy
        case NpcCode::Rat:               // Dummy
        case NpcCode::Rogue:             // Dummy
        case NpcCode::HellMeteor:        // Dummy
        case NpcCode::Bird:              // Dummy
        case NpcCode::Bird2:             // Dummy
        case NpcCode::Bat:               // Dummy
        case NpcCode::Cow:               // Dummy
        case NpcCode::Camel:             // Dummy
        case NpcCode::Act2Male:          // Dummy
        case NpcCode::Act2Female:        // Dummy
        case NpcCode::Act2Child:         // Dummy
        case NpcCode::Act2Guard:         // Dummy
        case NpcCode::Act2Vendor:        // Dummy
        case NpcCode::Act2Vendor2:       // Dummy
        case NpcCode::Bug:               // Dummy
        case NpcCode::Scorpion:          // Dummy
        case NpcCode::Rogue2:            // Dummy
        case NpcCode::Rogue3:            // Dummy
        case NpcCode::Familiar:          // Dummy
        case NpcCode::Act3Male:          // Dummy
        case NpcCode::Act3Female:        // Dummy
        case NpcCode::Snake:             // Dummy
        case NpcCode::Parrot:            // Dummy
        case NpcCode::Fish:              // Dummy
        case NpcCode::EvilHole:          // Dummy
        case NpcCode::EvilHole2:         // Dummy
        case NpcCode::EvilHole3:         // Dummy
        case NpcCode::EvilHole4:         // Dummy
        case NpcCode::EvilHole5:         // Dummy
        case NpcCode::InvisoSpawner:     // Dummy
        case NpcCode::MiniSpider:        // Dummy
        case NpcCode::BoneWall:          // Dummy
        case NpcCode::SevenTombs:        // Dummy
        case NpcCode::SpiritMummy:       // Dummy
        case NpcCode::Act2Guard4:        // Dummy
        case NpcCode::Act2Guard5:        // Dummy
        case NpcCode::Window:            // Dummy
        case NpcCode::Window2:           // Dummy
        case NpcCode::MephistoSpirit:    // Dummy
        case NpcCode::InvisiblePet:      // Dummy
        case NpcCode::DemonHole:         // Dummy
        case NpcCode::FireboltTrap:      // A trap
        case NpcCode::HorzMissileTrap:   // A trap
        case NpcCode::VertMissileTrap:   // A trap
        case NpcCode::PoisonCloudTrap:   // A trap
        case NpcCode::LightningTrap:     // A trap
        case NpcCode::MeleeTrap:         // A trap
        case NpcCode::Hephasto:          // ????
        case NpcCode::SlayerExp:         // ????
        case NpcCode::SuccubusExp:       // ????
        case NpcCode::CompellingOrbNpc:  // at mephisto's temple in travincal

        case NpcCode::DeckardCain:        // In Trist?
        case NpcCode::DarkWanderer:       // Act 3 guy outside town
        case NpcCode::Tyrael:             // Kill Him in act 4 for quest?
        case NpcCode::InjuredBarbarian:   // Dummy
        case NpcCode::InjuredBarbarian2:  // Dummy
        case NpcCode::InjuredBarbarian3:  // Dummy
        case NpcCode::Act5Townguard:      // Dummy
        case NpcCode::Act5Townguard2:     // Dummy
        case NpcCode::Tyrael3:            // Appears when u kill baal?
        case NpcCode::WakeOfDestruction:

        case NpcCode::BaalThrone:  // Baal thats sitting on throne

        case NpcCode::NecroSkeleton:  // Necro summon
        case NpcCode::NecroMage:      // Necro summon

        case NpcCode::Hydra:
        case NpcCode::Hydra2:
        case NpcCode::Hydra3:

        case NpcCode::Guard:              // Act 2 merc?
        case NpcCode::IronWolf:           // Act 3 merc?
        case NpcCode::Act5Hireling1Hand:  // Act 5 merc?
        case NpcCode::Act5Hireling2Hand:  // Act 5 merc?

        case NpcCode::ShadowWarrior:
        case NpcCode::ShadowMaster:
        case NpcCode::OakSage:
        case NpcCode::ClayGolem:
        case NpcCode::BloodGolem:
        case NpcCode::IronGolem:
        case NpcCode::FireGolem:

        case NpcCode::ChargedBoltSentry:
        case NpcCode::LightningSentry:
        case NpcCode::InfernoSentry:
        case NpcCode::DeathSentry:

        case NpcCode::Decoy:
        case NpcCode::Valkyrie:

        case NpcCode::DruidHawk:
        case NpcCode::DruidSpiritWolf:
        case NpcCode::DruidFenris:
        case NpcCode::DruidPlaguePoppy:
        case NpcCode::DruidCycleOfLife:
        case NpcCode::VineCreature:
        case NpcCode::DruidBear:
        case NpcCode::Wolf:
        case NpcCode::Bear:

        case NpcCode::HeartOfWolverine:
        case NpcCode::SpiritOfBarbs:

        case NpcCode::CatapultSpotterS:
        case NpcCode::CatapultSpotterE:
        case NpcCode::CatapultSpotterSiege:
        case NpcCode::CatapultSpotterW:

        case NpcCode::CatapultS:
        case NpcCode::CatapultE:
        case NpcCode::CatapultSiege:
        case NpcCode::CatapultW:

        case NpcCode::Act5Combatant:
        case NpcCode::Act5Combatant2:

        case NpcCode::BarricadeWallLeft:
        case NpcCode::BarricadeWallRight:

        case NpcCode::TrappedSoul:   //Act 4 "human chest"
        case NpcCode::TrappedSoul2:  //Act 4 "human chest"
        case NpcCode::Navi:          //Flavie in Blood Moor/Cold Plains transition
        case NpcCode::Izual2:        // Izuals ghost after you kill him for quest
        {
            return true;
        }
        default: {
            return false;
        }
    }
}

#endif
