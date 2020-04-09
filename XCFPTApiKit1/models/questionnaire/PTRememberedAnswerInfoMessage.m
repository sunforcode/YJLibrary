// apic_version = 0.6.1
#import "PTRememberedAnswerInfoMessage.h"
@implementation PTRememberedAnswerInfoMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"answerInfoList" : [PTAnswerInfoMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"answerInfoList": @"answer_info_list",};
}
@end
