// apic_version = 0.5.5
#import "PTContactMessage.h"
@implementation PTContactMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"phones" : [PTUserMobilePhoneMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"name": @"name",@"phones": @"phones",};
}
@end
