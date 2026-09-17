#include "Includes.h"
#include "FTools/Font.h"
#include "FTools/Icon.h"
#include "FTools/ImguiPP.h"
#include "FTools/Iconcpp.h"
#include "imgui/imgui_additional.h"
#include "Helper/obfuscate.h"
#include "Helper/fake_dlfcn.h"
#include "Helper/plthook.h"
#include "Helper/StrEnc.h"
#include "CN.h"
#include "Helper/json.hpp"
using json = nlohmann::json;

#include "Tools.h"
#include "SDK.hpp"
using namespace SDK;

#include "Helper/Items.h"
#include "Helper/Vehicle.h"
#include "Helper/LootBox.h"
#include "Helper/Vector2.hpp"
#include "Helper/Vector3.hpp"
#include "KittyMemory/MemoryPatch.h"
#include "FoxCheats/ScanEngine.hpp"
//==========================?ALTAB_VIP?========================
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;

json items_data;
time_t rng = 0;
std::string g_Token, g_Auth;

char extra[30];

bool bValid = false;
bool initImGui = false;
ImFont* ItSMKOP = nullptr;
#define SLEEP_TIME 1000LL / 120LL
//@ALTAB_VIP
static std::string EXP = " ";
static std::string SLOT = " ";
static std::string modname = " ";
static std::string mod_status = " ";

bool blockspect;
bool hit;
bool sky;
bool LOBBY = true;
bool GGBYPASS = false;
bool Feu;
bool Bypass;
bool Crash;
bool LOGO1;
bool LAND = true;
bool DESERT;
bool ISLAND;
bool Report;
bool LOGO = true;
bool IPAD;
bool PAPA;
bool FLASH;

bool RajputBY = false;
bool MEMBYPASS = false,
//@ALTAB_VIP
mkmk = false,
mkmkk = false,
mkmkkk = false,
UrlLink = false,
mkmkkkk = false,
mkmkkkkk = false,
mkmkkkkkk = false,
mkmkkkkkkk = false,
mkmkkkkkkkk = false,
mkmkkkkkkkkk = false,
mkmkkkkkkkkkk = false,
mkmkkkkkkkkkkk = false,
WIDEVIEW = false,
Desertmode = false,
blackskyrobin = false,
hit1 = false,
hit2 = false,
FIXSTUCK = false,
flashrobin = false,
robinnnnop = false,
byrobinOPPPP = false,
flashbyrobinXD = false,
mkmkkkkkkkkkkkk = false,
mkmkkkkkkkkkkkkk = false,
mkmkkkkkkkkkkkkkk = false,
mkmkkkkkkkkkkkkkkk = false,
mkmkkkkkkkkkkkkkkkk = false,
mkmkkkkkkkkkkkkkkkkk = false,
xdop1112 = false,
skyrobin123 = false,
mkmkkkkkkkkkkkkkkkkkk = false,
mkmkkkkkkkkkkkkkkkkkkk = false,
mkmkkkkkkkkkkkkkkkkkkkk = false,
mkmkkkkkkkkkkkkkkkkkkkkk = false,
mkmkkkkkkkkkkkkkkkkkkkkkk = false,
isHit = false,
crossop = false,
robinnnnop1 = false,
slomof = false,
restartf = false,
ping = false,
flashoff = false,
flashofff = false,
wallhack = false,
yellow = false,
rainbow = false,
skyflll = false,
redbody = false,
pullback = false,
Kill = false,
headshot = false,
Hitx = false,
SKIN1 = false,
SKIN2 = false,
SKIN3 = false,
SKIN4 = false,
SKIN5 = false,
SKIN6 = false,
color = false,
Longhand = false,
aimbott = false,
norecoil = false,
srcxdop = true,
noshake = false,
movingesp = false,
xeffect = false,
botlobby = false,
redfog = false,
pinkfog = false,
nofogrobin = false,
yellofog = false,
ipad = false,
realipad = false,
dasertmap = false,
longjump = false,
blacksky = false,
yellobullet = false,
pinkmap = false,
carfly = false,
knockspeed = false,
flashspeed = false,
head = false,
headop = false,
Stuck = false,
stuck1 = false,
firewall = false,
dmgfix = false,
akm = false,
m4 = false,
Jonathan = false,
logoooooo = false,
mummy = false,
BPS = false, BPS2 = false, antiCrash = false, bypassmk = false, Hookue4 = false, Hookgcloud = false, Hooktersafe = false, Hooktprt = false, Hooktdmaster = false, Less = false, Small = false, Bypassv2 = false, flash = false, CarJump = false, AimLock = false, HIGHView = false, flashv2 = false, Blackbody = false, Carspeed = false, nofog = false, Xhit = false, Shoot = false, Aim = false, Magicbullet = false, NightMode = false, featureHookToggle = false;


bool MK = false;
bool hack = false;
//@ALTAB_VIP
enum EAimType {
Distance = 0,
Croshhair = 1
};

enum EAimTarget {
Head = 0,
Chest = 1
};

enum EAimTrigger {
None = 0,
Shooting = 1,
Scoping = 2,
Both = 3,
Any = 4
};

std::map<int, bool> Items;
struct sConfig 
{
bool FullAmmo;
struct sESPMenu 
{
bool Active;
bool Line;
bool Box;
bool Skeleton;
bool Health;
bool Name;
bool Distance;
bool Alert;
bool Radar;
float RadarX;
float RadarY;
bool Vehicle;
bool LootBox;
bool EnemyWeapon;
bool Grenade;
bool GameInfo;
bool OnScreen;
};
sESPMenu ESPMenu;

struct sAimMenu
{
bool Enable;
bool AutoFire;
float FOVSize;
EAimType Type;
EAimTarget Target;
EAimTrigger Trigger;
bool IgnoreKnocked;
bool IgnoreBot;
bool VisCheck;
};
sAimMenu CalcShootRot{0};
sAimMenu SilentAim{0};
sAimMenu AimMenu{0};
sAimMenu AimBot{0};

struct sHighRisk 
{
bool Recoil;
bool Crosshair;
bool Shake;
bool HitEffect;
bool Instant;
bool Flash;
bool FlashV1;
bool Fixstuck;
bool Parachute;
bool IPadView;
bool WideView;
bool NoFog;
bool KillMsg;
bool SpectatorBlock;
};
sHighRisk HighRisk{0};

struct sMemoryTools
{
bool XHitEffect;
bool FastLanding;
bool Fixstuck;
bool xdop1112;
bool skyrobin123;
bool color;
bool headshot;
bool Hitx;
bool SKIN1;
bool SKIN2;
bool SKIN3;
bool SKIN4;
bool SKIN5;
bool SKIN6;
bool head;
bool mkmkkkkkkkkkkkkkkkkkkkkkk;
bool Kill;
bool FIXSTUCK;
};
sMemoryTools MemoryTools;

struct sKittyMemory
{
bool Features;
bool Flash;
bool Ipad;
bool Iceland;
};
sKittyMemory KittyMemory;

struct sColorsESP {
float *WindowBG;
float *FrameBG;
float *FCircle;
float *Color;
float * PVLine;
float * PVILine;
float * BVLine;
float * BVILine;
float * PVBox;
float * PVIBox;
float * BVBox;
float * BVIBox;
float * PVSkeleton;
float * PVISkeleton;
float * BVSkeleton;
float * BVISkeleton;
float * TeamID;
float * Name;
float * Distance;
float * Vehicle;
float * Items;
};
sColorsESP ColorsESP{0};
};
sConfig Config{0};

struct sPatches { 
MemoryPatch
hack,
hack1,
hack2,
Prone,
Desert,
Flash,
hack3,
DAAKU,
robinop11,
crossop,
FASTROBIN,
firewall12,
firewall13,
firewall14,
firewall15,
firewall7,
firewall8,
byrobin1,
byrobin2,
byrobin3,
byrobin4,
byrobin11,
byrobin22,
byrobin33,
byrobin44,
byrobin55,
byrobin66,
byrobin77,
firewall16,
firewall17,
By48,
firewall18,
firewall19,
FLASH,
FLASH1,

botlobby,
botlobby1,
botlobby2,
botlobby3,
srcxdop,
botlobby4,
botlobby5,
botlobby6,
FLASH2,
firewall20,
robinOPbypass1,
robinOPbypass2,
robinOPbypass3,
robinOPbypass4,
robinOPbypass5,
robinOPbypass6,
robinOPbypass7,
robinOPbypass8,
robinOPbypass9,
robinOPbypass10,
robinOPbypass11,
robinOPbypass12,
robinOPbypass13,
robinOPbypass14,
robinOPbypass15,
robinOPbypass16,
robinOPbypass17,
robinOPbypass18,
robinOPbypass19,
robinOPbypass20,
robinOPbypass21,
robinOPbypass22,
robinOPbypass23,
robinOPbypass24,
robinOPbypass25,
robinOPbypass26,
robinOPbypass27,
robinOPbypass28,
robinopsdk1,
robinopsdk2,
robinopsdk3,
robinopsdk4,
robinopsdk5,
robinopsdk6,
robinopsdk7,
robinopsdk8,
robinopsdk9,
robinopsdk10,
robinopsdk11,
robinopsdk12,
robinopsdk13,
robinopsdk14,
robinopsdk15,
robinOPbypass29,
robinOPbypass30,
robinOPbypass31,
robinOPbypass32,
robinOPbypass33,
robinOPbypass34,
robinOPbypass35,
robinOPbypass36,
robinOPbypass37,
robinOPbypass38,
robinOPbypass39,
robinOPbypass40,
robinOPbypass41,
robinOPbypass42,
robinOPbypass43,
robinOPbypass44,
lslandreportx4,
lslandreportx5,
lslandreportx6,
lslandreportx7,
robinshakyaOP1,
robinshakyaOP2,
robinshakyaOP3,
robinshakyaOP4,
robinshakyaOP5,
robinshakyaOP6,
robinshakyaOP7,
robinshakyaOP8,
robinshakyaOP9,
robinshakyaOP10,
robinshakyaOP11,
robinshakyaOP12,
robinshakyaOP13,
robinshakyaOP14,
robinshakyaOP15,
robinshakyaOP16,
robinshakyaOP17,
robinshakyaOP18,
robinshakyaOP19,
robinshakyaOP20,
robinshakyaOP21,
robinshakyaOP22,
robinshakyaOP23,
robinshakyaOP24,
robinshakyaOP25,
robinshakyaOP26,
robinshakyaOP27,
robinshakyaOP28,
robinshakyaOP29,
robinshakyaOP30,
robinshakyaOP31,
robinshakyaOP32,
robinshakyaOP33,
robinshakyaOP34,
robinshakyaOP35,
robinshakyaOP36,
robinshakyaOP37,
robinshakyaOP38,
robinshakyaOP39,
robinshakyaOP40,
robinshakyaOP41,
robinshakyaOP42,
robinshakyaOP43,
robinshakyaOP44,
robinshakyaOP45,
robinshakyaOP46,
robinshakyaOP47,
robinshakyaOP48,
robinshakyaOP49,
robinshakyaOP50,
robinshakyaOP51,
robinshakyaOP52,
robinshakyaOP53,
robinshakyaOP54,
robinshakyaOP55,
lslandreport1,
lslandreport2,
lslandreport3,
lslandreport4,
lslandreport5,
lslandreport6,
lslandreport7,
lslandreport8,
lslandreportx1,
lslandreportx2,
lslandreportx3,
firewall21,
nofogrobin,
fire1,
fire2,
fire3,
fire4,
fire5,
fire6,
fire7,
fire8,
fire9,
fire10,
fire11,
fire12,
fire13,
fire14,
fire109,
fire15,
fire16,
fire17,
robinop1,
robinop9,
robinop10,
fire18,
fire19,
fire20,
fire21,
fire22,
fire23,
fire24,
fire25,
fire26,
fire27,
fire28,
fire29,
fire30,
fire31,
fire32,
fire33,
fire34,
fire35,
fire36,
fire37,
fire38,
fire39,
fire40,
fire41,
fire42,
fire43,
fire44,
fire45,
fire46,
fire47,
fire48,
fire49,
fire50,
fire51,
fire52,
fire53,
fire54,
fire55,
fire56,
fire57,
fire58,
fire59,
fire60,
fire61,
fire62,
fire63,
fire64,
fire65,
fire66,
fire67,
fire68,
fire69,
fire70,
fire71,
fire72,
fire73,
fire74,
fire75,
fire76,
fire77,
fire78,
fire79,
fire80,
fire81,
fire82,
fire83,
fire84,
fire85,
fire86,
fire87,
fire88,
fire89,
fire90,
fire91,
fire92,
fire93,
fire94 ,
fire95,
fire96,
fire97 ,
fire98,
fire99,
fire100,
fire101,
fire102,
robinbypassxd1,
robinbypassxd2,
robinbypassxd3,
robinbypassxd4,
robinbypassxd5,
robinbypassxd6,
robinbypassxd7,
robinbypassxd8,
fire103,
fire104,
fire105,
fire106,
fire107,
fire108,
bypass51,norecoil, movingesp, movingesp1, movingesp2, movingesp3, xeffect, xeffect1, redfog, redfog1, pinkfog, yellofog, ipad, realipad, dasertmap, longjump, blacksky, yellobullet, pinkmap, carfly, knockspeed, flashspeed, flashspeed1, hit1, hit2,
flash, flash2, flash3, nofog, flashv2, Fixstuck, CarJump, Less, Small, AimLock, Blackbody, noshake, noshake1, noshake2, noshake3, noshake4, noshake5, Aim1, Aim2, Aim3, aimbott, aimbott1, aimbott2, Magicbullet1, Magicbullet2, NightMode, Carspeed, // aimbot300M+,
HIGHView, Xhit, Shoot, Hookue4, Hooktersafe, Hookgcloud, Hooktprt, Hooktdmaster;
};
sPatches Patches;

