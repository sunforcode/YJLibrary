// apic_version = 0.5.5
#import "PTReportEssayCommentReqMessage.h"
@implementation PTReportEssayCommentReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"essayCommentId": @"essay_comment_id",@"text": @"text",@"reportType": @"report_type",};
}
@end
