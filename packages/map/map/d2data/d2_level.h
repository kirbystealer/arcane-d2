#ifndef _level_h__
#define _level_h__


enum AreaLevel {
    Abaddon = 125, 
    AncientTunnels = 65, 
    ArcaneSanctuary = 74, 
    ArreatPlateau = 112, 
    ArreatSummit = 120, 
    Barracks = 28, 
    BlackMarsh = 6, 
    BloodMoor = 2, 
    BloodyFoothills = 110, 
    BurialGrounds = 17, 
    CanyonOfTheMagi = 46, 
    CatacombsLevel1 = 34, 
    CatacombsLevel2 = 35, 
    CatacombsLevel3 = 36, 
    CatacombsLevel4 = 37, 
    Cathedral = 33, 
    CaveLevel1 = 9, 
    CaveLevel2 = 13, 
    ChaosSanctuary = 108, 
    CityOfTheDamned = 106, 
    ClawViperTempleLevel1 = 58, 
    ClawViperTempleLevel2 = 61, 
    ColdPlains = 3, 
    Crypt = 18, 
    CrystallinePassage = 113, 
    DarkWood = 5, 
    DenOfEvil = 8, 
    DisusedFane = 95, 
    DisusedReliquary = 99, 
    DrifterCavern = 116, 
    DryHills = 42, 
    DuranceOfHateLevel1 = 100, 
    DuranceOfHateLevel2 = 101, 
    DuranceOfHateLevel3 = 102, 
    DurielsLair = 73, 
    FarOasis = 43, 
    FlayerDungeonLevel1 = 88, 
    FlayerDungeonLevel2 = 89, 
    FlayerDungeonLevel3 = 91, 
    FlayerJungle = 78, 
    ForgottenReliquary = 96, 
    ForgottenSands = 134, 
    ForgottenTemple = 97, 
    ForgottenTower = 20, 
    FrigidHighlands = 111, 
    FrozenRiver = 114, 
    FrozenTundra = 117, 
    FurnaceOfPain = 135, 
    GlacialTrail = 115, 
    GreatMarsh = 77, 
    HallsOfAnguish = 122, 
    HallsOfPain = 123, 
    HallsOfTheDeadLevel1 = 56, 
    HallsOfTheDeadLevel2 = 57, 
    HallsOfTheDeadLevel3 = 60, 
    HallsOfVaught = 124, 
    HaremLevel1 = 50, 
    HaremLevel2 = 51, 
    Harrogath = 109, 
    HoleLevel1 = 11, 
    HoleLevel2 = 15, 
    IcyCellar = 119, 
    InfernalPit = 127, 
    InnerCloister = 32, 
    JailLevel1 = 29, 
    JailLevel2 = 30, 
    JailLevel3 = 31, 
    KurastBazaar = 80, 
    KurastCauseway = 82, 
    KurastDocks = 75, 
    LostCity = 44, 
    LowerKurast = 79, 
    LutGholein = 40, 
    MaggotLairLevel1 = 62, 
    MaggotLairLevel2 = 63, 
    MaggotLairLevel3 = 64, 
    MatronsDen = 133, 
    Mausoleum = 19, 
    MonasteryGate = 26, 
    MooMooFarm = 39, 
    NihlathaksTemple = 121, 
    None = 0, 
    OuterCloister = 27, 
    OuterSteppes = 104, 
    PalaceCellarLevel1 = 52, 
    PalaceCellarLevel2 = 53, 
    PalaceCellarLevel3 = 54, 
    PitLevel1 = 12, 
    PitLevel2 = 16, 
    PitOfAcheron = 126, 
    PlainsOfDespair = 105, 
    RiverOfFlame = 107, 
    RockyWaste = 41, 
    RogueEncampment = 1, 
    RuinedFane = 98, 
    RuinedTemple = 94, 
    SewersLevel1Act2 = 47, 
    SewersLevel1Act3 = 92, 
    SewersLevel2Act2 = 48, 
    SewersLevel2Act3 = 93, 
    SewersLevel3Act2 = 49, 
    SpiderCave = 84, 
    SpiderCavern = 85, 
    SpiderForest = 76, 
    StonyField = 4, 
    StonyTombLevel1 = 55, 
    StonyTombLevel2 = 59, 
    SwampyPitLevel1 = 86, 
    SwampyPitLevel2 = 87, 
    SwampyPitLevel3 = 90, 
    TalRashasTomb1 = 66, 
    TalRashasTomb2 = 67, 
    TalRashasTomb3 = 68, 
    TalRashasTomb4 = 69, 
    TalRashasTomb5 = 70, 
    TalRashasTomb6 = 71, 
    TalRashasTomb7 = 72, 
    TamoeHighland = 7, 
    TheAncientsWay = 118, 
    ThePandemoniumFortress = 103, 
    TheWorldstoneChamber = 132, 
    TheWorldStoneKeepLevel1 = 128, 
    TheWorldStoneKeepLevel2 = 129, 
    TheWorldStoneKeepLevel3 = 130, 
    ThroneOfDestruction = 131, 
    TowerCellarLevel1 = 21, 
    TowerCellarLevel2 = 22, 
    TowerCellarLevel3 = 23, 
    TowerCellarLevel4 = 24, 
    TowerCellarLevel5 = 25, 
    Travincal = 83, 
    Tristram = 38, 
    UberTristram = 136, 
    UndergroundPassageLevel1 = 10, 
    UndergroundPassageLevel2 = 14, 
    UpperKurast = 81, 
    ValleyOfSnakes = 45, 
    MapsAncientTemple = 137, 
    MapsDesecratedTemple = 138, 
    MapsFrigidPlateau = 139, 
    MapsInfernalTrial = 140, 
    MapsRuinedCitadel = 141 
};

