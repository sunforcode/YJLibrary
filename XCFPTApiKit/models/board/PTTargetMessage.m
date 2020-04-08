// apic_version = 0.5.5
#import "PTTargetMessage.h"
@implementation PTTargetMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"targetId": @"id",@"desc": @"description",@"typeText": @"type_text",@"recipe": @"recipe",@"type": @"type",};
}
@end
