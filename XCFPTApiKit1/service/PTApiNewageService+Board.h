// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTPagedUserTargetsReqMessage.h"
#import "PTIsTargetInUserBoardsReqMessage.h"
#import "PTCountUserBoardsReqMessage.h"
#import "PTPagedUserTargetsRespMessage.h"
#import "PTIsTargetInUserBoardsRespMessage.h"
#import "PTCountUserBoardsRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Board)
/**
  获取用户收藏的targets
*/
- (RACSignal *)pagedUserTargetsWithReqParameters:(PTPagedUserTargetsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取用户收藏的targets
*/
- (RACSignal *)pagedUserTargetsWithReqParameters:(PTPagedUserTargetsReqMessage *)reqParameters;
/**
  获取信息用户是否收藏过目标
*/
- (RACSignal *)isTargetInUserBoardsWithReqParameters:(PTIsTargetInUserBoardsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取信息用户是否收藏过目标
*/
- (RACSignal *)isTargetInUserBoardsWithReqParameters:(PTIsTargetInUserBoardsReqMessage *)reqParameters;
/**
  获取当前用户的收藏信息
*/
- (RACSignal *)countUserBoardsWithReqParameters:(PTCountUserBoardsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取当前用户的收藏信息
*/
- (RACSignal *)countUserBoardsWithReqParameters:(PTCountUserBoardsReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
