// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPkxRegisterPdidReqMessage : PTModel
/**
  上下文标示
*/
@property (nonatomic, copy) NSString *ctx;
/**
  客户端操作系统版本号
*/
@property (nonatomic, copy) NSString *osVersion;
/**
  编码后的特征信息
*/
@property (nonatomic, copy) NSString *data;
@end
NS_ASSUME_NONNULL_END
