// apic_version = 0.6.1
#import "PTModel.h"
#import "PTBannerMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  竖排 banner
*/
@interface PTVerticalSlipBannersCellMessage : PTModel
@property (nonatomic, strong) NSArray<PTBannerMessage *> *banners;
@end
NS_ASSUME_NONNULL_END
