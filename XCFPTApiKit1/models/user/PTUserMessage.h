// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTUserSocialNamesMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  这个与newage下dump_user返回的结构有点不同，没有recent_dishes这种信息
 因为user的可复用结构中就不应该包含recent_dishes这种信息，如果需要则需要通过一个api来请求才对.
*/
@interface PTUserMessage : PTModel
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *photo DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *photo60 DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *photo160 DEPRECATED_ATTRIBUTE;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *mail;
/**
  是否是认证厨师
*/
@property (nonatomic, assign) BOOL isExpert;
/**
  介绍这个认证厨师
*/
@property (nonatomic, copy) NSString *expertInfoStr;
/**
  是否是 IM 公众号用户
*/
@property (nonatomic, assign) BOOL isMp;
@property (nonatomic, copy) NSString *url;
/**
  曾经是会员
*/
@property (nonatomic, assign) BOOL hasUserBeenPrime;
/**
  现在是否是会员
*/
@property (nonatomic, assign) BOOL isPrimeAvaliable;
@property (nonatomic, copy) NSString *desc;
/**
  男、女、其他
*/
@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *birthday;
@property (nonatomic, copy) NSString *hometownLocation;
@property (nonatomic, copy) NSString *currentLocation;
@property (nonatomic, copy) NSString *profession;
@property (nonatomic, copy) NSString *createTime;
/**
  人类友好的关注数
*/
@property (nonatomic, copy) NSString *humanFriendlyNFollow;
/**
  人类友好的被关注数
*/
@property (nonatomic, copy) NSString *humanFriendlyNFollowed;
@property (nonatomic, assign) int32_t nEquipments;
@property (nonatomic, assign) int32_t nRecipes;
@property (nonatomic, assign) int32_t nDishes;
@property (nonatomic, assign) int32_t nCollects;
@property (nonatomic, assign) int32_t nPosts;
@property (nonatomic, assign) int32_t nCourses;
@property (nonatomic, assign) int32_t nBuybuybuy;
@property (nonatomic, strong) PTUserSocialNamesMessage *tpNickname;
/**
  人类友好的总被收藏数
*/
@property (nonatomic, copy) NSString *humanFriendlyNTotalRecipeCollects;
/**
  人类友好的总被做过数
*/
@property (nonatomic, copy) NSString *humanFriendlyNTotalRecipeDishes;
/**
  人类友好的总被点赞数
*/
@property (nonatomic, copy) NSString *humanFriendlyNTotalDishDigges;
/**
  是否是我关注的作者
*/
@property (nonatomic, assign) BOOL isFollowing;
@property (nonatomic, assign) int32_t nFollow;
@property (nonatomic, assign) int32_t nFollowed;
@property (nonatomic, assign) int32_t nEssays;
@end
NS_ASSUME_NONNULL_END
