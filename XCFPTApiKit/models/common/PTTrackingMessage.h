// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTTrackingMessage : PTModel
@property (nonatomic, strong) NSArray<NSString *> *xcfClickUrls;
@property (nonatomic, strong) NSArray<NSString *> *thirdPartyClickUrls;
@property (nonatomic, strong) NSArray<NSString *> *xcfExposeUrls;
@property (nonatomic, strong) NSArray<NSString *> *thirdPartyExposeUrls;
@end
NS_ASSUME_NONNULL_END