#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};
//@ALTAB_VIP
uintptr_t UE4 = 0;
uintptr_t ANOGS = 0;
uintptr_t ANORT = 0;
android_app *g_App = 0;

ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;

#define GWorld_Offset 0x70BD278
#define GNames_Offset 0x2725EAC
#define GUObject_Offset 0x6FB4B10
#define GNativeApp_Offset 0x6DDE9C8
#define Actors_Offset 0xA0

struct sRegion {
uintptr_t start, end;
};

std::vector<sRegion> trapRegions;

bool isObjectInvalid(UObject *obj) {
if (!Tools::IsPtrValid(obj)) {
return true;
}

if (!Tools::IsPtrValid(obj->ClassPrivate)) {
return true;
}

if (obj->InternalIndex <= 0) {
return true;
}

if (obj->NamePrivate.ComparisonIndex <= 0) {
return true;
}

if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
return true;
}

if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
return true;
}

return false;
}

TNameEntryArray *GetGNames(){
return ((TNameEntryArray *(*)()) (UE4 + GNames_Offset))();
}

TArray<AActor *> getActors() 
{
auto World = *(UWorld **)(UE4 + GWorld_Offset);
if (World) {
auto PersistentLevel = World->PersistentLevel;
if (PersistentLevel) {
auto GetActorArray = ((uintptr_t) PersistentLevel + Actors_Offset);
if (GetActorArray) {
return *(TArray<AActor *> *) ((uintptr_t) GetActorArray);
}
}
}
return TArray<AActor *>();
}
//@ALTAB_VIP
std::string getObjectPath(UObject *Object) {
std::string s;
for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
if (!s.empty())
s += ".";
s += super->NamePrivate.GetName();
}
return s;
}

const char *getStringName(UObject *Object) {
std::string s;
for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
if (!s.empty())
s += ".";
s += super->GetName();
}
return s.c_str();
}

bool WriteAddr(void *addr, void *buffer, size_t length) {
unsigned long page_size = sysconf(_SC_PAGESIZE);
unsigned long size = page_size * sizeof(uintptr_t);
return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}

template<typename T>
void Write(uintptr_t addr, T value) {
WriteAddr((void *) addr, &value, sizeof(T));
}

int Write_FLOAT(long int addr, float value){
Tools::WriteAddr((void*)(addr), (void*)&value , 4);
return 0;
}

int Write_DWORD(long int addr, int value){
Tools::WriteAddr((void*)(addr),(void*)&value ,sizeof(value));
return 0;
}

int Write_QWORD(long int addr, int64_t value){
Tools::WriteAddr((void*)(addr),(void*)&value ,sizeof(value));
return 0;
}
//@ALTAB_VIP
int32_t ToColor(float *col) {
return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}

FRotator ToRotator(FVector local, FVector target) {
FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);
float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
FRotator newViewAngle = {0};
newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
newViewAngle.Roll = (float) 0.f;
if (rotation.X >= 0.f)
newViewAngle.Yaw += 180.0f;
return newViewAngle;
}

class FPSCounter {
protected:
    unsigned int m_fps;
    unsigned int m_fpscount;
    long m_fpsinterval;

public:
    FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0) {
    }

    void update() {
        m_fpscount++;

        if (m_fpsinterval < time(0)) {
            m_fps = m_fpscount;

            m_fpscount = 0;
            m_fpsinterval = time(0) + 1;
        }
    }

    unsigned int get() const {
        return m_fps;
    }
};

FPSCounter fps;


uint32_t Colors[] = {0x53BB0C, 0x530826, 0x0FC3F4, 0xDC2855, 0x0A31DE, 0xBAA7FD, 0xCEDB3F, 0x286A45, 0x58F014, 0x45CAE6, 0x773702, 0xB0CEF0, 0x3C5F51, 0x453CD7, 0x364024, 0x439997, 0x4CB612, 0xC6B564, 0x17F250, 0xE41BC0, 0xAF8E27, 0x8E382E, 0x47A101, 0x9DAC33, 0x66F4CF, 0x59A9F0, 0x798D1A, 0x2EBB59, 0xBF66C3, 0x4BD8FB, 0xBBFA54, 0x6B9881, 0x144967, 0xBAA3AE, 0xE80B9D, 0x7BA552, 0x96A456, 0x17D7B4, 0x130C39, 0x3C06A8, 0x62737E, 0xA87E89, 0xB6D3E4, 0x66B77D, 0x66E304, 0x1B80E1, 0x7A06BC, 0xBFFB1B, 0x618506, 0x7E4D34};


long Random1(int index) {
srand(index);

int a = 255;
int r = ((Colors[rand() % sizeof(Colors)] & 0xFF0000) >> 17);
int g = ((Colors[rand() % sizeof(Colors)] & 0x00FF00) >> 9);
int b = (Colors[rand() % sizeof(Colors)] & 0x0000FF);

return IM_COL32(r, g, b, a);
}
long Random2(int index) {
srand(index);

int a = 130;
int r = ((Colors[rand() % sizeof(Colors)] & 0xFF0000) >> 17);
int g = ((Colors[rand() % sizeof(Colors)] & 0x00FF00) >> 9);
int b = (Colors[rand() % sizeof(Colors)] & 0x0000FF);

return IM_COL32(r, g, b, a);
}

bool isInsideFOV(int x, int y) {
if (!Config.AimMenu.FOVSize)
return true;

int circle_x = glWidth / 2;
int circle_y = glHeight / 2;
int rad = Config.AimMenu.FOVSize;
return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}

#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)
//=============�????=====BulletTrack360°=============//
auto GetTargetByDistance() {
ASTExtraPlayerCharacter *result = 0;
float max = std::numeric_limits<float>::infinity();

auto localPlayer = g_LocalPlayer;
auto localController = g_LocalController;
auto Actors = getActors();

FVector ViewPosY{0, 0, 0};
if (localPlayer) { 
 ViewPosY = localPlayer->GetBonePos("Head");
 ViewPosY.Z += 10.f;
}


//@ALTAB_VIP



 if (localPlayer) {
for (int i = 0; i < Actors.Num(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;

if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
auto Player = (ASTExtraPlayerCharacter *) Actor;

if (Player->PlayerKey == localPlayer->PlayerKey)
continue;

if (Player->TeamID == localPlayer->TeamID)
continue;

if (Player->bDead)
continue;

if (Config.AimMenu.IgnoreBot) {
if (Player->bIsAI)
continue;
}

if (Config.ESPMenu.Line) {
if (!localController->LineOfSightTo(Player, ViewPosY, true))
continue;
}

if (Config.AimMenu.IgnoreKnocked) {
if (Player->Health == 0.0f)
continue;
}

float dist = g_LocalPlayer->GetDistanceTo(Player);
if (dist < max) {
max = dist;
result = Player;
}
}
}
}
return result;
}

auto GetTargetByCrossDist() {
ASTExtraPlayerCharacter *result = 0;
float max = std::numeric_limits<float>::infinity();

auto localPlayer = g_LocalPlayer;
auto localController = g_LocalController;
auto Actors = getActors();

FVector ViewPosY{0, 0, 0};
if (localPlayer) { 
 ViewPosY = localPlayer->GetBonePos("Head");
 ViewPosY.Z += 10.f;
}

if (localPlayer) {
for (int i = 0; i < Actors.Num(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;

if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
auto Player = (ASTExtraPlayerCharacter *) Actor;

if (Player->PlayerKey == localPlayer->PlayerKey)
continue;

if (Player->TeamID == localPlayer->TeamID)
continue;

if (Player->bDead)
continue;

if (Config.AimMenu.IgnoreBot) {
if (Player->bIsAI)
continue;
}

if (Config.ESPMenu.Line) {
if (!localController->LineOfSightTo(Player, ViewPosY, true))
continue;
}

if (Config.AimMenu.IgnoreKnocked) {
if (Player->Health == 0.0f)
continue;
}

auto Root = Player->GetBonePos("Root");
auto Head = Player->GetBonePos("Head");

FVector2D RootSc, HeadSc;
if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
float height = abs(HeadSc.Y - RootSc.Y);
float width = height * 0.65f;

FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2),
 0};
if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
(middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
FVector2D v2Middle = FVector2D((float) (glWidth / 2),
 (float) (glHeight / 2));
FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

if (isInsideFOV((int) middlePoint.X, (int) middlePoint.Y)) {
float dist = FVector2D::Distance(v2Middle, v2Loc);

if (dist < max) {
max = dist;
result = Player;
}
}
}
}
}
}
}
return result;
}
//@ALTAB_VIP
ASTExtraPlayerCharacter *GetTargetForAim() {
if (Config.AimMenu.Type == EAimType::Distance) {
return GetTargetByDistance();
} else if (Config.AimMenu.Type == EAimType::Croshhair) {
return GetTargetByCrossDist();
}
return 0;
}

bool qwcifqvs86y8fify = false;

void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = 0;
void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {

if (qwcifqvs86y8fify) {
qwcifqvs86y8fify = false;
g_LocalController->bIsPressingFireBtn = false;
thiz->OwnerShootWeapon->StopFire(EFreshWeaponStateType::FreshWeaponStateType_Idle);
}

if (Config.CalcShootRot.Enable) {
ASTExtraPlayerCharacter *Target = GetTargetForAim();
if (Target) {
bool triggerOk = false;
if (Config.AimMenu.Trigger != EAimTrigger::None) {
if (Config.AimMenu.Trigger == EAimTrigger::Shooting) {
triggerOk = g_LocalPlayer->bIsWeaponFiring;
} else if (Config.AimMenu.Trigger == EAimTrigger::Scoping) {
triggerOk = g_LocalPlayer->bIsGunADS;
} else if (Config.AimMenu.Trigger == EAimTrigger::Both) {
triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
} else if (Config.AimMenu.Trigger == EAimTrigger::Any) {
triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
}
} else triggerOk = true;
if (triggerOk) {
FVector targetAimPos = Target->GetBonePos("Head");
if (Config.AimMenu.Target == EAimTarget::Chest) {
targetAimPos.Z -= 25.0f;
}


//@ALTAB_VIP

UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;
if (ShootWeaponEntityComponent) {
ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
if (CurrentVehicle) {
FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

float dist = g_LocalPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
} else {
FVector Velocity = Target->GetVelocity();

float dist = g_LocalPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
}
FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, start);
FRotator sex = UKismetMathLibrary::Conv_VectorToRotator(fDir);
rot = sex;
}
}
}
}
return orig_shoot_event(thiz, start, rot, weapon, unk1);
}

FRotator (*oCalcShootRot)(USTExtraShootWeaponComponent *pObj);
FRotator CalcShootRot(USTExtraShootWeaponComponent *pObj) {
if (Config.CalcShootRot.Enable) {
ASTExtraPlayerCharacter *Target = GetTargetForAim();
if (Target) {
bool triggerOk = false;
if (Config.AimMenu.Trigger != EAimTrigger::None) {
if (Config.AimMenu.Trigger == EAimTrigger::Shooting) {
triggerOk = g_LocalPlayer->bIsWeaponFiring;
} else if (Config.AimMenu.Trigger == EAimTrigger::Scoping) {
triggerOk = g_LocalPlayer->bIsGunADS;
} else if (Config.AimMenu.Trigger == EAimTrigger::Both) {
triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
} else if (Config.AimMenu.Trigger == EAimTrigger::Any) {
triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
}
} else triggerOk = true;
if (triggerOk) {
FVector targetAimPos = Target->GetBonePos("Head");
if (Config.AimMenu.Target == EAimTarget::Chest) {
targetAimPos.Z -= 25.0f;
}
UShootWeaponEntity *ShootWeaponEntityComponent = pObj->ShootWeaponEntityComponent;
if (ShootWeaponEntityComponent) {
ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
if (CurrentVehicle) {
FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

float dist = g_LocalPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;

targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
} else {
FVector Velocity = Target->GetVelocity();

float dist = g_LocalPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;

targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
}
FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
return UKismetMathLibrary::Conv_VectorToRotator(fDir);
}
}
}
}
return oCalcShootRot(pObj);
}
//@ALTAB_VIP
#define IM_PI 3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))

