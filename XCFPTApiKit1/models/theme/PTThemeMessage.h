// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTThemeMessage : PTModel
@property (nonatomic, copy) NSString *themeId;
/**
  真实名称，全局唯一，比如 早餐 2019-06-10
*/
@property (nonatomic, copy) NSString *name;
/**
  显示名称，比如 早餐
*/
@property (nonatomic, copy) NSString *displayName;
/**
  描述，例如 「234 个故事」
*/
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *updateTime;
@property (nonatomic, copy) NSString *url;
/**
  封面图
*/
@property (nonatomic, strong) PTPictureDictMessage *image;
@end
NS_ASSUME_NONNULL_END
