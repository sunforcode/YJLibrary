// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  菜谱分类
*/
@interface PTRecipeCatsMessage : PTModel
/**
  分类名
*/
@property (nonatomic, copy) NSString *name;
/**
  分类页面 url
*/
@property (nonatomic, copy) NSString *url;
@end
NS_ASSUME_NONNULL_END
