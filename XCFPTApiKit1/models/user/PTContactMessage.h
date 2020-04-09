// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMobilePhoneMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTContactMessage : PTModel
@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSArray<PTUserMobilePhoneMessage *> *phones;
@end
NS_ASSUME_NONNULL_END
