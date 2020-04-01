// apic_version = 0.5.5
#import "PTApiNewageService.h"
#import "PTShowThemeReqMessage.h"
#import "PTListThemesReqMessage.h"
#import "PTListThemeEssaysByTimeReqMessage.h"
#import "PTListThemeEssaysByHotReqMessage.h"
#import "PTListThemesV2ReqMessage.h"
#import "PTListThemeEssaysReqMessage.h"
#import "PTShowThemeRespMessage.h"
#import "PTListThemesRespMessage.h"
#import "PTListThemeEssaysByTimeRespMessage.h"
#import "PTListThemeEssaysByHotRespMessage.h"
#import "PTListThemesV2RespMessage.h"
#import "PTListThemeEssaysRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Theme)
/**
  查看主题详情
*/
- (RACSignal *)showThemeWithReqParameters:(PTShowThemeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  查看主题详情
*/
- (RACSignal *)showThemeWithReqParameters:(PTShowThemeReqMessage *)reqParameters;
/**
  查看故事主题的列表
*/
- (RACSignal *)listThemesWithReqParameters:(PTListThemesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  查看故事主题的列表
*/
- (RACSignal *)listThemesWithReqParameters:(PTListThemesReqMessage *)reqParameters;
/**
  按时间查看故事主题下面的故事
*/
- (RACSignal *)listThemeEssaysByTimeWithReqParameters:(PTListThemeEssaysByTimeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  按时间查看故事主题下面的故事
*/
- (RACSignal *)listThemeEssaysByTimeWithReqParameters:(PTListThemeEssaysByTimeReqMessage *)reqParameters;
/**
  按热度查看故事主题下面的故事
*/
- (RACSignal *)listThemeEssaysByHotWithReqParameters:(PTListThemeEssaysByHotReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  按热度查看故事主题下面的故事
*/
- (RACSignal *)listThemeEssaysByHotWithReqParameters:(PTListThemeEssaysByHotReqMessage *)reqParameters;
/**
  查看故事主题的列表V2
*/
- (RACSignal *)listThemesV2WithReqParameters:(PTListThemesV2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  查看故事主题的列表V2
*/
- (RACSignal *)listThemesV2WithReqParameters:(PTListThemesV2ReqMessage *)reqParameters;
/**
  查看故事主题下面的故事（按主页进行排序并插入一些算法判定的故事）
*/
- (RACSignal *)listThemeEssaysWithReqParameters:(PTListThemeEssaysReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  查看故事主题下面的故事（按主页进行排序并插入一些算法判定的故事）
*/
- (RACSignal *)listThemeEssaysWithReqParameters:(PTListThemeEssaysReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
