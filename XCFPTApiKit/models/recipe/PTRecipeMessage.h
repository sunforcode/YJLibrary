// apic_version = 0.5.5
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTUserMessage.h"
#import "PTRecipeLabelMessage.h"
#import "PTRecipeAdaptationMessage.h"
#import "PTUserMessage.h"
#import "PTIngredientMessage.h"
#import "PTInstructionMessage.h"
#import "PTRecipeCatsMessage.h"
#import "PTRecipeStatsMessage.h"
#import "PTVideoDictMessage.h"
#import "PTVideoDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  菜谱
*/
@interface PTRecipeMessage : PTModel
@property (nonatomic, copy) NSString *recipeId;
@property (nonatomic, copy) NSString *name;
/**
  用户填写的一段简介
*/
@property (nonatomic, copy) NSString *desc;
/**
  首图
*/
@property (nonatomic, copy) NSString *photo;
/**
  首图详情
*/
@property (nonatomic, strong) PTPictureDictMessage *image;
/**
  是否有双头像
*/
@property (nonatomic, assign) BOOL hasMinorAvatar;
/**
  双头像菜谱会有第二个作者
*/
@property (nonatomic, strong) PTUserMessage *minorAuthor;
/**
  是否是改编菜谱
*/
@property (nonatomic, assign) BOOL isAdaptationRecipe;
/**
  属于这个菜谱的 Labels
*/
@property (nonatomic, strong) NSArray<PTRecipeLabelMessage *> *labels;
/**
  改编信息
*/
@property (nonatomic, strong) PTRecipeAdaptationMessage *adaptation;
/**
  菜谱的主作者
*/
@property (nonatomic, strong) PTUserMessage *author;
/**
  完整 url
*/
@property (nonatomic, copy) NSString *url;
/**
  原料
*/
@property (nonatomic, strong) NSArray<PTIngredientMessage *> *ingredient;
/**
  步骤
*/
@property (nonatomic, strong) NSArray<PTInstructionMessage *> *instruction;
/**
  小贴士
*/
@property (nonatomic, copy) NSString *tips;
/**
  是否是智能菜谱 (xiachufang#4468)
*/
@property (nonatomic, assign) BOOL isIntellective DEPRECATED_ATTRIBUTE;
/**
  菜谱所属的分类
*/
@property (nonatomic, strong) NSArray<PTRecipeCatsMessage *> *recipeCats DEPRECATED_ATTRIBUTE;
/**
  编辑, 系统, 作者打的分类
*/
@property (nonatomic, strong) NSArray<NSString *> *originalCategories;
/**
  图片标识, 看起来像文件名
*/
@property (nonatomic, copy) NSString *ident;
/**
  不同清晰度的图片
*/
@property (nonatomic, copy) NSString *photo80 DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *photo90 DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *photo140 DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *photo280 DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *photo340 DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *photo526 DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *photo580 DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *photo640 DEPRECATED_ATTRIBUTE;
/**
  预览图 url
*/
@property (nonatomic, copy) NSString *thumb DEPRECATED_ATTRIBUTE;
/**
  类似 2016-01-25 15:09:12 的创建时间
*/
@property (nonatomic, copy) NSString *createTime;
/**
  人类友好的创建时间
*/
@property (nonatomic, copy) NSString *friendlyCreateTime;
/**
  菜谱分数
*/
@property (nonatomic, assign) double score;
/**
  是否是独家菜谱
*/
@property (nonatomic, assign) BOOL isExclusive;
/**
  是否是全屏交互菜谱
*/
@property (nonatomic, assign) BOOL isFullscreen;
/**
  菜谱统计
*/
@property (nonatomic, strong) PTRecipeStatsMessage *stats;
/**
  视频
*/
@property (nonatomic, strong) PTVideoDictMessage *vodVideo;
/**
  是否被我收藏
*/
@property (nonatomic, assign) BOOL collectedByMe;
@property (nonatomic, strong) PTVideoDictMessage *coverMicroVideo;
@end
NS_ASSUME_NONNULL_END
