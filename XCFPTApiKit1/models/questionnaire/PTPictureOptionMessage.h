// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPictureOptionMessage : PTModel
@property (nonatomic, copy) NSString *optionId;
@property (nonatomic, strong) PTPictureDictMessage *img;
@end
NS_ASSUME_NONNULL_END
