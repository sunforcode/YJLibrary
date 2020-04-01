// apic_version = 0.5.5
#import "PTReportAnswerReqMessage.h"
@implementation PTReportAnswerReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"answerId": @"answer_id",@"text": @"text",@"targetId": @"target_id",@"reportType": @"report_type",@"targetType": @"target_type",};
}
@end
