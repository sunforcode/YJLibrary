// apic_version = 0.5.5
#import "PTModel.h"
#import "PTNetworkInfoMessage.h"
#import "PTNetworkInfoMessage.h"
#import "PTNetworkSignalEnum.h"
#import "PTNetworkCarrierEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  用户使用环境信息
*/
@interface PTUserUsageEnvironmentMessage : PTModel
/**
  手机型号
*/
@property (nonatomic, copy) NSString *model;
/**
  系统版本
*/
@property (nonatomic, copy) NSString *osVersion;
/**
  tcp ping
*/
@property (nonatomic, strong) NSArray<PTNetworkInfoMessage *> *pingInfos;
/**
  dns lookup
*/
@property (nonatomic, strong) NSArray<PTNetworkInfoMessage *> *dnsInfos;
@property (nonatomic, assign) PTNetworkSignalEnum networkSignal;
@property (nonatomic, assign) PTNetworkCarrierEnum networkCarrier;
@end
NS_ASSUME_NONNULL_END
