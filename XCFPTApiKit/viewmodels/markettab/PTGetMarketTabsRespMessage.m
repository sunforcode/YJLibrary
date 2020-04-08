// apic_version = 0.5.5
#import "PTGetMarketTabsRespMessage.h"
@implementation PTGetMarketTabsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"tabs" : [PTMarketTabMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"tabs": @"tabs",};
}
@end
