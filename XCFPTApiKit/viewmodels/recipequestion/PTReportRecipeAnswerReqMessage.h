// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTReportRecipeAnswerReqMessage : PTModel
@property (nonatomic, copy) NSString *answerId;
@property (nonatomic, copy) NSString *reportType;
@property (nonatomic, copy) NSString *text;
@end
NS_ASSUME_NONNULL_END
