// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTGetSignatureReqMessage.h"
#import "PTGetSignatureRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (VodVideo)
/**
  长视频签名
*/
- (RACSignal *)getSignatureWithReqParameters:(PTGetSignatureReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  长视频签名
*/
- (RACSignal *)getSignatureWithReqParameters:(PTGetSignatureReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
