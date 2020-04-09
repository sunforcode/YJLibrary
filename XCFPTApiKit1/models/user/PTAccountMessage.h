// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTUserMobilePhoneMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAccountMessage : PTModel
@property (nonatomic, strong) PTUserMessage *user;
@property (nonatomic, copy) NSString *sk;
@property (nonatomic, assign) BOOL isAdmin;
@property (nonatomic, strong) PTUserMobilePhoneMessage *mobilePhone;
@end
NS_ASSUME_NONNULL_END
