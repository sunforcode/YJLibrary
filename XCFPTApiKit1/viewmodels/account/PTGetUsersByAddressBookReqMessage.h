// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  通过用户已经上传的通讯录来获取通讯录中的好友
*/
@interface PTGetUsersByAddressBookReqMessage : PTModel
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@end
NS_ASSUME_NONNULL_END
