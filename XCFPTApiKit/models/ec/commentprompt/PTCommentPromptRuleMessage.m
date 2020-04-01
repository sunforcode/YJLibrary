// apic_version = 0.5.5
#import "PTCommentPromptRuleMessage.h"
@implementation PTCommentPromptRuleMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"textCondition": @"text_condition",@"imageCondition": @"image_condition",@"text": @"text",@"weight": @"weight",};
}
@end