void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
if (forward.X == 0.f && forward.Y == 0.f) {
angles.X = forward.Z > 0.f ? -90.f : 90.f;
angles.Y = 0.f;
} else {
angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
}
angles.Z = 0.f;
}
void RotateTriangle(std::array<Vector3, 3> & points, float rotation) {
const auto points_center = (points.at(0) + points.at(1) + points.at(2)) / 3;
for (auto & point : points) {
point = point - points_center;
const auto temp_x = point.X;
const auto temp_y = point.Y;
const auto theta = DEG2RAD(rotation);
const auto c = cosf(theta);
const auto s = sinf(theta);
point.X = temp_x * c - temp_y * s;
point.Y = temp_x * s + temp_y * c;
point = point + points_center;
}
}

FVector WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool & outbuff) {
bool flag = false;
double num = (double)Yaw;
double num2 = num * 0.017453292519943295;
float num3 = (float)std::cosf(num2);
float num4 = (float)std::sinf(num2);
float num5 = Origin.X - LocalOrigin.X;
float num6 = Origin.Y - LocalOrigin.Y;
FVector Xector;
Xector.X = (num6 * num3 - num5 * num4) / 150.f;
Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
FVector Xector2;
Xector2.X = Xector.X + PosX + Size.X / 2.f;
Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
bool flag2 = Xector2.X > PosX + Size.X;
if (flag2) {
Xector2.X = PosX + Size.X;
} else {
bool flag3 = Xector2.X < PosX;
if (flag3) {
Xector2.X = PosX;
}
}
bool flag4 = Xector2.Y > PosY + Size.Y;
if (flag4) {
Xector2.Y = PosY + Size.Y;
} else {
bool flag5 = Xector2.Y < PosY;
if (flag5) {
Xector2.Y = PosY;
}
}
bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
if (flag6) {
flag = true;
}
outbuff = flag;
return Xector2;
}

FVector2D pushToScreenBorder(FVector2D Pos, FVector2D screen, int borders, int offset) {
int x = (int)Pos.X;
int y = (int)Pos.Y;
if ((borders & 1) == 1) {
y = 0 - offset;
}
if ((borders & 2) == 2) {
x = (int)screen.X + offset;
}
if ((borders & 4) == 4) {
y = (int)screen.Y + offset;
}
if ((borders & 8) == 8) {
x = 0 - offset;
}
return FVector2D(x, y);
}

int isOutsideSafezone(FVector2D pos, FVector2D screen) {
FVector2D mSafezoneTopLeft(screen.X * 0.04f, screen.Y * 0.04f);
FVector2D mSafezoneBottomRight(screen.X * 0.96f, screen.Y * 0.96f);
int result = 0;
if (pos.Y < mSafezoneTopLeft.Y) {
result |= 1;
}
if (pos.X > mSafezoneBottomRight.X) {
result |= 2;
}
if (pos.Y > mSafezoneBottomRight.Y) {
result |= 4;
}
if (pos.X < mSafezoneTopLeft.X) {
result |= 8;
}
return result;
}

void Box4Line(ImDrawList *draw, float thicc, int x, int y, int w, int h, int color) {
    int iw = w / 4;
    int ih = h / 4;
    // top
    draw->AddRect(ImVec2(x, y),ImVec2(x + iw, y), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y),ImVec2(x + w, y), color, thicc);
    draw->AddRect(ImVec2(x, y),ImVec2(x, y + ih), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y),ImVec2(x + w - 1, y + ih), color, thicc);;
    // bottom
    draw->AddRect(ImVec2(x, y + h),ImVec2(x + iw, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y + h),ImVec2(x + w, y + h), color, thicc);
    draw->AddRect(ImVec2(x, y + h - ih), ImVec2(x, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y + h - ih), ImVec2(x + w - 1, y + h), color, thicc);
}

void DrawBoxEnemy(ImDrawList *draw, ImVec2 X, ImVec2 Y, float thicc, int color) {
draw->AddLine({X.x, X.y}, {Y.x, Y.y}, color, thicc);
}

void DrawBoxEnemy2(ImDrawList *draw, ImVec2 X, ImVec2 Y, float thicc, float rounding, int color) {
draw->AddLine({X.x, X.y}, {Y.x, Y.y}, color, thicc);
}
//===================== ESP DRAW =====================//
void DrawESP(ImDrawList *draw)
{
draw->AddText(NULL, ((float) density / 14.0f),{(float) glWidth / 150 + glWidth / 14,580},IM_COL32(255, 0, 255, 255),
                          "");
draw->AddText(NULL, ((float) density / 14.0f),{(float) glWidth / 150 + glWidth / 14,610},IM_COL32(139, 0, 255, 255),
                        "");
draw->AddText(NULL, ((float) density / 14.0f),{(float) glWidth / 150 + glWidth / 14,640},IM_COL32(0, 0, 255, 255),
                       " ");

//@ALTAB_VIP

std::string sEXP = (OBFUSCATE(" "));
sEXP += EXP.c_str();
draw->AddText(NULL, ((float) density / 15.0f),{(float) glWidth / 150 + glWidth / 50,640},IM_COL32(000, 255, 000, 255),(sEXP.c_str()));


	if (robinnnnop) {
         draw->AddText({((float) density / 10.0f), 40}, IM_COL32(0, 255, 0, 255), "");
           }else{
draw->AddText({((float) density / 10.0f), 40}, IM_COL32(000, 255, 000, 255), "");
	}



	if (RajputBY) {
         draw->AddText(NULL, ((float) density / 10.0f),{(float) glWidth / 150 + glWidth / 40,410},IM_COL32(000, 255, 000, 255),(ICON_FA_STAR" "));
            }else{
    draw->AddText(NULL, ((float) density / 10.0f),{(float) glWidth / 150 + glWidth / 40,410},IM_COL32(255, 000, 000, 255),("  "));
	}
	
	if (LOGO) {
         draw->AddText(NULL, ((float) density / 12.0f),{(float) glWidth / 150 + glWidth / 40,320},IM_COL32(000, 255, 000, 255),(""));
            }else{
    draw->AddText(NULL, ((float) density / 12.0f),{(float) glWidth / 150 + glWidth / 40,320},IM_COL32(255, 000, 000, 255),(""));
	}
	
	if (LOBBY) {
         draw->AddText(NULL, ((float) density / 13.0f),{(float) glWidth / 150 + glWidth / 40,390},IM_COL32(000, 255, 000, 255),(""));
            }else{
    draw->AddText(NULL, ((float) density / 15.0f),{(float) glWidth / 150 + glWidth / 40,390},IM_COL32(255, 000, 000, 255),(""));
	}
	
std::string sFPS1 = ("  " ); 
	auto textSize = ImGui::CalcTextSize2(sFPS1.c_str(), 0, ((float) density / 15.0f));
	 draw->AddText(nullptr, ((float)density / 13.0f), ImVec2(glWidth / 2 - (textSize.x / 2), 670), IM_COL32(000, 255, 000, 255), sFPS1.c_str());


//@ALTAB_VIP

                             
if(flashbyrobinXD){
        Patches.FLASH.Modify();
        Patches.FLASH1.Modify();
         Patches.FLASH2.Modify();
        } else {
        Patches.FLASH.Restore();
        Patches.FLASH1.Restore();
        Patches.FLASH2.Restore();
        }
        
        
        
              if(WIDEVIEW){
        Patches.realipad.Modify();
        
        } else {
        Patches.realipad.Restore();
        
        }
        
        
        
              if(dasertmap){
        Patches.dasertmap.Modify();
        
        } else {
        Patches.dasertmap.Restore();
        
        }
        
        
                      if(hit1){
        Patches.hit1.Modify();
        
        } else {
        Patches.hit1.Restore();
        
        }
        
        if(hit2){
        Patches.hit2.Modify();
        
        } else {
        Patches.hit2.Restore();
        
        }
        
        if(blacksky){
        Patches.blacksky.Modify();
        
        } else {
        Patches.blacksky.Restore();
        
        }
        
        if(carfly){
        Patches.carfly.Modify();
        
        } else {
        Patches.carfly.Restore();
        
        }
        
        
        if(noshake){
         Patches.noshake.Modify();
        Patches.noshake1.Modify();
        
        } else {
         Patches.noshake.Restore();
        Patches.noshake1.Restore();
        
        }
        
        
      if(norecoil){
        Patches.norecoil.Modify();
        
        } else {
        Patches.norecoil.Restore();
        
        }
        
        
              if(nofogrobin){
        Patches.nofogrobin.Modify();
        
        } else {
        Patches.nofogrobin.Restore();
        
        }
        
        
                      if(robinnnnop){
Patches.robinopsdk1.Modify();
Patches.robinopsdk2.Modify();
Patches.robinopsdk3.Modify();
Patches.robinopsdk4.Modify();
Patches.robinopsdk5.Modify();
Patches.robinopsdk6.Modify();
Patches.robinopsdk7.Modify();
Patches.robinopsdk8.Modify();
Patches.robinopsdk9.Modify();
Patches.robinopsdk14.Modify();
Patches.robinopsdk15.Modify();
         
        } else {
    
        
        }
        
        
        
                              
        
        
        
        if (Config.ESPMenu.Line) {
Config.ESPMenu.Line = true;
robinnnnop = true;
}else{
Config.ESPMenu.Line = false;
}

        


if (Config.ESPMenu.Line){
int totalEnemies = 0, totalBots = 0;
ASTExtraPlayerCharacter *localPlayer = 0;
ASTExtraPlayerController *localController = 0;
auto Actors = getActors();

for (int i = 0; i < Actors.Num(); i++){
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerController::StaticClass())){
localController = (ASTExtraPlayerController *)Actor;
break;
}
}

if (localController){
for (int i = 0; i < Actors.Num(); i++){
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())){
if (((ASTExtraPlayerCharacter *)Actor)->PlayerKey == localController->PlayerKey){
localPlayer = (ASTExtraPlayerCharacter *)Actor;
break;
}
}
}

if (localPlayer){
if (Config.AimMenu.AutoFire){
if (GetTargetForAim()){
localController->bIsPressingFireBtn = true;
} else {
qwcifqvs86y8fify = true;
}
}

if (Config.HighRisk.Parachute){
UCharacterParachuteComponent *ParachuteComponent = localPlayer->ParachuteComponent;
if (ParachuteComponent) {
ParachuteComponent->CurrentFallSpeed = 9999.9f;
}
}

if (Config.FullAmmo){
   
        auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
            if (isObjectInvalid(Object))
                continue;

            if (Object->IsA(UShootWeaponEntity::StaticClass())) {
               auto playerChar = (UShootWeaponEntity *) Object;
               playerChar->bHasInfiniteClips = true;
               playerChar->bClipHasInfiniteBullets = true;
            }     
            if (Object->IsA(ASTExtraShootWeapon::StaticClass())) {
               auto playerChar = (ASTExtraShootWeapon *) Object;
               playerChar->CurMaxBulletNumInOneClip = 6969;
            }
     }
   }


if (Config.HighRisk.Fixstuck){
localPlayer->bHasStuckOperation = false;
}

if (RajputBY) {
        AGameSession *GameSession = 0;
        auto FK = GameSession->MaxSplitscreensPerConnection;    
                       FK = 0;
       }

