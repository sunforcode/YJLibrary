// apic_version = 0.6.1
#import "PTModel.h"
#import "PTQuestionTargetTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAskQuestionReqMessage : PTModel
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic, assign) PTQuestionTargetTypeEnum targetType;
@end
NS_ASSUME_NONNULL_END
