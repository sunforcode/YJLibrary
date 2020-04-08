// apic_version = 0.5.5
#import "PTGetAdvertiserProductRespMessage.h"
@implementation PTGetAdvertiserProductRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"product" : [PTAdvertiserProductMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"product": @"product",@"cursor": @"cursor",};
}
@end