//localPlayer->Energy.EnergyCurrent >= 60.0f;
//===================MEMORY-FUNCTION====================//
auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
if (WeaponManagerComponent){
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated){

if (Config.HighRisk.KillMsg){
auto Records = localController->ClientFatalDamageRecords;
for (int i = 0; i < Records.Num(); i++){
if (Records[i].RecordRelationShip == EFatalDamageRelationShip::MyTeamateIsCauser){
if (strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){
Records[i].CauserWeaponAvatarID = 1101001089; //Glicier - AKM
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){
Records[i].CauserWeaponAvatarID = 1101004086; //Lizard Roar - M416
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR-L")){
Records[i].CauserWeaponAvatarID = 1101003057; //Water Blaster - SCAR-L
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){
Records[i].CauserWeaponAvatarID = 1101008026; //8-Vit Unicorn
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
Records[i].CauserWeaponAvatarID = 1101005019;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "UZI")){
Records[i].CauserWeaponAvatarID = 1102001024;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "UMP45")){
Records[i].CauserWeaponAvatarID = 1102002053;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "Vector")){
Records[i].CauserWeaponAvatarID = 1102003020;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "Thompson")){
Records[i].CauserWeaponAvatarID = 1102004018;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "PP-19 Bizon")){
Records[i].CauserWeaponAvatarID = 1102005007;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "Kar98K")){
Records[i].CauserWeaponAvatarID = 1103001060;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "M24")){
Records[i].CauserWeaponAvatarID = 1103002018;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){
Records[i].CauserWeaponAvatarID = 1103003022;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "DP28")){
Records[i].CauserWeaponAvatarID = 1105002018;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "M16A4")){
Records[i].CauserWeaponAvatarID = 1101002029;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "QBZ")){
Records[i].CauserWeaponAvatarID = 1101007025;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "M249")){
Records[i].CauserWeaponAvatarID = 1105001020;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "Mini 14")){
Records[i].CauserWeaponAvatarID = 1101007025;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "SLR")){
Records[i].CauserWeaponAvatarID = 1103009022;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "SKS")){
Records[i].CauserWeaponAvatarID = 1103004037;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "Pan")){
Records[i].CauserWeaponAvatarID = 1108004125;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "Vss")){
Records[i].CauserWeaponAvatarID = 1103005024;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "S1897")){
Records[i].CauserWeaponAvatarID = 1104002022;
} else if(strstr(CurrentWeaponReplicated->GetWeaponName().ToString(), "S12K")){
Records[i].CauserWeaponAvatarID = 1104003026;
}
}}}

auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
if (ShootWeaponEntityComp && ShootWeaponEffectComp){

if (Config.HighRisk.Recoil){
ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.01f;
ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.01f;
ShootWeaponEntityComp->GameDeviationFactor = 0.3f;
ShootWeaponEntityComp->RecoilKickADS = 0.01f;
}

if (Config.HighRisk.Shake){
ShootWeaponEntityComp->AnimationKick = 0.01f;
}

if (Config.HighRisk.HitEffect){
ShootWeaponEntityComp->ExtraHitPerformScale = 100.0f;
}

if (Config.HighRisk.Instant){
ShootWeaponEntityComp->ShootInterval = 0.1f;
ShootWeaponEntityComp->BurstShootInterval = 0.1f;
}

}}}//WeaponManagerComponentEnd....
//@ALTAB_VIP
static bool bShooting = false;
                 if (Config.CalcShootRot.Enable) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                        if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
                            auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                            if (CurrentWeaponReplicated) {
                                auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                if (ShootWeaponComponent) {
                                    int shoot_event_idx = 140;
                                    auto VTable = (void **) ShootWeaponComponent->VTable;
                                    // CHANGE22222 add lambda function f_mprotect
                                    auto f_mprotect = [](uintptr_t addr, size_t len, int32_t prot) -> int32_t {
                                      static_assert(PAGE_SIZE == 4096);
                                      constexpr size_t page_size = static_cast<size_t>(PAGE_SIZE);
                                      void* start = reinterpret_cast<void*>(addr & -page_size);
                                      uintptr_t end = (addr + len + page_size - 20) & -page_size;
                                      return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
                                    };
                                    if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
                                        orig_shoot_event = decltype(orig_shoot_event)(
                                                VTable[shoot_event_idx]);
                                        // CHANGE22222 add call of f_mprotect
                                        f_mprotect((uintptr_t)(&VTable[shoot_event_idx]), sizeof(uintptr_t), PROT_READ | PROT_WRITE);
                                        VTable[shoot_event_idx] = (void *) shoot_event;
                                    }
                                }
                            }
                        }
                    }}
//===================AIMBOT====================//
 if (Config.AimBot.Enable) {
ASTExtraPlayerCharacter *Target = GetTargetForAim();
if (Target) {
bool triggerOk = false;
if (Config.AimMenu.Trigger != EAimTrigger::None)
{
if (Config.AimMenu.Trigger == EAimTrigger::Shooting)
{
triggerOk = localPlayer->bIsWeaponFiring;
}
else if (Config.AimMenu.Trigger == EAimTrigger::Scoping)
{
triggerOk = localPlayer->bIsGunADS;
}
else if (Config.AimMenu.Trigger == EAimTrigger::Both)
{
triggerOk = localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS;
}
else if (Config.AimMenu.Trigger == EAimTrigger::Any)
{
triggerOk = localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS;
}
} else triggerOk = true;
if (triggerOk) {
FVector targetAimPos = Target->GetBonePos("Head");
if (Config.AimMenu.Target == EAimTarget::Chest)
{
targetAimPos.Z -= 25.0f;
}
auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
if (WeaponManagerComponent)
{
auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3)
{
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated)
{
auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
if (ShootWeaponComponent)
{
UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
if (ShootWeaponEntityComponent)
{
ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
if (CurrentVehicle)
{
FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
float dist = localPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
} else {
FVector Velocity = Target->GetVelocity();
float dist = localPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
}
localController->SetControlRotation(ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos),"");
}
}
}
}
}
}
}
}

//Radar Background Simulation
if (Config.ESPMenu.Radar) {
bool out = false;
struct Vector3 Pos;
Pos.X = (Config.ESPMenu.RadarX * 10);
Pos.Y = (Config.ESPMenu.RadarY * 10);
struct Vector3 Size;
Size.X = 200;
Size.Y = 200;
float RadarCenterX = Pos.X + (Size.X / 2);
float RadarCenterY = Pos.Y + (Size.Y / 2);
ImColor CircleColor = ImColor(0, 0, 0, 20);
ImColor PointColor = ImColor(255,0, 0, 255);
draw->AddLine({RadarCenterX + 50, RadarCenterY - 50}, {RadarCenterX, RadarCenterY}, PointColor, 2);
draw->AddLine({RadarCenterX - 50, RadarCenterY - 50}, {RadarCenterX, RadarCenterY}, PointColor, 2);
draw->AddLine({RadarCenterX, RadarCenterY}, {RadarCenterX, RadarCenterY}, PointColor, 2);
draw->AddCircleFilled(ImVec2(RadarCenterX, RadarCenterY), 100.f, CircleColor, 1000); //Background
draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 100.f, PointColor, 1000);
draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 50.f, PointColor, 1000);
draw->AddCircleFilled(ImVec2(RadarCenterX + 0.5f, RadarCenterY + 0.5f), 3.f, PointColor, 1000); // Center of Cross Ci 
}
//===================ESP-VISUAL====================//
for (int i = 0; i < Actors.Num(); i++) {
 auto Actor = Actors[i];
 if (isObjectInvalid(Actor))
 continue;
 
if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
long PlayerLineClrCf = IM_COL32(255, 0, 0, 255);//VISIBLE RGBA PLAYER
long PlayerBoxClrCf = IM_COL32(255, 0, 255, 255);//VISIBLE RGBA PLAYER
long PlayerSkeltonClrCf = IM_COL32(255, 255, 0, 255);//VISIBLE RGBA PLAYER
 
auto Player = (ASTExtraPlayerCharacter *) Actor;

if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)){
PlayerLineClrCf = IM_COL32(255, 255, 255, 255);//NOT VISIBLE
}

float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
if (Distance > 500.0f)
continue;

if (Player->PlayerKey == localController->PlayerKey)
continue;

if (Player->TeamID == localController->TeamID)
continue;

if (Player->bDead)
continue;

if (Player->bHidden)
continue;

if (Config.AimMenu.Type == EAimType::Croshhair) {
if (localPlayer->bIsWeaponFiring) {
draw->AddCircle(ImVec2(glWidth / 2, glHeight / 2), Config.AimMenu.FOVSize * 1.3f, IM_COL32(255, 0, 0, 255), 100, 0.6f);
} else if (localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS) {
draw->AddCircle(ImVec2(glWidth / 2, glHeight / 2), Config.AimMenu.FOVSize * 1.2f, IM_COL32(255, 0, 0, 255), 100, 0.6f);
} else {
draw->AddCircle(ImVec2(glWidth / 2, glHeight / 2), Config.AimMenu.FOVSize * 1.5f, IM_COL32(255, 0, 0, 255), 100, 0.6f);
}
}

long PBox, PLine, PSkeleton, mk;
if (Player->bIsAI) {
totalBots++;
mk = IM_COL32(30, 232, 222, 110);
PBox = ToColor(Config.ColorsESP.BVBox);
PLine = ToColor(Config.ColorsESP.BVLine);
PSkeleton = ToColor(Config.ColorsESP.BVISkeleton);
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
mk = IM_COL32(30, 232, 222, 110);
PBox = ToColor(Config.ColorsESP.BVIBox);
PLine = ToColor(Config.ColorsESP.BVILine);
PSkeleton = ToColor(Config.ColorsESP.BVISkeleton);
}
} else {
totalEnemies++;
mk = IM_COL32(0, 232, 0, 110);
PBox = ToColor(Config.ColorsESP.PVBox);
PLine = ToColor(Config.ColorsESP.PVLine);
PSkeleton = ToColor(Config.ColorsESP.PVSkeleton);
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
mk = IM_COL32(222, 42, 45, 110);
PBox = ToColor(Config.ColorsESP.PVIBox);
PLine = ToColor(Config.ColorsESP.PVILine);
PSkeleton = ToColor(Config.ColorsESP.PVISkeleton);
}
}

float magic_number = (Distance);
float mx = (glWidth / 2) / magic_number;
float healthLength = glWidth / 20;
if (healthLength < mx)
healthLength < mx;

auto HeadPos = Player->GetBonePos("Head");
HeadPos.Z = HeadPos.Z + 1.0f; //head se line ooper
ImVec2 HeadPosSC;

auto RootPos = Player->GetBonePos("Root");
ImVec2 RootPosSC;
if (W2S(HeadPos, (FVector2D *) &HeadPosSC) && W2S(RootPos, (FVector2D *) &RootPosSC)) {

if (Config.ESPMenu.Line) {
draw->AddLine({(float) glWidth / 2, 0}, HeadPosSC,
PLine, 0.6f);
}

if (Config.ESPMenu.Line) {
float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
float boxWidth = boxHeight * 0.65f;
ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y};
ImVec2 vEnd = {vStart.x + boxWidth, vStart.y + boxHeight};
draw->AddRect(vStart, vEnd, PBox, 0.5f);
}

if (Config.ESPMenu.Line) {
static std::vector<std::string> right_arm{"neck_01",
"clavicle_r",
"upperarm_r",
"lowerarm_r",
"hand_r", "item_r"};
static std::vector<std::string> left_arm{"neck_01",
 "clavicle_l",
 "upperarm_l",
 "lowerarm_l",
 "hand_l", "item_l"};
static std::vector<std::string> spine{"Head", "neck_01",
"spine_03",
"spine_02", "spine_01",
"pelvis"};
static std::vector<std::string> lower_right{"pelvis", "thigh_r",
"calf_r", "foot_r"};
static std::vector<std::string> lower_left{"pelvis", "thigh_l",
 "calf_l", "foot_l"};
static std::vector<std::vector<std::string>> skeleton{right_arm,
left_arm,
spine,
lower_right,
lower_left};

for (auto &boneStructure: skeleton) {
std::string lastBone;
for (std::string &currentBone: boneStructure) {
if (!lastBone.empty()) {
ImVec2 boneFrom, boneTo;
if (W2S(Player->GetBonePos(lastBone.c_str()),
(FVector2D *) &boneFrom) &&
W2S(Player->GetBonePos(currentBone.c_str()),
(FVector2D *) &boneTo)) {
draw->AddLine(boneFrom, boneTo,
PSkeleton, 1.0f);
}
}
lastBone = currentBone;
}
}
}

if (Config.ESPMenu.Line || Config.ESPMenu.Line || Config.ESPMenu.Line) {
draw->AddRectFilled({HeadPosSC.x - 95, HeadPosSC.y - 58}, {HeadPosSC.x - 50,HeadPosSC.y - 29}, Random1(Player->TeamID), 1, 0);
//big rect
draw->AddRectFilled({HeadPosSC.x - 95, HeadPosSC.y - 58}, {HeadPosSC.x + 95,HeadPosSC.y - 29}, Random2(Player->TeamID), 1, 0);
//head triangle
draw->AddTriangleFilled(ImVec2(HeadPosSC.x + 20 / 2, HeadPosSC.y - 28.5 ), ImVec2(HeadPosSC.x - 20 / 2, HeadPosSC.y - 28.5), ImVec2(HeadPosSC.x + 0 / 2, HeadPosSC.y - 11), Random2(Player->TeamID));
 } 

