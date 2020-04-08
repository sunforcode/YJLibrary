// apic_version = 0.5.5
#import "PTApiNewageService+AD.h"
@implementation PTApiNewageService (AD)
- (RACSignal *)cacheSplashAdsWithReqParameters:(PTCacheSplashAdsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"ad/cache_splash_ads.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCacheSplashAdsRespMessage.class
                         requestName:@"CacheSplashAds"
                           apiConfig:apiConfig];
}
- (RACSignal *)cacheSplashAdsWithReqParameters:(PTCacheSplashAdsReqMessage *)reqParameters {
    return [self cacheSplashAdsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)lookupAdsBySlotNameWithReqParameters:(PTLookupAdsBySlotNameReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"ad/lookup_ads_by_slot_name.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTLookupAdsBySlotNameRespMessage.class
                         requestName:@"LookupAdsBySlotName"
                           apiConfig:apiConfig];
}
- (RACSignal *)lookupAdsBySlotNameWithReqParameters:(PTLookupAdsBySlotNameReqMessage *)reqParameters {
    return [self lookupAdsBySlotNameWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)lookupSdkAdScheduleWithReqParameters:(PTLookupSdkAdScheduleReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"ad/lookup_sdk_ad_schedule.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTLookupSdkAdScheduleRespMessage.class
                         requestName:@"LookupSdkAdSchedule"
                           apiConfig:apiConfig];
}
- (RACSignal *)lookupSdkAdScheduleWithReqParameters:(PTLookupSdkAdScheduleReqMessage *)reqParameters {
    return [self lookupSdkAdScheduleWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getDishesUploadedPageBannerInfoWithReqParameters:(PTGetDishesUploadedPageBannerInfoReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"dishes/uploaded_page/banner_info.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetDishesUploadedPageBannerInfoRespMessage.class
                         requestName:@"GetDishesUploadedPageBannerInfo"
                           apiConfig:apiConfig];
}
- (RACSignal *)getDishesUploadedPageBannerInfoWithReqParameters:(PTGetDishesUploadedPageBannerInfoReqMessage *)reqParameters {
    return [self getDishesUploadedPageBannerInfoWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
