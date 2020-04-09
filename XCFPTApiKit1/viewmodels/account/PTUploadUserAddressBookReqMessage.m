// apic_version = 0.6.1
#import "PTUploadUserAddressBookReqMessage.h"
@implementation PTUploadUserAddressBookReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"contacts" : [PTContactMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"contacts": @"contacts",};
}
@end
