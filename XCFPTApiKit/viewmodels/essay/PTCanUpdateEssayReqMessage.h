// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  查看故事是否能修改
*/
@interface PTCanUpdateEssayReqMessage : PTModel
@property (nonatomic, copy) NSString *essayId;
@end
NS_ASSUME_NONNULL_END
