// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSearchPageRecommendationKeywordMessage : PTModel
/**
  关键词
*/
@property (nonatomic, copy) NSString *keyword;
/**
  文案
*/
@property (nonatomic, copy) NSString *desc;
/**
  关键字的落地页
*/
@property (nonatomic, copy) NSString *url;
/**
  图片
*/
@property (nonatomic, strong) PTPictureDictMessage *image;
/**
  类型
*/
@property (nonatomic, copy) NSString *type;
@end
NS_ASSUME_NONNULL_END
