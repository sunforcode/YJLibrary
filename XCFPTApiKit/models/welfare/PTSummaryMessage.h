// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSummaryMessage : PTModel
/**
  对应汇总的对象
*/
@property (nonatomic, copy) NSString *key;
/**
  汇总的值(总共的数量)
*/
@property (nonatomic, assign) int32_t value;
@end
NS_ASSUME_NONNULL_END
