// apic_version = 0.6.1
#import "PTGetAdvertiserProductRespMessage.h"
@implementation PTGetAdvertiserProductRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"product" : [PTAdvertiserProductMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"product": @"product",@"cursor": @"cursor",};
}
@end
