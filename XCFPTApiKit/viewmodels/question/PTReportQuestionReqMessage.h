// apic_version = 0.5.5
#import "PTModel.h"
#import "PTReportTypeEnum.h"
#import "PTQuestionTargetTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTReportQuestionReqMessage : PTModel
@property (nonatomic, copy) NSString *questionId;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic, assign) PTReportTypeEnum reportType;
@property (nonatomic, assign) PTQuestionTargetTypeEnum targetType;
@end
NS_ASSUME_NONNULL_END
