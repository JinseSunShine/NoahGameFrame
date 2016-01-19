// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NFDefine.proto

#ifndef PROTOBUF_NFDefine_2eproto__INCLUDED
#define PROTOBUF_NFDefine_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace NFMsg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_NFDefine_2eproto();
void protobuf_AssignDesc_NFDefine_2eproto();
void protobuf_ShutdownFile_NFDefine_2eproto();


enum EGameEventCode {
  EGEC_SUCCESS = 0,
  EGEC_UNKOWN_ERROR = 1,
  EGEC_ACCOUNT_EXIST = 2,
  EGEC_ACCOUNTPWD_INVALID = 3,
  EGEC_ACCOUNT_USING = 4,
  EGEC_ACCOUNT_LOCKED = 5,
  EGEC_ACCOUNT_SUCCESS = 6,
  EGEC_VERIFY_KEY_SUCCESS = 7,
  EGEC_VERIFY_KEY_FAIL = 8,
  EGEC_SELECTSERVER_SUCCESS = 9,
  EGEC_SELECTSERVER_FAIL = 10,
  EGEC_CHARACTER_EXIST = 110,
  EGEC_SVRZONEID_INVALID = 111,
  EGEC_CHARACTER_NUMOUT = 112,
  EGEC_CHARACTER_INVALID = 113,
  EGEC_CHARACTER_NOTEXIST = 114,
  EGEC_CHARACTER_USING = 115,
  EGEC_CHARACTER_LOCKED = 116,
  EGEC_ZONE_OVERLOAD = 117,
  EGEC_NOT_ONLINE = 118,
  EGEC_ALREAY_IN_TEAM = 119,
  EGEC_INVALID_TEAM_INVITE = 120,
  EGEC_TEAM_FULL = 121,
  EGEC_MAIL_UPDATE_ERROR = 122,
  EGEC_MAIL_TONAME_INVALID = 123,
  EGEC_MAIL_DELETE_ERROR = 124,
  EGEC_MAIL_TOWNAME_EQUAL = 125,
  EGEC_LACK_MONEY = 126,
  EGEC_FULL_PACKAGE = 127,
  EGEC_INVALID_ITEM = 128,
  EGEC_INVALID_CONSIGNMENT = 129,
  EGEC_NOT_ENOUGH_VIP = 130,
  EGEC_NEED_LEVEL = 131,
  EGEC_MAX_FRIEND_LIST = 132,
  EGEC_MAX_ENEMY_LIST = 133,
  EGEC_MAX_GANGS_LSIT = 134,
  EGEC_LIMITS_TO_RIGHTS = 135,
  EGEC_INVALID_GANGS_NAME = 136,
  EGEC_REPEAT_ENTER_GANGS = 137,
  EGEC_INVALID_GANGSMEMBER = 138,
  EGEC_MASTER_LEAVE_GANGS = 139,
  EGEC_GANGS_TITLE_OUTOF = 140,
  EGEC_ENTER_GATEWAY_FAILD = 141,
  EGEC_NO_SERVER4ZONE = 142,
  EGEC_INVALID_SKILL = 143,
  EGEC_ENTER_GAME_SUCCESS = 144,
  EGEC_CREATE_GUILD_SUCCESS = 200,
  EGEC_JOIN_GUILD_SUCCESS = 201,
  EGEC_LEAVE_GUILD_SUCCESS = 202
};
bool EGameEventCode_IsValid(int value);
const EGameEventCode EGameEventCode_MIN = EGEC_SUCCESS;
const EGameEventCode EGameEventCode_MAX = EGEC_LEAVE_GUILD_SUCCESS;
const int EGameEventCode_ARRAYSIZE = EGameEventCode_MAX + 1;

