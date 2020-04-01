// apic_version = 0.5.5
#import "PTUserAnswerMessage.h"
@implementation PTUserAnswerMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"answerInfoList" : [PTAnswerInfoMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"answerInfoList": @"answer_info_list",};
}
@end
