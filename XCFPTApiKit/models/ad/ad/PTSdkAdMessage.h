// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSdkAdMessage : PTModel
/**
  广告类型 广点通（gdt）、Mobivista（mobivista）等等
*/
@property (nonatomic, copy) NSString *adType;
/**
  优先显示权重
*/
@property (nonatomic, assign) int32_t weight;
@property (nonatomic, copy) NSString *deliveryId;
/**
  广告形式  banner/native/splash
*/
@property (nonatomic, copy) NSString *insideType;
@property (nonatomic, strong) NSArray<NSString *> *clickTrackingUrls;
@property (nonatomic, strong) NSArray<NSString *> *exposeTrackingUrls;
@end
NS_ASSUME_NONNULL_END