const ::google::protobuf::EnumDescriptor* EGameEventCode_descriptor();
inline const ::std::string& EGameEventCode_Name(EGameEventCode value) {
  return ::google::protobuf::internal::NameOfEnum(
    EGameEventCode_descriptor(), value);
}
inline bool EGameEventCode_Parse(
    const ::std::string& name, EGameEventCode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EGameEventCode>(
    EGameEventCode_descriptor(), name, value);
}
enum EGameMsgID {
  EGMI_UNKNOW = 0,
  EGMI_EVENT_RESULT = 1,
  EGMI_EVENT_TRANSPOND = 2,
  EGMI_CLOSE_SOCKET = 3,
  EGMI_MTL_WORLD_REGISTERED = 10,
  EGMI_MTL_WORLD_UNREGISTERED = 11,
  EGMI_MTL_WORLD_REFRESH = 12,
  EGMI_LTM_LOGIN_REGISTERED = 20,
  EGMI_LTM_LOGIN_UNREGISTERED = 21,
  EGMI_LTM_LOGIN_REFRESH = 22,
  EGMI_PTWG_PROXY_REGISTERED = 30,
  EGMI_PTWG_PROXY_UNREGISTERED = 31,
  EGMI_PTWG_PROXY_REFRESH = 32,
  EGMI_GTW_GAME_REGISTERED = 40,
  EGMI_GTW_GAME_UNREGISTERED = 41,
  EGMI_GTW_GAME_REFRESH = 42,
  EGMI_STS_NET_INFO = 50,
  EGMI_STS_HEART_BEAT = 100,
  EGMI_REQ_LOGIN = 101,
  EGMI_ACK_LOGIN = 102,
  EGMI_REQ_LOGOUT = 103,
  EGMI_REQ_WORLD_LIST = 110,
  EGMI_ACK_WORLD_LIST = 111,
  EGMI_REQ_CONNECT_WORLD = 112,
  EGMI_ACK_CONNECT_WORLD = 113,
  EGMI_REQ_KICK_CLIENT_INWORLD = 114,
  EGMI_REQ_CONNECT_KEY = 120,
  EGMI_ACK_CONNECT_KEY = 122,
  EGMI_REQ_SELECT_SERVER = 130,
  EGMI_ACK_SELECT_SERVER = 131,
  EGMI_REQ_ROLE_LIST = 132,
  EGMI_ACK_ROLE_LIST = 133,
  EGMI_REQ_CREATE_ROLE = 134,
  EGMI_REQ_DELETE_ROLE = 135,
  EGMI_REQ_RECOVER_ROLE = 136,
  EGMI_REQ_ENTER_GAME = 150,
  EGMI_ACK_ENTER_GAME = 151,
  EGMI_REQ_LEAVE_GAME = 152,
  EGMI_ACK_LEAVE_GAME = 153,
  EGMI_REQ_SWAP_GAME = 154,
  EGMI_REQ_SWAP_SCENE = 155,
  EGMI_ACK_SWAP_SCENE = 156,
  EGMI_REQ_END_BATTLE = 157,
  EGMI_ACK_END_BATTLE = 158,
  EGMI_ACK_OBJECT_ENTRY = 200,
  EGMI_ACK_OBJECT_LEAVE = 201,
  EGMI_ACK_OBJECT_PROPERTY_ENTRY = 202,
  EGMI_ACK_OBJECT_RECORD_ENTRY = 203,
  EGMI_ACK_PROPERTY_INT = 210,
  EGMI_ACK_PROPERTY_FLOAT = 211,
  EGMI_ACK_PROPERTY_STRING = 212,
  EGMI_ACK_PROPERTY_DOUBLE = 213,
  EGMI_ACK_PROPERTY_OBJECT = 214,
  EGMI_ACK_ADD_ROW = 220,
  EGMI_ACK_REMOVE_ROW = 221,
  EGMI_ACK_SWAP_ROW = 222,
  EGMI_ACK_RECORD_INT = 223,
  EGMI_ACK_RECORD_FLOAT = 224,
  EGMI_ACK_RECORD_DOUBLE = 225,
  EGMI_ACK_RECORD_STRING = 226,
  EGMI_ACK_RECORD_OBJECT = 227,
  EGMI_ACK_RECORD_CLEAR = 228,
  EGMI_ACK_RECORD_SORT = 229,
  EGMI_REQ_MOVE = 230,
  EGMI_ACK_MOVE = 231,
  EGMI_REQ_MOVE_IMMUNE = 232,
  EGMI_ACK_MOVE_IMMUNE = 233,
  EGMI_REQ_SKILL_OBJECTX = 240,
  EGMI_ACK_SKILL_OBJECTX = 241,
  EGMI_REQ_SKILL_POS = 242,
  EGMI_ACK_SKILL_POS = 243,
  EGMI_REQ_ITEM_OBJECT = 244,
  EGMI_ACK_ITEM_OBJECT = 245,
  EGMI_REQ_ITEM_POS = 246,
  EGMI_ACK_ITEM_POS = 247,
  EGMI_REQ_CHAT = 250,
  EGMI_ACK_CHAT = 251,
  EGMI_REQ_SALE_ITEM = 252,
  EGMI_REQ_SPLIT_ITEM = 253,
  EGMI_REQ_PRODUCE_ITEM = 254,
  EGMI_REQ_PICK_ITEM = 255,
  EGMI_REQ_ACCEPT_TASK = 256,
  EGMI_REQ_COMPELETE_TASK = 257,
  EGMI_REQ_JOIN_PVP = 260,
  EGMI_REQ_EXIT_PVP = 261,
  EGMT_ACK_START_PVP = 262,
  EGMI_REQ_SEARCH_OPPNENT = 280,
  EGMI_ACK_SEARCH_OPPNENT = 281,
  EGMT_REQ_START_OPPNENT = 282,
  EGMT_ACK_START_OPPNENT = 283,
  EGMI_ACK_ONLINE_NOTIFY = 290,
  EGMI_ACK_OFFLINE_NOTIFY = 291,
  EGMI_REQ_CREATE_GUILD = 300,
  EGMI_ACK_CREATE_GUILD = 301,
  EGMI_REQ_JOIN_GUILD = 302,
  EGMI_ACK_JOIN_GUILD = 303,
  EGMI_REQ_LEAVE_GUILD = 304,
  EGMI_ACK_LEAVE_GUILD = 305,
  EGMI_REQ_OPR_GUILD = 306,
  EGMI_ACK_OPR_GUILD = 307,
  EGMI_REQ_SEARCH_GUILD = 308,
  EGMI_ACK_SEARCH_GUILD = 309,
  EGMI_REQ_OPR_GUILDINFO = 310,
  EGMI_ACK_OPR_GUILDINFO = 311,
  EGEC_REQ_CREATE_CHATGROUP = 400,
  EGEC_ACK_CREATE_CHATGROUP = 401,
  EGEC_REQ_JOIN_CHATGROUP = 402,
  EGEC_ACK_JOIN_CHATGROUP = 403,
  EGEC_REQ_LEAVE_CHATGROUP = 404,
  EGEC_ACK_LEAVE_CHATGROUP = 405,
  EGEC_REQ_SUBSCRIPTION_CHATGROUP = 406,
  EGEC_REQ_CANCELSUBSCRIPTION_CHATGROUP = 407,
  EGEC_REQ_INVITE_CHATGROUP = 408,
  EGEC_ACK_INVITE_CHATGROUP = 409,
  EGEC_REQ_KICK_CHATGROUP = 410,
  EGEC_ACK_KICK_CHATGROUP = 411,
  EGEC_REQ_CHATGROUP_TO_TEAM = 450,
  EGEC_ACK_CHATGROUP_TO_TEAM = 451,
  EGEC_REQ_INTENSIFYLEVEL_TO_EQUIP = 500,
  EGEC_ACK_INTENSIFYLEVEL_TO_EQUIP = 501,
  EGEC_REQ_HOLE_TO_EQUIP = 502,
  EGEC_ACK_HOLE_TO_EQUIP = 503,
  EGEC_REQ_INLAYSTONE_TO_EQUIP = 504,
  EGEC_ACK_INLAYSTONE_TO_EQUIP = 505,
  EGEC_REQ_ELEMENTLEVEL_TO_EQUIP = 506,
  EGEC_ACK_ELEMENTLEVEL_TO_EQUIP = 507,
  EGEC_REQ_SET_FIGHT_HERO = 508,
  EGEC_WEAR_EQUIP = 509,
  EGEC_TAKEOFF_EQUIP = 510,
  EGMI_REQ_CMD_PROPERTY_INT = 1000,
  EGMI_REQ_CMD_PROPERTY_STR = 1001,
  EGMI_REQ_CMD_PROPERTY_OBJECT = 1002,
  EGMI_REQ_CMD_PROPERTY_FLOAT = 1003,
  EGMI_REQ_CMD_RECORD_INT = 1004,
  EGMI_REQ_CMD_RECORD_STR = 1005,
  EGMI_REQ_CMD_RECORD_OBJECT = 1006,
  EGMI_REQ_CMD_RECORD_FLOAT = 1007,
  EGMI_REQ_BUY_FORM_SHOP = 10000,
  EGMI_ACK_BUY_FORM_SHOP = 10001,
  EGMI_REQ_MOVE_BUILD_OBJECT = 10002,
  EGMI_ACK_MOVE_BUILD_OBJECT = 10003,
  EGMI_REQ_UP_BUILD_LVL = 10101,
  EGMI_REQ_CREATE_ITEM = 10102,
  EGMI_REQ_BUILD_OPERATE = 10103
};
bool EGameMsgID_IsValid(int value);
const EGameMsgID EGameMsgID_MIN = EGMI_UNKNOW;
const EGameMsgID EGameMsgID_MAX = EGMI_REQ_BUILD_OPERATE;
const int EGameMsgID_ARRAYSIZE = EGameMsgID_MAX + 1;

