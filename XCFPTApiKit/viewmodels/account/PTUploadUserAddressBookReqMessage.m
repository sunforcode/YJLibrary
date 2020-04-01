// apic_version = 0.5.5
#import "PTUploadUserAddressBookReqMessage.h"
@implementation PTUploadUserAddressBookReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"contacts" : [PTContactMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"contacts": @"contacts",};
}
@end
