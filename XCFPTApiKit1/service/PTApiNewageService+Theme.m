// apic_version = 0.6.1
#import "PTApiNewageService+Theme.h"
@implementation PTApiNewageService (Theme)
- (RACSignal *)showThemeWithReqParameters:(PTShowThemeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"theme/show.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTShowThemeRespMessage.class
                         requestName:@"ShowTheme"
                           apiConfig:apiConfig];
}
- (RACSignal *)showThemeWithReqParameters:(PTShowThemeReqMessage *)reqParameters {
    return [self showThemeWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)listThemesWithReqParameters:(PTListThemesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"theme/list_themes.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTListThemesRespMessage.class
                         requestName:@"ListThemes"
                           apiConfig:apiConfig];
}
- (RACSignal *)listThemesWithReqParameters:(PTListThemesReqMessage *)reqParameters {
    return [self listThemesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)listThemeEssaysByTimeWithReqParameters:(PTListThemeEssaysByTimeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"theme/list_theme_essays_by_time.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTListThemeEssaysByTimeRespMessage.class
                         requestName:@"ListThemeEssaysByTime"
                           apiConfig:apiConfig];
}
- (RACSignal *)listThemeEssaysByTimeWithReqParameters:(PTListThemeEssaysByTimeReqMessage *)reqParameters {
    return [self listThemeEssaysByTimeWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)listThemeEssaysByHotWithReqParameters:(PTListThemeEssaysByHotReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"theme/list_theme_essays_by_hot.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTListThemeEssaysByHotRespMessage.class
                         requestName:@"ListThemeEssaysByHot"
                           apiConfig:apiConfig];
}
- (RACSignal *)listThemeEssaysByHotWithReqParameters:(PTListThemeEssaysByHotReqMessage *)reqParameters {
    return [self listThemeEssaysByHotWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)listThemesV2WithReqParameters:(PTListThemesV2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"theme/list_themes_v2.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTListThemesV2RespMessage.class
                         requestName:@"ListThemesV2"
                           apiConfig:apiConfig];
}
- (RACSignal *)listThemesV2WithReqParameters:(PTListThemesV2ReqMessage *)reqParameters {
    return [self listThemesV2WithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)listThemeEssaysWithReqParameters:(PTListThemeEssaysReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"theme/list_theme_essays.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTListThemeEssaysRespMessage.class
                         requestName:@"ListThemeEssays"
                           apiConfig:apiConfig];
}
- (RACSignal *)listThemeEssaysWithReqParameters:(PTListThemeEssaysReqMessage *)reqParameters {
    return [self listThemeEssaysWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
