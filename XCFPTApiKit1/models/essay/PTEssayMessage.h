// apic_version = 0.6.1
#import "PTModel.h"
#import "PTParagraphMessage.h"
#import "PTPictureDictMessage.h"
#import "PTUserMessage.h"
#import "PTThemeMessage.h"
#import "PTAtUsersMessage.h"
#import "PTUserMessage.h"
#import "PTEssayTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTEssayMessage : PTModel
@property (nonatomic, copy) NSString *essayId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *updateTime;
@property (nonatomic, strong) NSArray<PTParagraphMessage *> *paras;
/**
  此处因为有可能多图拼图，所以重复
*/
@property (nonatomic, strong) NSArray<PTPictureDictMessage *> *images;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) int32_t nDiggs;
@property (nonatomic, assign) int32_t nComment;
@property (nonatomic, assign) int32_t nCollect;
@property (nonatomic, assign) BOOL isCollectByMe;
@property (nonatomic, assign) BOOL isDiggedByMe;
@property (nonatomic, strong) NSArray<PTThemeMessage *> *themes;
@property (nonatomic, assign) int32_t nPv;
/**
  每个步骤对应一个元素，每个元素是一个数组，里面是一堆用户
*/
@property (nonatomic, strong) NSArray<PTAtUsersMessage *> *atUsers;
/**
  标题存在一定逻辑，因为逻辑可能会变，直接让客户端遵守逻辑不太好，所以新加个字段
*/
@property (nonatomic, strong) NSArray<PTUserMessage *> *titleAtUsers;
@property (nonatomic, assign) PTEssayTypeEnum essayType;
@end
NS_ASSUME_NONNULL_END