const ::google::protobuf::EnumDescriptor* EGameMsgID_descriptor();
inline const ::std::string& EGameMsgID_Name(EGameMsgID value) {
  return ::google::protobuf::internal::NameOfEnum(
    EGameMsgID_descriptor(), value);
}
inline bool EGameMsgID_Parse(
    const ::std::string& name, EGameMsgID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EGameMsgID>(
    EGameMsgID_descriptor(), name, value);
}
enum EItemType {
  EIT_NORMAL = 0,
  EIT_EQUIP = 1,
  EIT_BOUNTY = 2,
  EIT_HERO_CARD = 3,
  EIT_HERO_STONE = 4,
  EIT_STRENGTHEN_STONE = 5,
  EIT_DEMONIZATION_STONE = 6,
  EIT_GEM_STONE = 7,
  EIT_WOOD = 100,
  EIT_STONE = 101
};
bool EItemType_IsValid(int value);
const EItemType EItemType_MIN = EIT_NORMAL;
const EItemType EItemType_MAX = EIT_STONE;
const int EItemType_ARRAYSIZE = EItemType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EItemType_descriptor();
inline const ::std::string& EItemType_Name(EItemType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EItemType_descriptor(), value);
}
inline bool EItemType_Parse(
    const ::std::string& name, EItemType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EItemType>(
    EItemType_descriptor(), name, value);
}
enum EGameEquipSubType {
  EQUIPTYPE_WEAPON = 0,
  EQUIPTYPE_ARMOR = 1,
  EQUIPTYPE_NECKLACE = 2,
  EQUIPTYPE_RING = 3,
  EQUIPTYPE_EARRINGS = 4,
  EQUIPTYPE_BADGE = 5,
  EQUIPTYPE_HELMET = 6,
  EQUIPTYPE_SHAWL = 7,
  EQUIPTYPE_GLOVE = 8,
  EQUIPTYPE_WRIST = 9,
  EQUIPTYPE_BELT = 10,
  EQUIPTYPE_PANT = 11,
  EQUIPTYPE_BOOT = 12,
  EQUIPTYPE_WING = 13,
  EQUIPTYPE_CLOAK = 14,
  EQUIPTYPE_FASHION = 15
};
bool EGameEquipSubType_IsValid(int value);
const EGameEquipSubType EGameEquipSubType_MIN = EQUIPTYPE_WEAPON;
const EGameEquipSubType EGameEquipSubType_MAX = EQUIPTYPE_FASHION;
const int EGameEquipSubType_ARRAYSIZE = EGameEquipSubType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EGameEquipSubType_descriptor();
inline const ::std::string& EGameEquipSubType_Name(EGameEquipSubType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EGameEquipSubType_descriptor(), value);
}
inline bool EGameEquipSubType_Parse(
    const ::std::string& name, EGameEquipSubType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EGameEquipSubType>(
    EGameEquipSubType_descriptor(), name, value);
}
enum EGameElementType {
  EELEMENTTYPE_FLY = 0,
  EELEMENTTYPE_FIRE = 1,
  EELEMENTTYPE_THUNDER = 2,
  EELEMENTTYPE_SOIL = 3,
  EELEMENTTYPE_WATER = 4
};
bool EGameElementType_IsValid(int value);
const EGameElementType EGameElementType_MIN = EELEMENTTYPE_FLY;
const EGameElementType EGameElementType_MAX = EELEMENTTYPE_WATER;
const int EGameElementType_ARRAYSIZE = EGameElementType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EGameElementType_descriptor();
inline const ::std::string& EGameElementType_Name(EGameElementType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EGameElementType_descriptor(), value);
}
inline bool EGameElementType_Parse(
    const ::std::string& name, EGameElementType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EGameElementType>(
    EGameElementType_descriptor(), name, value);
}
enum EGameItemSubType {
  EGIT_ITEM_NONE = 0,
  EGIT_ITEM_PROPERTY_CARD = 1,
  EGIT_ITEM_PVP_ATTACK_CARD = 2,
  EGIT_ITEM_PVP_DEFENSE_CARD = 3,
  EGIT_ITEM_SKILL_CARD = 4,
  EGIT_ITEM_GUILD_SKILL_CARD = 5,
  EGIT_ITEM_GUILD_DIAMOND = 6,
  EGIT_ITEM_POSITION = 7,
  EGIT_ITEM_WORLD_HORN = 8,
  EGIT_ITEM_REBORN = 9
};
bool EGameItemSubType_IsValid(int value);
const EGameItemSubType EGameItemSubType_MIN = EGIT_ITEM_NONE;
const EGameItemSubType EGameItemSubType_MAX = EGIT_ITEM_REBORN;
const int EGameItemSubType_ARRAYSIZE = EGameItemSubType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EGameItemSubType_descriptor();
inline const ::std::string& EGameItemSubType_Name(EGameItemSubType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EGameItemSubType_descriptor(), value);
}
inline bool EGameItemSubType_Parse(
    const ::std::string& name, EGameItemSubType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EGameItemSubType>(
    EGameItemSubType_descriptor(), name, value);
}
enum EGameItemExpiredType {
  EGIET_NONE = 0,
  EGIET_USE_TIMES = 1,
  EGIET_REAL_TIME = 2,
  EGIET_END_INDEX = 3
};
bool EGameItemExpiredType_IsValid(int value);
const EGameItemExpiredType EGameItemExpiredType_MIN = EGIET_NONE;
const EGameItemExpiredType EGameItemExpiredType_MAX = EGIET_END_INDEX;
const int EGameItemExpiredType_ARRAYSIZE = EGameItemExpiredType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EGameItemExpiredType_descriptor();
inline const ::std::string& EGameItemExpiredType_Name(EGameItemExpiredType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EGameItemExpiredType_descriptor(), value);
}
inline bool EGameItemExpiredType_Parse(
    const ::std::string& name, EGameItemExpiredType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EGameItemExpiredType>(
    EGameItemExpiredType_descriptor(), name, value);
}
enum EDrawDropItemState {
  E_DRAW_STATE_NONE = 0,
  E_DRAW_STATE_GAIN = 1,
  E_DRAW_STATE_RECV = 2
};
bool EDrawDropItemState_IsValid(int value);
const EDrawDropItemState EDrawDropItemState_MIN = E_DRAW_STATE_NONE;
const EDrawDropItemState EDrawDropItemState_MAX = E_DRAW_STATE_RECV;
const int EDrawDropItemState_ARRAYSIZE = EDrawDropItemState_MAX + 1;

