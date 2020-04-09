// apic_version = 0.6.1
#import "PTReportEssayReqMessage.h"
@implementation PTReportEssayReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"essayId": @"essay_id",@"text": @"text",@"reportType": @"report_type",};
}
@end
