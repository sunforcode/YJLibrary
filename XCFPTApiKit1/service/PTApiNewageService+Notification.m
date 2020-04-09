// apic_version = 0.6.1
#import "PTApiNewageService+Notification.h"
@implementation PTApiNewageService (Notification)
- (RACSignal *)getNotificationTabsWithReqParameters:(PTGetNotificationTabsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"notifications/tabs.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetNotificationTabsRespMessage.class
                         requestName:@"GetNotificationTabs"
                           apiConfig:apiConfig];
}
- (RACSignal *)getNotificationTabsWithReqParameters:(PTGetNotificationTabsReqMessage *)reqParameters {
    return [self getNotificationTabsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getNotificationsWithReqParameters:(PTGetNotificationsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"notifications/tab/list.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetNotificationsRespMessage.class
                         requestName:@"GetNotifications"
                           apiConfig:apiConfig];
}
- (RACSignal *)getNotificationsWithReqParameters:(PTGetNotificationsReqMessage *)reqParameters {
    return [self getNotificationsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)markTabAsReadWithReqParameters:(PTMarkTabAsReadReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"notifications/tab/mark_as_read.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTMarkTabAsReadRespMessage.class
                         requestName:@"MarkTabAsRead"
                           apiConfig:apiConfig];
}
- (RACSignal *)markTabAsReadWithReqParameters:(PTMarkTabAsReadReqMessage *)reqParameters {
    return [self markTabAsReadWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getNotificationSettingStatusWithReqParameters:(PTGetNotificationSettingStatusReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"notifications/setting/show.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetNotificationSettingStatusRespMessage.class
                         requestName:@"GetNotificationSettingStatus"
                           apiConfig:apiConfig];
}
- (RACSignal *)getNotificationSettingStatusWithReqParameters:(PTGetNotificationSettingStatusReqMessage *)reqParameters {
    return [self getNotificationSettingStatusWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)changeNotificationSettingStatusWithReqParameters:(PTChangeNotificationSettingStatusReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"notifications/setting/change.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTChangeNotificationSettingStatusRespMessage.class
                         requestName:@"ChangeNotificationSettingStatus"
                           apiConfig:apiConfig];
}
- (RACSignal *)changeNotificationSettingStatusWithReqParameters:(PTChangeNotificationSettingStatusReqMessage *)reqParameters {
    return [self changeNotificationSettingStatusWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
