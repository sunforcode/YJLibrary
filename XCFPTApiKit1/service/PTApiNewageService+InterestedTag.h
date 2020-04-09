// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTGetInterestedTagsReqMessage.h"
#import "PTSetInterestedTagsReqMessage.h"
#import "PTGetInterestedTagsRespMessage.h"
#import "PTSetInterestedTagsRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (InterestedTag)
/**
  获取全部的兴趣 tag 标签
*/
- (RACSignal *)getInterestedTagsWithReqParameters:(PTGetInterestedTagsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取全部的兴趣 tag 标签
*/
- (RACSignal *)getInterestedTagsWithReqParameters:(PTGetInterestedTagsReqMessage *)reqParameters;
/**
  设置兴趣 tag
*/
- (RACSignal *)setInterestedTagsWithReqParameters:(PTSetInterestedTagsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  设置兴趣 tag
*/
- (RACSignal *)setInterestedTagsWithReqParameters:(PTSetInterestedTagsReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
