// apic_version = 0.5.5
#import "PTApiNewageService+Account.h"
@implementation PTApiNewageService (Account)
- (RACSignal *)loginViaWechatWithReqParameters:(PTLoginViaWechatReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/login_via_wechat.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTLoginViaWechatRespMessage.class
                         requestName:@"LoginViaWechat"
                           apiConfig:apiConfig];
}
- (RACSignal *)loginViaWechatWithReqParameters:(PTLoginViaWechatReqMessage *)reqParameters {
    return [self loginViaWechatWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)createViaWechatWithPhoneBindingWithReqParameters:(PTCreateViaWechatWithPhoneBindingReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/create_via_wechat_with_phone_binding.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCreateViaWechatWithPhoneBindingRespMessage.class
                         requestName:@"CreateViaWechatWithPhoneBinding"
                           apiConfig:apiConfig];
}
- (RACSignal *)createViaWechatWithPhoneBindingWithReqParameters:(PTCreateViaWechatWithPhoneBindingReqMessage *)reqParameters {
    return [self createViaWechatWithPhoneBindingWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)loginViaWeappWithReqParameters:(PTLoginViaWeappReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/login_via_weapp.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTLoginViaWeappRespMessage.class
                         requestName:@"LoginViaWeapp"
                           apiConfig:apiConfig];
}
- (RACSignal *)loginViaWeappWithReqParameters:(PTLoginViaWeappReqMessage *)reqParameters {
    return [self loginViaWeappWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)loginViaWeappPhoneWithReqParameters:(PTLoginViaWeappPhoneReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/login_via_weapp_phone.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTLoginViaWeappPhoneRespMessage.class
                         requestName:@"LoginViaWeappPhone"
                           apiConfig:apiConfig];
}
- (RACSignal *)loginViaWeappPhoneWithReqParameters:(PTLoginViaWeappPhoneReqMessage *)reqParameters {
    return [self loginViaWeappPhoneWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)createViaWeappWithPhoneBindingWithReqParameters:(PTCreateViaWeappWithPhoneBindingReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/create_via_weapp_with_phone_binding.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCreateViaWeappWithPhoneBindingRespMessage.class
                         requestName:@"CreateViaWeappWithPhoneBinding"
                           apiConfig:apiConfig];
}
- (RACSignal *)createViaWeappWithPhoneBindingWithReqParameters:(PTCreateViaWeappWithPhoneBindingReqMessage *)reqParameters {
    return [self createViaWeappWithPhoneBindingWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)sendPhoneLoginVerificationCodeV2WithReqParameters:(PTSendPhoneLoginVerificationCodeV2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/send_phone_login_verification_code_v2.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTSendPhoneLoginVerificationCodeV2RespMessage.class
                         requestName:@"SendPhoneLoginVerificationCodeV2"
                           apiConfig:apiConfig];
}
- (RACSignal *)sendPhoneLoginVerificationCodeV2WithReqParameters:(PTSendPhoneLoginVerificationCodeV2ReqMessage *)reqParameters {
    return [self sendPhoneLoginVerificationCodeV2WithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)loginViaPhoneV2WithReqParameters:(PTLoginViaPhoneV2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/login_via_phone_v2.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTLoginViaPhoneV2RespMessage.class
                         requestName:@"LoginViaPhoneV2"
                           apiConfig:apiConfig];
}
- (RACSignal *)loginViaPhoneV2WithReqParameters:(PTLoginViaPhoneV2ReqMessage *)reqParameters {
    return [self loginViaPhoneV2WithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)verifyAndBindPhoneV3WithReqParameters:(PTVerifyAndBindPhoneV3ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/verify_and_bind_phone_v3.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTVerifyAndBindPhoneV3RespMessage.class
                         requestName:@"VerifyAndBindPhoneV3"
                           apiConfig:apiConfig];
}
- (RACSignal *)verifyAndBindPhoneV3WithReqParameters:(PTVerifyAndBindPhoneV3ReqMessage *)reqParameters {
    return [self verifyAndBindPhoneV3WithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)verifyAndReplacePhoneBindingV3WithReqParameters:(PTVerifyAndReplacePhoneBindingV3ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/verify_and_replace_phone_binding_v3.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTVerifyAndReplacePhoneBindingV3RespMessage.class
                         requestName:@"VerifyAndReplacePhoneBindingV3"
                           apiConfig:apiConfig];
}
- (RACSignal *)verifyAndReplacePhoneBindingV3WithReqParameters:(PTVerifyAndReplacePhoneBindingV3ReqMessage *)reqParameters {
    return [self verifyAndReplacePhoneBindingV3WithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)loginViaDeviceWithReqParameters:(PTLoginViaDeviceReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/login_via_device.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTLoginViaDeviceRespMessage.class
                         requestName:@"LoginViaDevice"
                           apiConfig:apiConfig];
}
- (RACSignal *)loginViaDeviceWithReqParameters:(PTLoginViaDeviceReqMessage *)reqParameters {
    return [self loginViaDeviceWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)uploadUserAddressBookWithReqParameters:(PTUploadUserAddressBookReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/upload_user_address_book.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTUploadUserAddressBookRespMessage.class
                         requestName:@"UploadUserAddressBook"
                           apiConfig:apiConfig];
}
- (RACSignal *)uploadUserAddressBookWithReqParameters:(PTUploadUserAddressBookReqMessage *)reqParameters {
    return [self uploadUserAddressBookWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getUsersByAddressBookWithReqParameters:(PTGetUsersByAddressBookReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/get_users_by_address_book.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetUsersByAddressBookRespMessage.class
                         requestName:@"GetUsersByAddressBook"
                           apiConfig:apiConfig];
}
- (RACSignal *)getUsersByAddressBookWithReqParameters:(PTGetUsersByAddressBookReqMessage *)reqParameters {
    return [self getUsersByAddressBookWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getUserPageRecommendationUsersWithReqParameters:(PTGetUserPageRecommendationUsersReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/get_user_page_recommendation_users.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetUserPageRecommendationUsersRespMessage.class
                         requestName:@"GetUserPageRecommendationUsers"
                           apiConfig:apiConfig];
}
- (RACSignal *)getUserPageRecommendationUsersWithReqParameters:(PTGetUserPageRecommendationUsersReqMessage *)reqParameters {
    return [self getUserPageRecommendationUsersWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getFeedsPageRecommendationUsersWithReqParameters:(PTGetFeedsPageRecommendationUsersReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/get_feeds_page_recommendation_users.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetFeedsPageRecommendationUsersRespMessage.class
                         requestName:@"GetFeedsPageRecommendationUsers"
                           apiConfig:apiConfig];
}
- (RACSignal *)getFeedsPageRecommendationUsersWithReqParameters:(PTGetFeedsPageRecommendationUsersReqMessage *)reqParameters {
    return [self getFeedsPageRecommendationUsersWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getDeviceRecommendTagsWithReqParameters:(PTGetDeviceRecommendTagsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/device_recommend_tags.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetDeviceRecommendTagsRespMessage.class
                         requestName:@"GetDeviceRecommendTags"
                           apiConfig:apiConfig];
}
- (RACSignal *)getDeviceRecommendTagsWithReqParameters:(PTGetDeviceRecommendTagsReqMessage *)reqParameters {
    return [self getDeviceRecommendTagsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getIsDeviceAgreeAgreementWithReqParameters:(PTGetIsDeviceAgreeAgreementReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/get_is_device_agree_agreement.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetIsDeviceAgreeAgreementRespMessage.class
                         requestName:@"GetIsDeviceAgreeAgreement"
                           apiConfig:apiConfig];
}
- (RACSignal *)getIsDeviceAgreeAgreementWithReqParameters:(PTGetIsDeviceAgreeAgreementReqMessage *)reqParameters {
    return [self getIsDeviceAgreeAgreementWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)isUpdateAgreementWithReqParameters:(PTIsUpdateAgreementReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/is_update_agreement.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTIsUpdateAgreementRespMessage.class
                         requestName:@"IsUpdateAgreement"
                           apiConfig:apiConfig];
}
- (RACSignal *)isUpdateAgreementWithReqParameters:(PTIsUpdateAgreementReqMessage *)reqParameters {
    return [self isUpdateAgreementWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)deviceAgreeAgreementWithReqParameters:(PTDeviceAgreeAgreementReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/device_agree_agreement.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTDeviceAgreeAgreementRespMessage.class
                         requestName:@"DeviceAgreeAgreement"
                           apiConfig:apiConfig];
}
- (RACSignal *)deviceAgreeAgreementWithReqParameters:(PTDeviceAgreeAgreementReqMessage *)reqParameters {
    return [self deviceAgreeAgreementWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)createAccountDeactivationApplicationWithReqParameters:(PTCreateAccountDeactivationApplicationReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/create_deactivation_application.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCreateAccountDeactivationApplicationRespMessage.class
                         requestName:@"CreateAccountDeactivationApplication"
                           apiConfig:apiConfig];
}
- (RACSignal *)createAccountDeactivationApplicationWithReqParameters:(PTCreateAccountDeactivationApplicationReqMessage *)reqParameters {
    return [self createAccountDeactivationApplicationWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getAccountDeactivationApplicationWithReqParameters:(PTGetAccountDeactivationApplicationReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/get_deactivation_application.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetAccountDeactivationApplicationRespMessage.class
                         requestName:@"GetAccountDeactivationApplication"
                           apiConfig:apiConfig];
}
- (RACSignal *)getAccountDeactivationApplicationWithReqParameters:(PTGetAccountDeactivationApplicationReqMessage *)reqParameters {
    return [self getAccountDeactivationApplicationWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getAuthKeyByAuthCodeWithReqParameters:(PTGetAuthKeyByAuthCodeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"account/get_auth_key_by_auth_code.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetAuthKeyByAuthCodeRespMessage.class
                         requestName:@"GetAuthKeyByAuthCode"
                           apiConfig:apiConfig];
}
- (RACSignal *)getAuthKeyByAuthCodeWithReqParameters:(PTGetAuthKeyByAuthCodeReqMessage *)reqParameters {
    return [self getAuthKeyByAuthCodeWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