const ::google::protobuf::EnumDescriptor* EDrawDropItemState_descriptor();
inline const ::std::string& EDrawDropItemState_Name(EDrawDropItemState value) {
  return ::google::protobuf::internal::NameOfEnum(
    EDrawDropItemState_descriptor(), value);
}
inline bool EDrawDropItemState_Parse(
    const ::std::string& name, EDrawDropItemState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EDrawDropItemState>(
    EDrawDropItemState_descriptor(), name, value);
}
enum EGuildPowerType {
  GUILD_POWER_TYPE_NORMAL = 0,
  GUILD_POWER_TYPE_VICE_PRESIDENT = 1,
  GUILD_POWER_TYPE_PRESIDENT = 2
};
bool EGuildPowerType_IsValid(int value);
const EGuildPowerType EGuildPowerType_MIN = GUILD_POWER_TYPE_NORMAL;
const EGuildPowerType EGuildPowerType_MAX = GUILD_POWER_TYPE_PRESIDENT;
const int EGuildPowerType_ARRAYSIZE = EGuildPowerType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EGuildPowerType_descriptor();
inline const ::std::string& EGuildPowerType_Name(EGuildPowerType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EGuildPowerType_descriptor(), value);
}
inline bool EGuildPowerType_Parse(
    const ::std::string& name, EGuildPowerType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EGuildPowerType>(
    EGuildPowerType_descriptor(), name, value);
}
enum ETaskState {
  TASK_IN_PROCESS = 0,
  TASK_DONE = 1,
  TASK_DRAW_AWARD = 2,
  TASK_FINISH = 3
};
bool ETaskState_IsValid(int value);
const ETaskState ETaskState_MIN = TASK_IN_PROCESS;
const ETaskState ETaskState_MAX = TASK_FINISH;
const int ETaskState_ARRAYSIZE = ETaskState_MAX + 1;

