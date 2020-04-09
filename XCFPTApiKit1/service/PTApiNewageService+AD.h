// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTCacheSplashAdsReqMessage.h"
#import "PTLookupAdsBySlotNameReqMessage.h"
#import "PTLookupSdkAdScheduleReqMessage.h"
#import "PTGetDishesUploadedPageBannerInfoReqMessage.h"
#import "PTCacheSplashAdsRespMessage.h"
#import "PTLookupAdsBySlotNameRespMessage.h"
#import "PTLookupSdkAdScheduleRespMessage.h"
#import "PTGetDishesUploadedPageBannerInfoRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (AD)
/**
  缓存未来 n 天广告
*/
- (RACSignal *)cacheSplashAdsWithReqParameters:(PTCacheSplashAdsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  缓存未来 n 天广告
*/
- (RACSignal *)cacheSplashAdsWithReqParameters:(PTCacheSplashAdsReqMessage *)reqParameters;
/**
  批量获取广告信息
*/
- (RACSignal *)lookupAdsBySlotNameWithReqParameters:(PTLookupAdsBySlotNameReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  批量获取广告信息
*/
- (RACSignal *)lookupAdsBySlotNameWithReqParameters:(PTLookupAdsBySlotNameReqMessage *)reqParameters;
/**
  SDK 广告队列
*/
- (RACSignal *)lookupSdkAdScheduleWithReqParameters:(PTLookupSdkAdScheduleReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  SDK 广告队列
*/
- (RACSignal *)lookupSdkAdScheduleWithReqParameters:(PTLookupSdkAdScheduleReqMessage *)reqParameters;
/**
  获取作品发布成功页面的banner的信息
*/
- (RACSignal *)getDishesUploadedPageBannerInfoWithReqParameters:(PTGetDishesUploadedPageBannerInfoReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取作品发布成功页面的banner的信息
*/
- (RACSignal *)getDishesUploadedPageBannerInfoWithReqParameters:(PTGetDishesUploadedPageBannerInfoReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
