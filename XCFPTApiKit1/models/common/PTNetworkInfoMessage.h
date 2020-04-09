// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  网络请求信息
*/
@interface PTNetworkInfoMessage : PTModel
@property (nonatomic, copy) NSString *host;
@property (nonatomic, copy) NSString *response;
@end
NS_ASSUME_NONNULL_END
