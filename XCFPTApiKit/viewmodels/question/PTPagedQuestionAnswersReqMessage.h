// apic_version = 0.5.5
#import "PTModel.h"
#import "PTQuestionTargetTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedQuestionAnswersReqMessage : PTModel
@property (nonatomic, copy) NSString *questionId;
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic, assign) PTQuestionTargetTypeEnum targetType;
@end
NS_ASSUME_NONNULL_END
