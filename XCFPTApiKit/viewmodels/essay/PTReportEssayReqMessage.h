// apic_version = 0.5.5
#import "PTModel.h"
#import "PTReportTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTReportEssayReqMessage : PTModel
@property (nonatomic, copy) NSString *essayId;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) PTReportTypeEnum reportType;
@end
NS_ASSUME_NONNULL_END
