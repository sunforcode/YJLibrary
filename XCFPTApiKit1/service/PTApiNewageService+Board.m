// apic_version = 0.6.1
#import "PTApiNewageService+Board.h"
@implementation PTApiNewageService (Board)
- (RACSignal *)pagedUserTargetsWithReqParameters:(PTPagedUserTargetsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"boards/user_targets.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedUserTargetsRespMessage.class
                         requestName:@"PagedUserTargets"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedUserTargetsWithReqParameters:(PTPagedUserTargetsReqMessage *)reqParameters {
    return [self pagedUserTargetsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)isTargetInUserBoardsWithReqParameters:(PTIsTargetInUserBoardsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"boards/is_target_in_user_baords.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTIsTargetInUserBoardsRespMessage.class
                         requestName:@"IsTargetInUserBoards"
                           apiConfig:apiConfig];
}
- (RACSignal *)isTargetInUserBoardsWithReqParameters:(PTIsTargetInUserBoardsReqMessage *)reqParameters {
    return [self isTargetInUserBoardsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)countUserBoardsWithReqParameters:(PTCountUserBoardsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"boards/count_user_boards.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCountUserBoardsRespMessage.class
                         requestName:@"CountUserBoards"
                           apiConfig:apiConfig];
}
- (RACSignal *)countUserBoardsWithReqParameters:(PTCountUserBoardsReqMessage *)reqParameters {
    return [self countUserBoardsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