static char* lookup_level_name(int levelCode){
    switch (levelCode){
        case AreaLevel::Abaddon: return "Abaddon";
        case AreaLevel::AncientTunnels: return "AncientTunnels";
        case AreaLevel::ArcaneSanctuary: return "ArcaneSanctuary";
        case AreaLevel::ArreatPlateau: return "ArreatPlateau";
        case AreaLevel::ArreatSummit: return "ArreatSummit";
        case AreaLevel::Barracks: return "Barracks";
        case AreaLevel::BlackMarsh: return "BlackMarsh";
        case AreaLevel::BloodMoor: return "BloodMoor";
        case AreaLevel::BloodyFoothills: return "BloodyFoothills";
        case AreaLevel::BurialGrounds: return "BurialGrounds";
        case AreaLevel::CanyonOfTheMagi: return "CanyonOfTheMagi";
        case AreaLevel::CatacombsLevel1: return "CatacombsLevel1";
        case AreaLevel::CatacombsLevel2: return "CatacombsLevel2";
        case AreaLevel::CatacombsLevel3: return "CatacombsLevel3";
        case AreaLevel::CatacombsLevel4: return "CatacombsLevel4";
        case AreaLevel::Cathedral: return "Cathedral";
        case AreaLevel::CaveLevel1: return "CaveLevel1";
        case AreaLevel::CaveLevel2: return "CaveLevel2";
        case AreaLevel::ChaosSanctuary: return "ChaosSanctuary";
        case AreaLevel::CityOfTheDamned: return "CityOfTheDamned";
        case AreaLevel::ClawViperTempleLevel1: return "ClawViperTempleLevel1";
        case AreaLevel::ClawViperTempleLevel2: return "ClawViperTempleLevel2";
        case AreaLevel::ColdPlains: return "ColdPlains";
        case AreaLevel::Crypt: return "Crypt";
        case AreaLevel::CrystallinePassage: return "CrystallinePassage";
        case AreaLevel::DarkWood: return "DarkWood";
        case AreaLevel::DenOfEvil: return "DenOfEvil";
        case AreaLevel::DisusedFane: return "DisusedFane";
        case AreaLevel::DisusedReliquary: return "DisusedReliquary";
        case AreaLevel::DrifterCavern: return "DrifterCavern";
        case AreaLevel::DryHills: return "DryHills";
        case AreaLevel::DuranceOfHateLevel1: return "DuranceOfHateLevel1";
        case AreaLevel::DuranceOfHateLevel2: return "DuranceOfHateLevel2";
        case AreaLevel::DuranceOfHateLevel3: return "DuranceOfHateLevel3";
        case AreaLevel::DurielsLair: return "DurielsLair";
        case AreaLevel::FarOasis: return "FarOasis";
        case AreaLevel::FlayerDungeonLevel1: return "FlayerDungeonLevel1";
        case AreaLevel::FlayerDungeonLevel2: return "FlayerDungeonLevel2";
        case AreaLevel::FlayerDungeonLevel3: return "FlayerDungeonLevel3";
        case AreaLevel::FlayerJungle: return "FlayerJungle";
        case AreaLevel::ForgottenReliquary: return "ForgottenReliquary";
        case AreaLevel::ForgottenSands: return "ForgottenSands";
        case AreaLevel::ForgottenTemple: return "ForgottenTemple";
        case AreaLevel::ForgottenTower: return "ForgottenTower";
        case AreaLevel::FrigidHighlands: return "FrigidHighlands";
        case AreaLevel::FrozenRiver: return "FrozenRiver";
        case AreaLevel::FrozenTundra: return "FrozenTundra";
        case AreaLevel::FurnaceOfPain: return "FurnaceOfPain";
        case AreaLevel::GlacialTrail: return "GlacialTrail";
        case AreaLevel::GreatMarsh: return "GreatMarsh";
        case AreaLevel::HallsOfAnguish: return "HallsOfAnguish";
        case AreaLevel::HallsOfPain: return "HallsOfPain";
        case AreaLevel::HallsOfTheDeadLevel1: return "HallsOfTheDeadLevel1";
        case AreaLevel::HallsOfTheDeadLevel2: return "HallsOfTheDeadLevel2";
        case AreaLevel::HallsOfTheDeadLevel3: return "HallsOfTheDeadLevel3";
        case AreaLevel::HallsOfVaught: return "HallsOfVaught";
        case AreaLevel::HaremLevel1: return "HaremLevel1";
        case AreaLevel::HaremLevel2: return "HaremLevel2";
        case AreaLevel::Harrogath: return "Harrogath";
        case AreaLevel::HoleLevel1: return "HoleLevel1";
        case AreaLevel::HoleLevel2: return "HoleLevel2";
        case AreaLevel::IcyCellar: return "IcyCellar";
        case AreaLevel::InfernalPit: return "InfernalPit";
        case AreaLevel::InnerCloister: return "InnerCloister";
        case AreaLevel::JailLevel1: return "JailLevel1";
        case AreaLevel::JailLevel2: return "JailLevel2";
        case AreaLevel::JailLevel3: return "JailLevel3";
        case AreaLevel::KurastBazaar: return "KurastBazaar";
        case AreaLevel::KurastCauseway: return "KurastCauseway";
        case AreaLevel::KurastDocks: return "KurastDocks";
        case AreaLevel::LostCity: return "LostCity";
        case AreaLevel::LowerKurast: return "LowerKurast";
        case AreaLevel::LutGholein: return "LutGholein";
        case AreaLevel::MaggotLairLevel1: return "MaggotLairLevel1";
        case AreaLevel::MaggotLairLevel2: return "MaggotLairLevel2";
        case AreaLevel::MaggotLairLevel3: return "MaggotLairLevel3";
        case AreaLevel::MatronsDen: return "MatronsDen";
        case AreaLevel::Mausoleum: return "Mausoleum";
        case AreaLevel::MonasteryGate: return "MonasteryGate";
        case AreaLevel::MooMooFarm: return "MooMooFarm";
        case AreaLevel::NihlathaksTemple: return "NihlathaksTemple";
        case AreaLevel::None: return "None";
        case AreaLevel::OuterCloister: return "OuterCloister";
        case AreaLevel::OuterSteppes: return "OuterSteppes";
        case AreaLevel::PalaceCellarLevel1: return "PalaceCellarLevel1";
        case AreaLevel::PalaceCellarLevel2: return "PalaceCellarLevel2";
        case AreaLevel::PalaceCellarLevel3: return "PalaceCellarLevel3";
        case AreaLevel::PitLevel1: return "PitLevel1";
        case AreaLevel::PitLevel2: return "PitLevel2";
        case AreaLevel::PitOfAcheron: return "PitOfAcheron";
        case AreaLevel::PlainsOfDespair: return "PlainsOfDespair";
        case AreaLevel::RiverOfFlame: return "RiverOfFlame";
        case AreaLevel::RockyWaste: return "RockyWaste";
        case AreaLevel::RogueEncampment: return "RogueEncampment";
        case AreaLevel::RuinedFane: return "RuinedFane";
        case AreaLevel::RuinedTemple: return "RuinedTemple";
        case AreaLevel::SewersLevel1Act2: return "SewersLevel1Act2";
        case AreaLevel::SewersLevel1Act3: return "SewersLevel1Act3";
        case AreaLevel::SewersLevel2Act2: return "SewersLevel2Act2";
        case AreaLevel::SewersLevel2Act3: return "SewersLevel2Act3";
        case AreaLevel::SewersLevel3Act2: return "SewersLevel3Act2";
        case AreaLevel::SpiderCave: return "SpiderCave";
        case AreaLevel::SpiderCavern: return "SpiderCavern";
        case AreaLevel::SpiderForest: return "SpiderForest";
        case AreaLevel::StonyField: return "StonyField";
        case AreaLevel::StonyTombLevel1: return "StonyTombLevel1";
        case AreaLevel::StonyTombLevel2: return "StonyTombLevel2";
        case AreaLevel::SwampyPitLevel1: return "SwampyPitLevel1";
        case AreaLevel::SwampyPitLevel2: return "SwampyPitLevel2";
        case AreaLevel::SwampyPitLevel3: return "SwampyPitLevel3";
        case AreaLevel::TalRashasTomb1: return "TalRashasTomb1";
        case AreaLevel::TalRashasTomb2: return "TalRashasTomb2";
        case AreaLevel::TalRashasTomb3: return "TalRashasTomb3";
        case AreaLevel::TalRashasTomb4: return "TalRashasTomb4";
        case AreaLevel::TalRashasTomb5: return "TalRashasTomb5";
        case AreaLevel::TalRashasTomb6: return "TalRashasTomb6";
        case AreaLevel::TalRashasTomb7: return "TalRashasTomb7";
        case AreaLevel::TamoeHighland: return "TamoeHighland";
        case AreaLevel::TheAncientsWay: return "TheAncientsWay";
        case AreaLevel::ThePandemoniumFortress: return "ThePandemoniumFortress";
        case AreaLevel::TheWorldstoneChamber: return "TheWorldstoneChamber";
        case AreaLevel::TheWorldStoneKeepLevel1: return "TheWorldStoneKeepLevel1";
        case AreaLevel::TheWorldStoneKeepLevel2: return "TheWorldStoneKeepLevel2";
        case AreaLevel::TheWorldStoneKeepLevel3: return "TheWorldStoneKeepLevel3";
        case AreaLevel::ThroneOfDestruction: return "ThroneOfDestruction";
        case AreaLevel::TowerCellarLevel1: return "TowerCellarLevel1";
        case AreaLevel::TowerCellarLevel2: return "TowerCellarLevel2";
        case AreaLevel::TowerCellarLevel3: return "TowerCellarLevel3";
        case AreaLevel::TowerCellarLevel4: return "TowerCellarLevel4";
        case AreaLevel::TowerCellarLevel5: return "TowerCellarLevel5";
        case AreaLevel::Travincal: return "Travincal";
        case AreaLevel::Tristram: return "Tristram";
        case AreaLevel::UberTristram: return "UberTristram";
        case AreaLevel::UndergroundPassageLevel1: return "UndergroundPassageLevel1";
        case AreaLevel::UndergroundPassageLevel2: return "UndergroundPassageLevel2";
        case AreaLevel::UpperKurast: return "UpperKurast";
        case AreaLevel::ValleyOfSnakes: return "ValleyOfSnakes";
        case AreaLevel::MapsAncientTemple: return "MapsAncientTemple";
        case AreaLevel::MapsDesecratedTemple: return "MapsDesecratedTemple";
        case AreaLevel::MapsFrigidPlateau: return "MapsFrigidPlateau";
        case AreaLevel::MapsInfernalTrial: return "MapsInfernalTrial";
        case AreaLevel::MapsRuinedCitadel: return "MapsRuinedCitadel";
        default:
            return "Unknown";
    }

}





#endif