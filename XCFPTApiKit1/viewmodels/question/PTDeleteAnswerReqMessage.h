// apic_version = 0.6.1
#import "PTModel.h"
#import "PTQuestionTargetTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTDeleteAnswerReqMessage : PTModel
@property (nonatomic, copy) NSString *answerId;
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic, assign) PTQuestionTargetTypeEnum targetType;
@end
NS_ASSUME_NONNULL_END
