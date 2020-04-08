// apic_version = 0.5.5
#import "PTModel.h"
#import "PTReportTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTReportEssayCommentReqMessage : PTModel
@property (nonatomic, copy) NSString *essayCommentId;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) PTReportTypeEnum reportType;
@end
NS_ASSUME_NONNULL_END