//@ALTAB_VIP
 if (Config.ESPMenu.Line) {   
float dist = localPlayer->GetDistanceTo(Player) / 100.0f;
int CurHP = (int) std::max(0, std::min((int) Player->Health,100));
int MaxHP = 100;
long ChoudharyRBG = IM_COL32(255, 255, 255, 255);
draw->AddRectFilled({HeadPosSC.x - 95 - dist * .0f, HeadPosSC.y - 28.5 - dist * .0f}, {HeadPosSC.x - 95 - dist * .0f + (1.9 * CurHP), HeadPosSC.y - 30.6 - dist * .0f},ChoudharyRBG, 1, 0);
if (Player->Health == 0.0f && !Player->bDead) {
}}


 if (Config.ESPMenu.Line) { 
std::string s;
auto textSize = ImGui::CalcTextSize(s.c_str(), 0); 
if(Player->TeamID < 10 ){
s +=" 0";
s += std::to_string(Player->TeamID);
draw->AddText(NULL ,30 ,ImVec2(HeadPosSC.x - 91.3- (textSize.x / 2), HeadPosSC.y - 59.5 ), IM_COL32(0, 0, 0, 20),s.c_str()); 
draw->AddText(NULL ,30,ImVec2(HeadPosSC.x - 92.3- (textSize.x / 2), HeadPosSC.y - 60.5), IM_COL32(255, 255, 255, 255),s.c_str());

}
else if(Player->TeamID < 100){
s+=" ";
s += std::to_string(Player->TeamID);
draw->AddText(NULL,30 ,ImVec2(HeadPosSC.x - 90- (textSize.x / 2), HeadPosSC.y - 59.5), IM_COL32(0, 0, 0, 20),s.c_str());
draw->AddText(NULL ,30 ,ImVec2(HeadPosSC.x - 91 - (textSize.x / 2), HeadPosSC.y - 60.5), IM_COL32(255, 255, 255, 255),s.c_str());
}else {
s += std::to_string(Player->TeamID);
draw->AddText( NULL,30 ,ImVec2(HeadPosSC.x - 91 - (textSize.x / 2), HeadPosSC.y - 59.5), IM_COL32(0, 0, 0, 20),s.c_str());
draw->AddText(NULL ,30,ImVec2(HeadPosSC.x - 92- 1 - (textSize.x / 2), HeadPosSC.y - 60.5), IM_COL32(255, 255, 255, 255),s.c_str());
}}

 if (Config.ESPMenu.Line) {
 std::string s;
if (Player->bIsAI) {
 s += " "; 
s += "   BOT"; 
} else {
s += Player->PlayerName.ToString();
}
 draw->AddText(NULL,24.f,ImVec2(HeadPosSC.x - 49, HeadPosSC.y - 54.9), IM_COL32(0, 0, 0, 180),s.c_str());
draw->AddText(NULL,24.f,ImVec2(HeadPosSC.x - 50, HeadPosSC.y - 55.9), IM_COL32(255, 255, 255, 255),s.c_str());
} 


if (Config.ESPMenu.Line) {
std::string s = std::to_string((int) Distance) + "M";
float a = 30;
if (Distance >= 100)
{
a = 35;
}
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 22.0f));
ImVec2 textPos(RootPosSC.x - (textSize.x / 2.0f), RootPosSC.y);
draw->AddText(ItSMKOP, ((float) density / 18.0f), textPos, ToColor(Config.ColorsESP.Name), s.c_str());
}


if (Config.ESPMenu.EnemyWeapon) {
                                auto WeaponManagerComponent = Player->WeaponManagerComponent;
                                if (WeaponManagerComponent) {
                                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
                                        if (CurrentWeaponReplicated) {
                                            auto WeaponId = (int)CurrentWeaponReplicated->GetWeaponID();
                                            if (WeaponId) {
                                                std::string s;
                                                s += CurrentWeaponReplicated->GetWeaponName().ToString();
                                                s += " [";
                                                s += std::to_string((int) CurrentWeaponReplicated->CurBulletNumInClip);
                                                s += "]";
                                             //   s += std::to_string((int) CurrentWeaponReplicated->CurMaxBulletNumInOneClip);
                                              //  s += "]";
                                                auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 35.0f));
                                                draw->AddText(NULL, ((float) density / 15.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y}, IM_COL32(0, 255, 0, 255), s.c_str());
                                            }
                                        }
                                    }
                                }
                                
                            } //WS2 End...

//360° ESP DRAW Circle
FVector2D screen(glWidth, glHeight);
FVector2D location(RootPosSC.x, HeadPosSC.y);
int borders = isOutsideSafezone(location, screen);
if (Config.ESPMenu.Alert && borders != 0) 
{
float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
std::string s;
s += std::to_string((int)Distance);
s += "M";
float mScale = glHeight / (float) 1080;
auto textSize = ImGui::CalcTextSize(s.c_str(), 0, s.size());
auto hintDotRenderPos = pushToScreenBorder(location, screen, borders, (int)((mScale * 100) / 3));
auto hintTextRenderPos = pushToScreenBorder(location, screen, borders, -(int)((mScale * 36)));
draw->AddCircleFilled(ImVec2(hintDotRenderPos.X, hintDotRenderPos.Y), mScale * 100, IM_COL32(255, 0, 0, 128), 0);
draw->AddText(ItSMKOP, ((float)density / 30.0f), ImVec2(hintTextRenderPos.X, hintTextRenderPos.Y), IM_COL32(255, 255, 255, 255), s.c_str());
}

//Screen Triangle Alert
if(Config.ESPMenu.OnScreen){
bool shit = false;
FVector MyPosition, EnemyPosition;
ASTExtraVehicleBase * CurrentVehiclea = Player->CurrentVehicle;
if (CurrentVehiclea) {
MyPosition = CurrentVehiclea->RootComponent->RelativeLocation;
} else {
MyPosition = Player->RootComponent->RelativeLocation;
}
ASTExtraVehicleBase * CurrentVehicle = localPlayer->CurrentVehicle;
if (CurrentVehicle) {
EnemyPosition = CurrentVehicle->RootComponent->RelativeLocation;
} else {
EnemyPosition = localPlayer->RootComponent->RelativeLocation;
}
FVector EntityPos = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, NULL, NULL, Vector3(glWidth, glHeight, 0), shit);
FVector angle = FVector();
Vector3 forward = Vector3((float)(glWidth / 2) - EntityPos.X, (float)(glHeight / 2) - EntityPos.Y, 0.0f);
VectorAnglesRadar(forward, angle);
const auto angle_yaw_rad = DEG2RAD(angle.Y + 180.f);
const auto new_point_x = (glWidth / 2) + (55/*alert dist from me*/) / 2 * 8 * cosf(angle_yaw_rad);
const auto new_point_y = (glHeight / 2) + (55/*alert dist from me*/) / 2 * 8 * sinf(angle_yaw_rad);
std::array<Vector3, 3> points { Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((55) / 4 + 3.5f) / 2, 0.f), Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f), Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((55) / 4 + 3.5f) / 2, 0.f)};
RotateTriangle(points, angle.Y + 180.f);
draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), IM_COL32(255, 0, 0, 255), 1.0f);
draw->AddTriangleFilled(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), IM_COL32(255, 0, 0, 255));
}




//Radar Enemy Dot
if (Config.ESPMenu.Radar) {
bool out = false;
struct Vector3 Pos;
Pos.X = (Config.ESPMenu.RadarX * 10);
Pos.Y = (Config.ESPMenu.RadarY * 10);
struct Vector3 Size;
Size.X = 200;
Size.Y = 200;
FVector MyPosition, EnemyPosition;
ASTExtraVehicleBase * CurrentVehiclea = Player->CurrentVehicle;
if (CurrentVehiclea) {
MyPosition = CurrentVehiclea->RootComponent->RelativeLocation;
} else {
MyPosition = Player->RootComponent->RelativeLocation;
}
ASTExtraVehicleBase * CurrentVehicle = localPlayer->CurrentVehicle;
if (CurrentVehicle) {
EnemyPosition = CurrentVehicle->RootComponent->RelativeLocation;
} else {
EnemyPosition = localPlayer->RootComponent->RelativeLocation;
}
FVector RadarSketch = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, Pos.X, Pos.Y, Vector3(Size.X, Size.Y, 0), out);
if (Distance >= 0.f) {
draw->AddCircle(ImVec2(RadarSketch.X, RadarSketch.Y), 5, IM_COL32(0, 255, 0, 255), 100, 0);
draw->AddCircleFilled(ImVec2(RadarSketch.X, RadarSketch.Y), 5, IM_COL32(0, 255, 0, 255), 0);
}
}
} //ASTExtraPlayerCharacter End

if (Config.ESPMenu.GameInfo) { 
if (Actors[i]->IsA(ASTExtraGameStateBase::StaticClass())) {
auto InGame = (ASTExtraGameStateBase *) Actors[i];
std::string s;
s += "Game Info :";
s += "\nMatch ID : ";
s += std::to_string((int) InGame->GameID);
s += "\nTeam Mode: ";
s += std::to_string((int) InGame->PlayerNumPerTeam);
s += "\nTotal Alive Players: " ;
s += std::to_string((int) InGame->AlivePlayerNum);
s += "\nReal Players: ";
s += std::to_string((int) InGame->PlayerNum);
s += "\nTeam Remaining: ";
s += std::to_string((int) InGame->AliveTeamNum);
s += "\nMatch Time: ";
s += std::to_string((int) InGame->ElapsedTime);
s += "s | ";
s += std::to_string((int) InGame->ElapsedTime / 60);
s += "m";
auto textSize = ImGui::CalcTextSize(s.c_str(), 0, s.size());
draw->AddText(ItSMKOP, ((float) density / 26.0f), ImVec2(glWidth / 100.0f, 300), IM_COL32(000, 255, 000, 255), s.c_str());
}
}

if (Config.ESPMenu.Vehicle) {
if (Actors[i]->IsA(ASTExtraVehicleBase::StaticClass())) {
auto Vehicle = (ASTExtraVehicleBase *)Actors[i];
if (!Vehicle->Mesh)
continue;
int CurHP = (int) std::max(0, std::min((int) Vehicle->VehicleCommon->HP, (int) Vehicle->VehicleCommon->HPMax));
int MaxHP = (int) Vehicle->VehicleCommon->HPMax;
long VHP_Color = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min(((510 * CurHP) / MaxHP), 255), 0, 155);
float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
if (Distance > 500.0f) continue;
FVector2D vehiclePos;
if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos))
{
auto mWidthScale = std::min(0.10f * Distance, 50.f);
auto mWidth = 85.0f - mWidthScale;
auto mHeight = mWidth * 0.07f;
std::string s = GetVehicleName(Vehicle);
 s += " [";
s += std::to_string((int)Distance);
s += "m]";
auto textSize = ImGui::CalcTextSize(s.c_str(), 0, s.size());
 draw->AddText(ItSMKOP, ((float)density / 30.0f), {vehiclePos.X - (mWidth / 2), vehiclePos.Y}, IM_COL32(000, 255, 255, 255), s.c_str());
//@ALTAB_VIP
}
}
}

if (Config.ESPMenu.LootBox) {
if (Actors[i]->IsA(APlayerTombBox::StaticClass())) {
auto APickUpListWrapperActor = (APlayerTombBox *) Actors[i];
auto RootComponent = APickUpListWrapperActor->RootComponent;
if (!RootComponent) continue;
float Distance = APickUpListWrapperActor->GetDistanceTo(localPlayer) / 100.0f;
if (Distance > 40.0f) continue;
FVector2D lootboxPos;
if (W2S(APickUpListWrapperActor->K2_GetActorLocation(), &lootboxPos)) {
std::string s = GetPickUpName(APickUpListWrapperActor);
s += " [";
s += std::to_string((int) Distance);
s += "m]";
auto textSize = ImGui::CalcTextSize(s.c_str(), 0, s.size());
draw->AddText(ItSMKOP, ((float) density / 30.0f),
{lootboxPos.X, lootboxPos.Y},
IM_COL32(000, 255, 000, 255), s.c_str());
}
}
}

