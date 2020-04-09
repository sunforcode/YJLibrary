// apic_version = 0.6.1
#import "PTModel.h"
#import "PTNetworkCarrierEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCacheSplashAdsReqMessage : PTModel
@property (nonatomic, copy) NSString *imeiMd5;
@property (nonatomic, copy) NSString *idfa;
@property (nonatomic, copy) NSString *macMd5;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic, assign) int32_t width;
@property (nonatomic, assign) int32_t height;
@property (nonatomic, copy) NSString *oaid;
@property (nonatomic, assign) PTNetworkCarrierEnum network;
@end
NS_ASSUME_NONNULL_END
