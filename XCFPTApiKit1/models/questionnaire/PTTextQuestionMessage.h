// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTTextQuestionMessage : PTModel
@property (nonatomic, assign) int32_t questionId;
@property (nonatomic, copy) NSString *desc;
@end
NS_ASSUME_NONNULL_END
