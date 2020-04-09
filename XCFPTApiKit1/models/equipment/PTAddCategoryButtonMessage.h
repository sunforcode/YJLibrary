// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  添加品类按钮信息
*/
@interface PTAddCategoryButtonMessage : PTModel
/**
  是否展示
*/
@property (nonatomic, assign) BOOL isShow;
@property (nonatomic, copy) NSString *text;
@end
NS_ASSUME_NONNULL_END
