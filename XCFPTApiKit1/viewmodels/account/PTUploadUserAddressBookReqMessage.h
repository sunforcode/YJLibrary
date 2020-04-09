// apic_version = 0.6.1
#import "PTModel.h"
#import "PTContactMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  上传用户的通讯录
*/
@interface PTUploadUserAddressBookReqMessage : PTModel
@property (nonatomic, strong) NSArray<PTContactMessage *> *contacts;
@end
NS_ASSUME_NONNULL_END