if (Config.ESPMenu.Grenade) {
if (Actors[i]->IsA(ASTExtraGrenadeBase::StaticClass())) {
auto Grenade = (ASTExtraGrenadeBase *) Actors[i];
auto RootComponent = Grenade->RootComponent;
if (!RootComponent) continue;
float Distance = Grenade->GetDistanceTo(localPlayer) / 100.0f;
if (Distance > 100.0f) continue;
FVector2D grenadePos;
if (W2S(Grenade->K2_GetActorLocation(), &grenadePos)) {
auto resName = getStringName(Grenade);
std::string s;
if (strstr(resName, "BP_Grenade_Shoulei_C")){
s += "Grenade";
} else if (strstr(resName, "BP_Grenade_Burn_C")){
s += "Molotov";
} else if (strstr(resName, "BP_Grenade_Stun_C")){
s += "Stun";
} else if (strstr(resName, "BP_Grenade_Smoke_C")){
s += "Smoke";
}
s += " [";
s += std::to_string((int) Distance);
s += "m]";
draw->AddText(ItSMKOP, ((float) density / 15.0f), {((float)glWidth / 2) - (glWidth / 10), 100}, IM_COL32(255, 0, 0, 255), "!!!...THROWABLE WARNING...!!!");
draw->AddText(ItSMKOP, ((float) density / 20.0f), {grenadePos.X, grenadePos.Y}, IM_COL32(255, 0, 0, 255), s.c_str());
}
}
}

if (Actors[i]->IsA(APickUpWrapperActor::StaticClass())) {
auto PickUp = (APickUpWrapperActor *) Actors[i];
if (Items[PickUp->DefineID.TypeSpecificID]) {
auto RootComponent = PickUp->RootComponent;
if (!RootComponent) continue;
float Distance = PickUp->GetDistanceTo(localPlayer) / 100.0f;
if (Distance > 30.0f) continue;
FVector2D itemPos;
if (W2S(PickUp->K2_GetActorLocation(), &itemPos)) {
std::string s;
uint32_t tc = 0xFF000000;
for (auto &category : items_data) {
for (auto &item : category["Items"]) {
if (item["itemId"] == PickUp->DefineID.TypeSpecificID) {
s = item["itemName"].get<std::string>();
tc = strtoul(
item["itemTextColor"].get<std::string>().c_str(),
0, 16);
break;
}
}
}
s += " - ";
s += std::to_string((int) Distance);
s += "M";
auto textSize = ImGui::CalcTextSize(s.c_str(), 0, s.size());
draw->AddText(ItSMKOP, ((float) density / 30.0f),
{itemPos.X, itemPos.Y}, IM_COL32(255, 255, 255, 255), s.c_str());
}
}
}

 }
 }
}

g_LocalController = localController;
g_LocalPlayer = localPlayer;

int TotalCount = totalEnemies;
if (totalEnemies > 0 || totalBots > 0) {
 if (totalEnemies > 0) {
 if (totalEnemies < 10) { 
std::string s;
s += "0";
 s += std::to_string((int)totalEnemies); 
 draw->AddRectFilled(ImVec2(glWidth / 2 - 80, 50), ImVec2(glWidth / 2 -10, 120), IM_COL32(255, 0, 0, 155),100, ImDrawFlags_RoundCornersAll);
 draw->AddRect(ImVec2(glWidth / 2 - 80, 50), ImVec2(glWidth / 2 -10, 120), IM_COL32(0, 0, 0, 80), 100, ImDrawFlags_RoundCornersAll, 2.5f);
 draw->AddText(nullptr, ((float)density / 10.0f), ImVec2(glWidth / 2 - 62, 65), IM_COL32(255, 255, 255, 255), s.c_str()); 
} else{
std::string s;
s += std::to_string((int)totalEnemies); 
draw->AddRectFilled(ImVec2(glWidth / 2 - 80, 50), ImVec2(glWidth / 2 -10, 120), IM_COL32(255, 0, 0, 155),100, ImDrawFlags_RoundCornersAll);
draw->AddRect(ImVec2(glWidth / 2 - 80, 50), ImVec2(glWidth / 2 -10, 120), IM_COL32(0, 0, 0, 80), 100, ImDrawFlags_RoundCornersAll, 2.5f);
draw->AddText(nullptr, ((float)density / 10.0f), ImVec2(glWidth / 2 - 62, 65), IM_COL32(255, 255, 255, 255), s.c_str()); 
}}
 if (totalBots > 0){
if (totalBots < 10){
std::string s;
 s += "0";
 s += std::to_string((int)totalBots); 
 draw->AddRectFilled(ImVec2(glWidth / 2 +10, 50), ImVec2(glWidth / 2 +80, 120), IM_COL32(255, 255, 255, 155),100, ImDrawFlags_RoundCornersAll);
 draw->AddRect(ImVec2(glWidth / 2 +10, 50), ImVec2(glWidth / 2 + 80, 120), IM_COL32(0, 0, 0, 80), 100, ImDrawFlags_RoundCornersAll, 2.5f);
 draw->AddText(nullptr, ((float)density / 10.0f), ImVec2(glWidth / 2 + 27, 65), IM_COL32(0, 0, 0, 255), s.c_str());
} else {
 std::string s;
s += std::to_string((int)totalBots); 
draw->AddRectFilled(ImVec2(glWidth / 2 +10, 50), ImVec2(glWidth / 2 +80, 120), IM_COL32(255, 255, 255, 155),100, ImDrawFlags_RoundCornersAll);
draw->AddRect(ImVec2(glWidth / 2 +10, 50), ImVec2(glWidth / 2 + 80, 120), IM_COL32(0, 0, 0, 80), 100, ImDrawFlags_RoundCornersAll, 2.5f);
draw->AddText(nullptr, ((float)density / 10.0f), ImVec2(glWidth / 2 + 27, 65), IM_COL32(0, 0, 0, 255), s.c_str());
 } } }
fps.update();
}}
//@ALTAB_VIP



void ItSMeShakya()
{
int fd = open("/storage/emulated/0/Android/data/com.tencent.iglite/robin.ini", O_RDONLY); 
read(fd, &extra, sizeof(extra)); 
close(fd);
} 
 
const char *GetPackageName() {
FILE *f = fopen("/proc/self/cmdline", "rb");
if (f) {
char *buf = new char[64];
fread(buf, sizeof(char), 64, f);
fclose(f);
return buf;
}
return 0;
}

std::string getClipboardText() {
if (!g_App)
return "";

auto activity = g_App->activity;
if (!activity)
return "";

auto vm = activity->vm;
if (!vm)
return "";

auto object = activity->clazz;
if (!object)
return "";

std::string result;

JNIEnv *env;
vm->AttachCurrentThread(&env, 0);
{
auto ContextClass = env->FindClass("android/content/Context");
auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
auto str = env->NewStringUTF("clipboard");
auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
env->DeleteLocalRef(str);
auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");
auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");
auto text = env->CallObjectMethod(clipboardManager, getText);
if (text) {
str = (jstring) env->CallObjectMethod(text, toStringMethod);
result = env->GetStringUTFChars(str, 0);
env->DeleteLocalRef(str);
env->DeleteLocalRef(text);
}

env->DeleteLocalRef(CharSequenceClass);
env->DeleteLocalRef(ClipboardManagerClass);
env->DeleteLocalRef(clipboardManager);
env->DeleteLocalRef(ContextClass);
}
vm->DetachCurrentThread();

return result;
}
//@ALTAB_VIP
const char *GetAndroidID(JNIEnv *env, jobject context) {
jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());

auto obj = env->CallObjectMethod(context, getContentResolverMethod);
auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceModel(JNIEnv *env) {
jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceBrand(JNIEnv *env) {
jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
return env->GetStringUTFChars(str, 0);
}

const char *GetPackageName(JNIEnv *env, jobject context) {
jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());

auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());

auto len = strlen(uuid);

jbyteArray myJByteArray = env->NewByteArray(len);
env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);

jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());

auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
return env->GetStringUTFChars(str, 0);
}

struct MemoryStruct {
char *memory;
size_t size;
};

static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
size_t realsize = size * nmemb;
struct MemoryStruct *mem = (struct MemoryStruct *) userp;

mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
if (mem->memory == NULL) {
return 0;
}

memcpy(&(mem->memory[mem->size]), contents, realsize);
mem->size += realsize;
mem->memory[mem->size] = 0;

return realsize;
}
//=========================MAIN LOGIN =================//
std::string Login(const char * user_key) {
    if (!g_App)
        return "Internal Error";
    auto activity = g_App->activity;
    if (!activity)
        return "Internal Error";
    auto vm = activity->vm;
    if (!vm)
        return "Internal Error";
    auto object = activity->clazz;
    if (!object)
        return "Internal Error";
    JNIEnv * env;
    vm->AttachCurrentThread( & env, 0);
    std::string hwid = user_key;
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);
    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());
    vm->DetachCurrentThread();
    std::string errMsg;
    struct MemoryStruct chunk { };
    chunk.memory = (char *)malloc(1);
    chunk.size = 0;
    CURL * curl;
    CURLcode res;
    curl = curl_easy_init();
