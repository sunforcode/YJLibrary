// apic_version = 0.5.5
#import "PTReportQuestionReqMessage.h"
@implementation PTReportQuestionReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"question_id",@"text": @"text",@"targetId": @"target_id",@"reportType": @"report_type",@"targetType": @"target_type",};
}
@end
