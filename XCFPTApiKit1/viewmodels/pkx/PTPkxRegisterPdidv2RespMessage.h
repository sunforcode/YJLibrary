// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPkxRegisterPdidv2RespMessage : PTModel
/**
  请求里的上下文字段，原样返回
*/
@property (nonatomic, copy) NSString *ctx;
/**
  服务端生成的 PDID
*/
@property (nonatomic, copy) NSString *pdid;
@end
NS_ASSUME_NONNULL_END