if (curl) {
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, /*POST*/ StrEnc(",IL=", "\x7C\x06\x1F\x69", 4).c_str());
        std::string sRedLink = (OBFUSCATE("https:/connect"));
      
        curl_easy_setopt(curl, CURLOPT_URL, sRedLink.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, /*https*/ StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, /*Content-Type: application/x-www-form-urlencoded*/ StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[", "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F", 47).c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        char data[4096];
        sprintf(data, /*game=PUBG&user_key=%s&serial=%s*/ StrEnc("qu2yXK,YkJyGD@ut0.u~Nb'5(:.:chK", "\x16\x14\x5F\x1C\x65\x1B\x79\x1B\x2C\x6C\x0C\x34\x21\x32\x2A\x1F\x55\x57\x48\x5B\x3D\x44\x54\x50\x5A\x53\x4F\x56\x5E\x4D\x38", 31).c_str(), user_key, UUID.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);

        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            try {
                json result = json::parse(chunk.memory);
                if (result[/*status*/ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] == true) {
                    std::string token = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*token*/ StrEnc("{>3Lr", "\x0F\x51\x58\x29\x1C", 5).c_str()].get<std::string>();
                    time_t rng = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*rng*/ StrEnc("+n,", "\x59\x00\x4B", 3).c_str()].get<time_t>();
    /* mod_status = result["data"]["MOD_STATUS"].get<std::string>();
     modname = result["data"]["MOD_NAME"].get<std::string>();
     SLOT = result["data"]["BHATIA_SLOT"].get<std::string>();*/
   //  EXP = result["data"]["EXP"].get<std::string>();
 
                    if (rng + 30 > time(0)) {
                        std::string auth = /*PUBG*/ StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
                        auth += "-";
                        auth += user_key;
                        auth += "-";
                        auth += UUID;
                        auth += "-";
                        auth += /*Vm8Lk7Uj2JmsjCPVPVjrLa7zgfx3uz9E*/ StrEnc("-2:uwZdV^%]?{{wHs2V,+(^NJU;kC*_{", "\x7B\x5F\x02\x39\x1C\x6D\x31\x3C\x6C\x6F\x30\x4C\x11\x38\x27\x1E\x23\x64\x3C\x5E\x67\x49\x69\x34\x2D\x33\x43\x58\x36\x50\x66\x3E", 32).c_str();
                        std::string outputAuth = Tools::CalcMD5(auth);

                        g_Token = token;
                        g_Auth = outputAuth;

                        bValid = g_Token == g_Auth;
                    }
                } else {
                    errMsg = result[/*reason*/ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D", 6).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = "{";
                errMsg += e.what();
                errMsg += "}\n{";
                errMsg += chunk.memory;
                errMsg += "}";
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }
    curl_easy_cleanup(curl);

    return bValid ? "OK" : errMsg;
}
//@ALTAB_VIP

void ShowToast(const char* message, float showTime, float duration = 5.0f)
{
static std::string currentToastMessage;
static float currentToastStartTime = 0.0f;
static float currentToastDuration = 0.0f;

float currentTime = ImGui::GetTime();
if (currentTime >= showTime && currentTime < (showTime + duration))
{
if (currentToastMessage != message)
{
currentToastMessage = message;
currentToastStartTime = ImGui::GetTime();
currentToastDuration = duration;
}

ImVec2 pos = ImVec2(ImGui::GetIO().DisplaySize.x - 10.0f, 10.0f);
ImGui::SetNextWindowPos(pos, ImGuiCond_Always, ImVec2(1.0f, 0.0f));
ImGui::Begin("Toast", nullptr,
ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove |
ImGuiWindowFlags_NoNav | ImGuiWindowFlags_NoInputs |
ImGuiWindowFlags_AlwaysAutoResize);
ImGui::Text("%s", currentToastMessage.c_str());
ImGui::End();
}
else if (currentTime >= (showTime + duration))
{
currentToastMessage.clear();
currentToastStartTime = 0.0f;
currentToastDuration = 0.0f;
}
}

int OpenURL(const char* url)
{ 
JavaVM* java_vm = g_App->activity->vm;
JNIEnv* java_env = NULL; 
jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
if (jni_return == JNI_ERR)
return -1;
jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
if (jni_return != JNI_OK) 
return -2;
jclass native_activity_clazz = java_env->GetObjectClass(g_App->activity->clazz);
if (native_activity_clazz == NULL)
return -3; 
jmethodID method_id = java_env->GetMethodID(native_activity_clazz, "AndroidThunkJava_LaunchURL", "(Ljava/lang/String;)V");
if (method_id == NULL)
return -4;
jstring retStr = java_env->NewStringUTF(url);
java_env->CallVoidMethod(g_App->activity->clazz, method_id, retStr);
jni_return = java_vm->DetachCurrentThread();
if (jni_return != JNI_OK)
return -5;
 return 0;
}

int RestartTheGame()
{
JavaVM* java_vm = g_App->activity->vm;
JNIEnv* java_env = NULL;
jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
if (jni_return == JNI_ERR)
return -1;
jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
if (jni_return != JNI_OK)
return -2;
jclass native_activity_clazz = java_env->GetObjectClass(g_App->activity->clazz);
if (native_activity_clazz == NULL)
return -3;
jmethodID method_id = java_env->GetMethodID(native_activity_clazz, "AndroidThunkJava_RestartGame", "()V");
if (method_id == NULL)
return -4;
java_env->CallVoidMethod(g_App->activity->clazz, method_id);
jni_return = java_vm->DetachCurrentThread();
if (jni_return != JNI_OK)
return -5;
return 0;
}

void DrawTextCentered(const char *text)
{
ImGui::Separator();
ImGui::SetCursorPosX((ImGui::GetWindowWidth() - ImGui::CalcTextSize(text).x) / 2.f);
ImGui::Text(text);
ImGui::Separator();
}
void DrawText(std::string text) {
ImGui::SetCursorPosX((ImGui::GetWindowWidth() - ImGui::CalcTextSize(text.c_str()).x) / 2.f);
ImGui::Text(text.c_str());
}
void DrawTextCenteredAaaaamod(const char *text)
{

ImGui::SetCursorPosX((ImGui::GetWindowWidth() - ImGui::CalcTextSize(text).x) / 2.f);
ImGui::Button(text);

}
void DrawTextCenteredAaaaa(const char *text)
{
ImGui::Button(text);
}
namespace Settings
{
    static int Tab = 1;
}

 //=========================𝗕𝗨𝗬 𝗣𝗔𝗜𝗗 𝗕𝗬𝗣𝗔𝗦𝗦 @𝗪𝗜𝗡_𝗦𝗠_𝗬𝗧========================                                                                    

EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);

    EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
        eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
        eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
        if (glWidth <= 0 || glHeight <= 0)
            return orig_eglSwapBuffers(dpy, surface);

        if (!g_App)
            return orig_eglSwapBuffers(dpy, surface);

        screenWidth = ANativeWindow_getWidth(g_App->window);
        screenHeight = ANativeWindow_getHeight(g_App->window);
        density = AConfiguration_getDensity(g_App->config);

          
        if (!initImGui) {
        ImGui::CreateContext();
        ImGuiStyle * style = & ImGui::GetStyle();
        style->WindowRounding = 5.5f;
        style->FrameRounding = 8.0f;
        style->ScrollbarRounding = 1.0f;
        style->FrameBorderSize = 1.5f;
        style->WindowBorderSize = 1.5f;
        style->ScrollbarSize = 10;
        style->CircleTessellationMaxError    = 6.0f;
        style->WindowTitleAlign = ImVec2(0.5, 0.5);
        style->FramePadding = ImVec2(6, 4);
        
        ImVec4 *colors = style->Colors;
        colors[ImGuiCol_Text]                   = ImColor(0, 0, 0, 255);
        colors[ImGuiCol_TextDisabled]           = ImColor(0, 0, 0, 255);
        colors[ImGuiCol_WindowBg]               = ImColor(255, 255, 255, 155);
        colors[ImGuiCol_ChildBg]                = ImColor(255, 255, 255, 0);
        colors[ImGuiCol_PopupBg]                = ImColor(255, 255, 255, 155);
        colors[ImGuiCol_Border]                 = ImColor(255, 255, 255, 255);
        colors[ImGuiCol_CheckMark]              = ImColor(0, 0, 0, 255);
        colors[ImGuiCol_BorderShadow]           = ImColor(255, 255, 255, 255);
        colors[ImGuiCol_FrameBg]                = ImColor(255, 255, 255, 155);
        colors[ImGuiCol_FrameBgHovered]         = ImColor(255, 255, 255, 155);
        colors[ImGuiCol_FrameBgActive]          = ImColor(255, 255, 255, 155);
        colors[ImGuiCol_TitleBg]                = ImColor(255, 255, 255, 155);
        colors[ImGuiCol_TitleBgActive]          = ImColor(255, 255, 255, 155);
        colors[ImGuiCol_TitleBgCollapsed]       = ImColor(255, 255, 255, 155);
        colors[ImGuiCol_Button]                 = ImColor(255, 255, 255, 155);
        colors[ImGuiCol_ButtonHovered]          = ImColor(255, 255, 255, 155);
        colors[ImGuiCol_ButtonActive]           = ImColor(255, 255, 255, 155);
    
        style->WindowTitleAlign = ImVec2(0.5f, 0.5f) ;
        style->ScaleAllSizes(std::max(1.0f, density / 180.0f));
        style->ScrollbarSize *= 0.7f;
            ImGui_ImplAndroid_Init();
        ImGui_ImplOpenGL3_Init("#version 300 es");
ImGuiIO &io = ImGui::GetIO();

        io.ConfigWindowsMoveFromTitleBarOnly = true;
        io.IniFilename = NULL;

        static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
        ImFontConfig icons_config;

        ImFontConfig CustomFont;
        CustomFont.FontDataOwnedByAtlas = false;

        icons_config.MergeMode = true;
        icons_config.PixelSnapH = true;
        icons_config.OversampleH = 2.5;
        icons_config.OversampleV = 2.5;

       io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 21.f, &CustomFont);
        io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 19.0f, &icons_config, icons_ranges);

        ImFontConfig cfg;
        cfg.SizePixels = ((float) density / 25.0f);
        io.Fonts->AddFontDefault(&cfg);

        memset(&Config, 0, sizeof(sConfig));
        
cfg.SizePixels = ((float) density / 20.0f);
io.Fonts->AddFontDefault(&cfg);

memset(&Config, 0, sizeof(sConfig));
Config.ColorsESP.PVLine = CREATE_COLOR(0, 255, 0, 255);
Config.ColorsESP.PVILine = CREATE_COLOR(255, 0, 0, 255);
Config.ColorsESP.BVLine = CREATE_COLOR(0, 255, 255, 255);
Config.ColorsESP.BVILine = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.PVBox = CREATE_COLOR(0, 255, 0, 255);
Config.ColorsESP.PVIBox = CREATE_COLOR(255, 0, 0, 255);
Config.ColorsESP.BVBox = CREATE_COLOR(0, 255, 255, 255);
Config.ColorsESP.BVIBox = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.PVSkeleton = CREATE_COLOR(255, 199, 0, 255);
Config.ColorsESP.PVISkeleton = CREATE_COLOR(255, 255, 250, 255);
Config.ColorsESP.BVSkeleton = CREATE_COLOR(255, 0, 255, 255);
Config.ColorsESP.BVISkeleton = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.Name = CREATE_COLOR(255, 254, 255, 255);
Config.ColorsESP.TeamID = CREATE_COLOR(255, 255, 255, 255);

Config.AimMenu.FOVSize = 200.f;
Config.ESPMenu.RadarX = 70.5f;
Config.ESPMenu.RadarY = 2.5f;
initImGui = true;
ItSMeShakya();
}

ImGuiIO &io = ImGui::GetIO();
ImGui_ImplOpenGL3_NewFrame();
ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
ImGui::NewFrame();

