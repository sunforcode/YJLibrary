// apic_version = 0.5.5
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  双头像的第二个头像
*/
@interface PTMinorUserMessage : PTModel
/**
  用户 id
*/
@property (nonatomic, copy) NSString *userId;
/**
  广告主 ID
*/
@property (nonatomic, assign) int32_t agencyId;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) PTPictureDictMessage *image;
@end
NS_ASSUME_NONNULL_END
