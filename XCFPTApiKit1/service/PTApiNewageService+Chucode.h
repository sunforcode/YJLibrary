// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTGetChucodeReqMessage.h"
#import "PTGetChucodeRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Chucode)
/**
  获取下厨房口令
*/
- (RACSignal *)getChucodeWithReqParameters:(PTGetChucodeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取下厨房口令
*/
- (RACSignal *)getChucodeWithReqParameters:(PTGetChucodeReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