const ::google::protobuf::EnumDescriptor* ETaskState_descriptor();
inline const ::std::string& ETaskState_Name(ETaskState value) {
  return ::google::protobuf::internal::NameOfEnum(
    ETaskState_descriptor(), value);
}
inline bool ETaskState_Parse(
    const ::std::string& name, ETaskState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ETaskState>(
    ETaskState_descriptor(), name, value);
}
enum ETaskType {
  TASK_LEVEL_UPDATE_SOME_LEVEL = 0,
  TASK_PASS_ECTYPE = 1,
  TASK_PASS_ECTYPE_COUNT = 2,
  TASK_PASS_SOME_TYPE_ECTYPE_COUNT = 3,
  TASK_UPDATE_SKILL_COUNT = 4,
  TASK_CONSUME_MONEY = 5,
  TASK_CONSUME_DIAMOND = 6,
  TASK_ARENA_COUNT = 7,
  TASK_KILL_MONSTER_COUNT = 8,
  TASK_KILL_SOME_MONSTER_COUNT = 9
};
bool ETaskType_IsValid(int value);
const ETaskType ETaskType_MIN = TASK_LEVEL_UPDATE_SOME_LEVEL;
const ETaskType ETaskType_MAX = TASK_KILL_SOME_MONSTER_COUNT;
const int ETaskType_ARRAYSIZE = ETaskType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ETaskType_descriptor();
inline const ::std::string& ETaskType_Name(ETaskType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ETaskType_descriptor(), value);
}
inline bool ETaskType_Parse(
    const ::std::string& name, ETaskType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ETaskType>(
    ETaskType_descriptor(), name, value);
}
enum EBattleType {
  BATTLE_SINGLE = 0,
  BATTLE_PVE_TEAM = 1
};
bool EBattleType_IsValid(int value);
const EBattleType EBattleType_MIN = BATTLE_SINGLE;
const EBattleType EBattleType_MAX = BATTLE_PVE_TEAM;
const int EBattleType_ARRAYSIZE = EBattleType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EBattleType_descriptor();
inline const ::std::string& EBattleType_Name(EBattleType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EBattleType_descriptor(), value);
}
inline bool EBattleType_Parse(
    const ::std::string& name, EBattleType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EBattleType>(
    EBattleType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace NFMsg

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::EGameEventCode>() {
  return ::NFMsg::EGameEventCode_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::EGameMsgID>() {
  return ::NFMsg::EGameMsgID_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::EItemType>() {
  return ::NFMsg::EItemType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::EGameEquipSubType>() {
  return ::NFMsg::EGameEquipSubType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::EGameElementType>() {
  return ::NFMsg::EGameElementType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::EGameItemSubType>() {
  return ::NFMsg::EGameItemSubType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::EGameItemExpiredType>() {
  return ::NFMsg::EGameItemExpiredType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::EDrawDropItemState>() {
  return ::NFMsg::EDrawDropItemState_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::EGuildPowerType>() {
  return ::NFMsg::EGuildPowerType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::ETaskState>() {
  return ::NFMsg::ETaskState_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::ETaskType>() {
  return ::NFMsg::ETaskType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NFMsg::EBattleType>() {
  return ::NFMsg::EBattleType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_NFDefine_2eproto__INCLUDED
