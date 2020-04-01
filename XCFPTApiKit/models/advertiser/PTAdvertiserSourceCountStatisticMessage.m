// apic_version = 0.5.5
#import "PTAdvertiserSourceCountStatisticMessage.h"
@implementation PTAdvertiserSourceCountStatisticMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"sources" : [PTAdvertiserSourceCountDataMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"sources": @"sources",@"date": @"date",};
}
@end
