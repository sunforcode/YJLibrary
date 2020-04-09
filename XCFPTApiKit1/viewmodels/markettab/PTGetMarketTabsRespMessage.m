// apic_version = 0.6.1
#import "PTGetMarketTabsRespMessage.h"
@implementation PTGetMarketTabsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"tabs" : [PTMarketTabMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"tabs": @"tabs",};
}
@end
