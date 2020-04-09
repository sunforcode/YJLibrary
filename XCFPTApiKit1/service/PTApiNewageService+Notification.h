// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTGetNotificationTabsReqMessage.h"
#import "PTGetNotificationsReqMessage.h"
#import "PTMarkTabAsReadReqMessage.h"
#import "PTGetNotificationSettingStatusReqMessage.h"
#import "PTChangeNotificationSettingStatusReqMessage.h"
#import "PTGetNotificationTabsRespMessage.h"
#import "PTGetNotificationsRespMessage.h"
#import "PTMarkTabAsReadRespMessage.h"
#import "PTGetNotificationSettingStatusRespMessage.h"
#import "PTChangeNotificationSettingStatusRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Notification)
/**
  通知的tab信息
*/
- (RACSignal *)getNotificationTabsWithReqParameters:(PTGetNotificationTabsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  通知的tab信息
*/
- (RACSignal *)getNotificationTabsWithReqParameters:(PTGetNotificationTabsReqMessage *)reqParameters;
/**
  某tab下的通知
*/
- (RACSignal *)getNotificationsWithReqParameters:(PTGetNotificationsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  某tab下的通知
*/
- (RACSignal *)getNotificationsWithReqParameters:(PTGetNotificationsReqMessage *)reqParameters;
/**
  标记某个tab为已读
*/
- (RACSignal *)markTabAsReadWithReqParameters:(PTMarkTabAsReadReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  标记某个tab为已读
*/
- (RACSignal *)markTabAsReadWithReqParameters:(PTMarkTabAsReadReqMessage *)reqParameters;
/**
  获取通知的开关设置状态
*/
- (RACSignal *)getNotificationSettingStatusWithReqParameters:(PTGetNotificationSettingStatusReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取通知的开关设置状态
*/
- (RACSignal *)getNotificationSettingStatusWithReqParameters:(PTGetNotificationSettingStatusReqMessage *)reqParameters;
/**
  变更通知的开关设置状态
*/
- (RACSignal *)changeNotificationSettingStatusWithReqParameters:(PTChangeNotificationSettingStatusReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  变更通知的开关设置状态
*/
- (RACSignal *)changeNotificationSettingStatusWithReqParameters:(PTChangeNotificationSettingStatusReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
