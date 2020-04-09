// apic_version = 0.6.1
#import "PTModel.h"
#import "PTSdkAdMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  广告占位符
*/
@interface PTPlaceholderAdCellMessage : PTModel
@property (nonatomic, copy) NSString *slotName;
/**
  占位符 sdk 信息
*/
@property (nonatomic, strong) PTSdkAdMessage *sdkAd;
@end
NS_ASSUME_NONNULL_END
