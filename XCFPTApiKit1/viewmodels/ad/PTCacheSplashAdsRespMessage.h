// apic_version = 0.6.1
#import "PTModel.h"
#import "PTADMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCacheSplashAdsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTADMessage *> *splashAds;
@end
NS_ASSUME_NONNULL_END
