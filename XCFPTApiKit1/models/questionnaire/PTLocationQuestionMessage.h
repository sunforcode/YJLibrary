// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  位置问题，本来类型属于多填空问题，这里使用比较独立，就单独给个定义
*/
@interface PTLocationQuestionMessage : PTModel
@property (nonatomic, assign) int32_t questionId;
@property (nonatomic, copy) NSString *desc;
@end
NS_ASSUME_NONNULL_END
