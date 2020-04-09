// apic_version = 0.6.1
#import "PTReportRecipeAnswerReqMessage.h"
@implementation PTReportRecipeAnswerReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"answerId": @"answer_id",@"reportType": @"report_type",@"text": @"text",};
}
@end