DrawESP(ImGui::GetBackgroundDrawList());
ImGui::SetNextWindowSize(ImVec2((float)glWidth * 0.55f, (float)glHeight * 0.65f), ImGuiCond_Once);


 if (ImGui::Begin(OBFUSCATE(ICON_FA_STAR" ALTAB_BHAI 64 BIT SRC " ), 0, ImGuiWindowFlags_NoBringToFrontOnFocus )) {
		   
static float fps = 0.0f;
fps = ImGui::GetIO().Framerate;
char fpsText[32];

		   
 //if (ImGui::Begin(ModName.c_str(), 0, ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_AlwaysAutoResize)) {


static bool isLogin = true, logginIn = true;
	//  io.MouseDrawCursor = true;
        static std::string err;
        if (!isLogin) {
            ImGui::Spacing();
      //      ImGui::Text(OBFUSCATE(ICON_FA_STAR "" ICON_FA_STAR);
            ImGui::Spacing();
            ImGui::Text(ICON_FA_STAR " LOGIN TO CONTINUE");
            ImGui::Spacing();
            ImGui::PushItemWidth(-1);
            static char s[64];
            ImGui::InputText("##key", s, sizeof s);
            ImGui::PopItemWidth();
            if (ImGui::Button(ICON_FA_STAR " PASTE KEY", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {          
                auto key = getClipboardText();
                strncpy(s, key.c_str(), sizeof s); }
            static std::string err;
            if (ImGui::Button(ICON_FA_STAR " LOGIN TO CONTINUE " ICON_FA_STAR, ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                err = Login(s);
                if (err == "OK") {
                    isLogin = bValid && g_Auth == g_Token;
                } }
            if (!err.empty() && err != "OK") {
                 ImGui::Text(ICON_FA_STAR"", err.c_str());
            }  } else { 
			        
	        

if (ImGui::BeginTabBar("Tab", ImGuiTabBarFlags_FittingPolicyScroll)) {
if (ImGui::BeginTabItem("ESP MENU")) {

ImGui::BeginGroupPanel("ESP MENU", ImVec2(0.0f, 0.0f));
ImGui::RadioButton("LOGO BYPASS", &LOGO);
ImGui::RadioButton("LOBBY BYPASS", &LOBBY);
ImGui::Toggle("ISLAND BYPASS", &RajputBY);
ImGui::Toggle("ENABLE ESP", & Config.ESPMenu.Line);
ImGui::Toggle("LOOT BOX", &Config.ESPMenu.LootBox);
ImGui::Toggle("GRENADE WARNING", &Config.ESPMenu.Grenade);
ImGui::Toggle("ENEMY WEAPON ", &Config.ESPMenu.EnemyWeapon);
ImGui::Toggle("SCREEN ALERT", &Config.ESPMenu.OnScreen);
ImGui::Toggle("ALL VEHICLE ", &Config.ESPMenu.Vehicle);
ImGui::Spacing();
ImGui::EndGroupPanel();
ImGui::SameLine();
ImGui::BeginGroupPanel("", ImVec2(0.0f, 0.0f));
ImGui::BeginGroupPanel(" SDK HACK ", ImVec2(0.0f, 0.0f));
//ImGui::Toggle("BODY COLOR", &Config.MemoryTools.color); 
ImGui::Toggle("NO RECOIL", &Config.HighRisk.Recoil); 
//ImGui::Toggle("BLACK SKY", &blacksky);
//ImGui::Toggle("DASERT MAP", &dasertmap);
ImGui::Toggle("HEADSHOT", &Config.MemoryTools.headshot);
ImGui::Toggle("X EFFECT ", &Config.MemoryTools.XHitEffect);
ImGui::Toggle("FLASH SPEED V1", &Config.HighRisk.Flash);
ImGui::Toggle("FLASH SPEED V2", &flashbyrobinXD);
//ImGui::Toggle("KILL MESSAGE", &Config.HighRisk.KillMsg);
ImGui::Toggle("GAME INFO ", &Config.ESPMenu.GameInfo);
ImGui::Toggle("IGNORE BOT ", &Config.AimMenu.IgnoreBot);
ImGui::Toggle("RADAR ALERT ", &Config.ESPMenu.Radar);
ImGui::Spacing();
ImGui::EndGroupPanel();
ImGui::EndTabItem();
}
if (ImGui::BeginTabItem("BT + AMBOT")) {
ImGui::Toggle(" BULLET TRACK ", &Config.CalcShootRot.Enable);
ImGui::Toggle(" AUTO FIRE ", &Config.AimMenu.AutoFire);
ImGui::Toggle(" VISIBILITY CHECK ", &Config.ESPMenu.Line);
ImGui::Toggle(" 360 AIMBOT ", &Config.AimBot.Enable);
ImGui::Toggle(" CAR SHOOT", &Config.CalcShootRot.Enable);
ImGui::Text("TYPE: "); ImGui::SameLine();
static const char *type[] = {" TARGET BY DISTANCE ", " TARGET BY CROSSHAIR FOV "};
ImGui::Combo("##Type", (int *) &Config.AimMenu.Type, type, 2, -1);

if (Config.AimMenu.Type == EAimType::Croshhair) {
ImGui::Text("FOVSize:"); ImGui::SameLine();
ImGui::SliderFloat("##FOVSize", &Config.AimMenu.FOVSize, 0.0f, 500.0f);
}

ImGui::Text("TARGET: "); ImGui::SameLine();
static const char *targets[] = {"HEAD", "CHEST"};
ImGui::Combo("##Target", (int *) &Config.AimMenu.Target, targets, 2, -1);

ImGui::Text("TRIGGER: "); ImGui::SameLine();
static const char *triggers[] = {"NONE", "SHOOTING", "SCOPING", "BOTH (SHOOTING & SCOPING )", "ANY ( SHOOTING / SCOPING )"};
ImGui::Combo("##Trigger", (int *)&Config.AimMenu.Trigger, triggers, 5, -1);


ImGui::Toggle(" IGNORE KNOCKED", &Config.AimMenu.IgnoreKnocked);
ImGui::Toggle(" AIM VISIBILOTY CHECK", &Config.ESPMenu.Line);
ImGui::Toggle(" IGNORE BOT", &Config.AimMenu.IgnoreBot);
ImGui::EndTabItem();
}
if (ImGui::BeginTabItem(" ITEMS ")) {
ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 0.6f);
ImGui::PushStyleColor(ImGuiCol_Border, ImColor(100, 100, 100, 200).Value);
ImGui::PushStyleColor(ImGuiCol_ChildBg, ImColor(9, 36, 89, 0).Value);
ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 3.0f);
ImGui::BeginChild("jsjsjsbdjdjdj", ImVec2(700, 410), true);
ImGui::PopStyleVar(2);
ImGui::PopStyleColor(2);
for (auto & i : items_data) {
if (ImGui::BeginTable("split", 2)) {
for (auto & item : i["Items"]) {
ImGui::TableNextColumn();
ImGui::Toggle(item["itemName"].get<std::string>().c_str(), (bool *) & Items[item["itemId"].get<int>()]);
}
ImGui::EndTable();
}}
ImGui::EndChild();
ImGui::EndTabItem();
}
/*
if (ImGui::BeginTabItem(" SDK HACK ")) {
ImGui::BeginGroupPanel("", ImVec2(0.0f, 0.0f));
ImGui::Toggle("BODY COLOR", &Config.MemoryTools.color); 
ImGui::Toggle("NO RECOIL", &Config.HighRisk.Recoil); 
ImGui::Toggle("BLACK SKY", &blacksky);
ImGui::Toggle("DASERT MAP", &dasertmap);
ImGui::Toggle("HEADSHOT", &Config.MemoryTools.headshot);
ImGui::Toggle("X EFFECT ", &Config.MemoryTools.XHitEffect);
ImGui::Toggle("FLASH SPEED V1", &Config.HighRisk.Flash);
ImGui::Toggle("FLASH SPEED V2", &flashbyrobinXD);
ImGui::Toggle("KILL MESSAGE", &Config.HighRisk.KillMsg);
ImGui::Spacing();
ImGui::EndGroupPanel();
ImGui::EndTabItem();
}*/

	

ImGui::TableNextColumn();
if (ImGui::BeginTabItem( "ABOUT")) {
//DrawTextCenteredAaaaamod((ICON_FA_PASTE"WIN SATYA YT" ICON_FA_PASTE ));
ImGui::Spacing();
if(ImGui::Button(OBFUSCATE("CLICK HERE FREE KEY"), ImVec2(ImGui::GetContentRegionAvailWidth(),0))){
				
			OpenURL(OBFUSCATE("https://t.me/+yNqJMCWQX6MxZGZl"));
			}
			if(ImGui::Button(OBFUSCATE("CLICK SEND FEEDBACK ALL"), ImVec2(ImGui::GetContentRegionAvailWidth(),0))){
				
			OpenURL(OBFUSCATE("https://t.me/+yNqJMCWQX6MxZGZl"));
			}
			if(ImGui::Button(OBFUSCATE("JOIN FREE HACK MAIN ID SAFE "), ImVec2(ImGui::GetContentRegionAvailWidth(),0))){
				
			OpenURL(OBFUSCATE("https://t.me/+yNqJMCWQX6MxZGZl"));
			}
			if(ImGui::Button(OBFUSCATE("JOIN FREE CONFIG MAIN ID SAFE"), ImVec2(ImGui::GetContentRegionAvailWidth(),0))){
				
			OpenURL(OBFUSCATE("https://t.me/+yNqJMCWQX6MxZGZl"));
			}
			if(ImGui::Button(OBFUSCATE("BUY PREMIUM FLASH + BT PAID HACK"), ImVec2(ImGui::GetContentRegionAvailWidth(),0))){
				
			OpenURL(OBFUSCATE("https://t.me/+yNqJMCWQX6MxZGZl"));
			}

ImGui::EndTabItem();
}
ImGui::EndTabBar();
}
}
float textWidth = ImGui::CalcTextSize(ICON_FA_GAMEPAD " ALTAB_OP DEVELOPER ").x;
ImVec2 mainWindowPos = ImGui::GetWindowPos();
ImVec2 mainWindowSize = ImGui::GetWindowSize();
ImVec2 customPos = ImVec2(mainWindowPos.x + textWidth + 10, mainWindowPos.y + 7); // Automatically set x coordinate
ImDrawList* drawList = ImGui::GetForegroundDrawList();
drawList->AddText(customPos, IM_COL32_BLACK, fpsText);
}
ImGui::End();
ImGui::Render();


ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

return orig_eglSwapBuffers(dpy, surface);
}

int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);
int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
if (initImGui) {
ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
}
return orig_onInputEvent(app, inputEvent);
}

#define SLEEP_TIME 1000LL / 60LL
[[noreturn]] 
void *maps_thread(void *) {
while (true) {
auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

std::vector<sRegion> tmp;
char line[512];
FILE *f = fopen("/proc/self/maps", "r");
if (f)
{
while (fgets(line, sizeof line, f))
{
uintptr_t start, end;
char tmpProt[16];
if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %16s %*s %*s %*s %*s", &start, &end, tmpProt) > 0)
{
if (tmpProt[0] != 'r')
{
tmp.push_back({start, end});
}
}
}
fclose(f);
}
trapRegions = tmp;

auto object = UObject::GetGlobalObjects();
for (int i = 0; i < object.Num(); i++){
auto Object = object.GetByIndex(i);
if (isObjectInvalid(Object))
continue;




if (Config.HighRisk.FlashV1) {
if (Object->IsA(AWorldSettings::StaticClass())) {
auto playerChar = (AWorldSettings *) Object;
playerChar->MinUndilatedFrameTime = 0.097f;
}}
if (Config.MemoryTools.XHitEffect) {
kFox::SetSearchRange(RegionType::ALL);
kFox::MemorySearch( "10.0", Type::TYPE_FLOAT);
kFox::MemoryOffset( "46.0", 4, Type::TYPE_FLOAT);
kFox::MemoryWrite( "1999.0", 0, Type::TYPE_FLOAT);
kFox::ClearResult();
}
if (Config.HighRisk.Flash) {
    if (Object->IsA(ASTExtraBaseCharacter::StaticClass())) {
    auto playerChar = (ASTExtraBaseCharacter *) Object;           
    playerChar->CharacterOverrideAttrs.GameModeOverride_SpeedScaleModifier = 4;
    playerChar->CharacterOverrideAttrs.GameModeOverride_SwimSpeedScaleModifier = 6;
    playerChar->CharacterOverrideAttrs.GameModeOverride_LastBreathSpeedScaleModifier = 6;
    }} else if (Object->IsA(ASTExtraBaseCharacter::StaticClass())) {
    auto playerChar = (ASTExtraBaseCharacter *) Object;           
    playerChar->CharacterOverrideAttrs.GameModeOverride_SpeedScaleModifier = 1;
    playerChar->CharacterOverrideAttrs.GameModeOverride_SwimSpeedScaleModifier = 1;
    playerChar->CharacterOverrideAttrs.GameModeOverride_LastBreathSpeedScaleModifier = 1;
    }

if (Config.HighRisk.IPadView) {
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainYFOV;
}} else if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainXFOV;
}

if (Config.HighRisk.NoFog) {
if (Object->IsA(UExponentialHeightFogComponent::StaticClass())) {
auto playerChar = (UExponentialHeightFogComponent *) Object;
playerChar->SetStartDistance(0);
playerChar->SetFogMaxOpacity(0);
playerChar->SetFogHeightFalloff(0);
playerChar->SetFogDensity(0);
playerChar->SetFogCutoffDistance(0); 
}}

if (Config.HighRisk.Flash) {
if (Object->IsA(ASTExtraBaseCharacter::StaticClass())) {
auto playerChar = (ASTExtraBaseCharacter *) Object; 
playerChar->CharacterOverrideAttrs.GameModeOverride_SpeedScaleModifier = 4;
playerChar->CharacterOverrideAttrs.GameModeOverride_SwimSpeedScaleModifier = 6;
playerChar->CharacterOverrideAttrs.GameModeOverride_LastBreathSpeedScaleModifier = 6;
}} else if (Object->IsA(ASTExtraBaseCharacter::StaticClass())) {
auto playerChar = (ASTExtraBaseCharacter *) Object; 
playerChar->CharacterOverrideAttrs.GameModeOverride_SpeedScaleModifier = 1;
playerChar->CharacterOverrideAttrs.GameModeOverride_SwimSpeedScaleModifier = 1;
playerChar->CharacterOverrideAttrs.GameModeOverride_LastBreathSpeedScaleModifier = 1;
}}

auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
}
}

void *main_thread(void *) 
{
while (!UE4) {
UE4 = Tools::GetBaseAddress("libUE4.so");
sleep(1);
}
while (!ANOGS) {
ANOGS = Tools::GetBaseAddress("libanogs.so");
sleep(1);
}
while (!ANORT) {
ANORT = Tools::GetBaseAddress("libanort.so");
sleep(1);
}
while (!g_App) {
g_App = *(android_app **) (UE4 + GNativeApp_Offset);
sleep(1);
}
FName::GNames = GetGNames();
while (!FName::GNames) {
FName::GNames = GetGNames();
sleep(1);
}
UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);

orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
g_App->onInputEvent = onInputEvent;

void *egl = dlopen_ex("libEGL.so", 4);
HOOK(dlsym_ex(egl, "eglSwapBuffers"), _eglSwapBuffers, &orig_eglSwapBuffers);
dlclose_ex(egl);

//Tools::Hook((void *)(UE4 + 0x12BF438), (void *) CalcShootRot, (void **) &oCalcShootRot);

//@ALTAB_VIP
Patches.FLASH1 = MemoryPatch::createWithHex("libUE4.so", 0x350DA28, "C0 03 5F D6");
/*
Patches.hit1 = MemoryPatch::createWithHex("libUE4.so", 0x116E53C, "00 00 00 00");
Patches.hit2 = MemoryPatch::createWithHex("libUE4.so", 0x116E528, "00 00 00 00");
Patches.blacksky = MemoryPatch::createWithHex("libUE4.so", 0x28FF6D0, "B4 C6 27 B7");
Patches.dasertmap = MemoryPatch::createWithHex("libUE4.so", 0x217d2c4, "00 00 00 00");
Patches.norecoil = MemoryPatch::createWithHex("libUE4.so", 0xDB4C38, "00 00 00 00");
Patches.noshake = MemoryPatch::createWithHex("libUE4.so", 0x2648BE0, "00 00 00 00");
Patches.noshake1 = MemoryPatch::createWithHex("libUE4.so", 0x26C4D0C, "00 00 00 00")
;
Patches.FLASH = MemoryPatch::createWithHex("libUE4.so", 0x2D082A0, "00 00 00 00 10 0A 01 EE");
Patches.FLASH1 = MemoryPatch::createWithHex("libUE4.so", 0x2C33524, "00 00 14 41 2D 43 1C EB");
Patches.FLASH2 = MemoryPatch::createWithHex("libUE4.so", 0x267C938, "00 00 90 40");
*/

//@ALTAB_VIP 


pthread_t t;
pthread_create(&t, 0, maps_thread, 0);
items_data = json::parse(JSON_ITEMS);
 
return 0;
}

__attribute__((constructor)) void _init()
{
pthread_t t;
pthread_create(&t, 0, main_thread, 0);
}




