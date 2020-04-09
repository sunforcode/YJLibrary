// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTGetRecipeFeedsReqMessage.h"
#import "PTMarkRecipeFeedsAsReadReqMessage.h"
#import "PTGetRecipeFeedsV2ReqMessage.h"
#import "PTGetFeedsGroupsReqMessage.h"
#import "PTMarkFeedsAsReadReqMessage.h"
#import "PTGetRecipeFeedsRespMessage.h"
#import "PTMarkRecipeFeedsAsReadRespMessage.h"
#import "PTGetRecipeFeedsV2RespMessage.h"
#import "PTGetFeedsGroupsRespMessage.h"
#import "PTMarkFeedsAsReadRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Feeds)
/**
  取关注的用户创建的菜谱
*/
- (RACSignal *)getRecipeFeedsWithReqParameters:(PTGetRecipeFeedsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  取关注的用户创建的菜谱
*/
- (RACSignal *)getRecipeFeedsWithReqParameters:(PTGetRecipeFeedsReqMessage *)reqParameters;
/**
  标记已读的recipe feed
*/
- (RACSignal *)markRecipeFeedsAsReadWithReqParameters:(PTMarkRecipeFeedsAsReadReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  标记已读的recipe feed
*/
- (RACSignal *)markRecipeFeedsAsReadWithReqParameters:(PTMarkRecipeFeedsAsReadReqMessage *)reqParameters;
/**
  取用户关注的用户创建的新菜谱 v2
*/
- (RACSignal *)getRecipeFeedsV2WithReqParameters:(PTGetRecipeFeedsV2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  取用户关注的用户创建的新菜谱 v2
*/
- (RACSignal *)getRecipeFeedsV2WithReqParameters:(PTGetRecipeFeedsV2ReqMessage *)reqParameters;
/**
  取用户关注的用户创建的 feeds
*/
- (RACSignal *)getFeedsGroupsWithReqParameters:(PTGetFeedsGroupsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  取用户关注的用户创建的 feeds
*/
- (RACSignal *)getFeedsGroupsWithReqParameters:(PTGetFeedsGroupsReqMessage *)reqParameters;
/**
  标记 feeds 为已读
*/
- (RACSignal *)markFeedsAsReadWithReqParameters:(PTMarkFeedsAsReadReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  标记 feeds 为已读
*/
- (RACSignal *)markFeedsAsReadWithReqParameters:(PTMarkFeedsAsReadReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
