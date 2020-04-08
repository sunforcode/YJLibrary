// apic_version = 0.5.5
#import "PTApiNewageService.h"
#import "PTLoginViaWechatReqMessage.h"
#import "PTCreateViaWechatWithPhoneBindingReqMessage.h"
#import "PTLoginViaWeappReqMessage.h"
#import "PTLoginViaWeappPhoneReqMessage.h"
#import "PTCreateViaWeappWithPhoneBindingReqMessage.h"
#import "PTSendPhoneLoginVerificationCodeV2ReqMessage.h"
#import "PTLoginViaPhoneV2ReqMessage.h"
#import "PTVerifyAndBindPhoneV3ReqMessage.h"
#import "PTVerifyAndReplacePhoneBindingV3ReqMessage.h"
#import "PTLoginViaDeviceReqMessage.h"
#import "PTUploadUserAddressBookReqMessage.h"
#import "PTGetUsersByAddressBookReqMessage.h"
#import "PTGetUserPageRecommendationUsersReqMessage.h"
#import "PTGetFeedsPageRecommendationUsersReqMessage.h"
#import "PTGetDeviceRecommendTagsReqMessage.h"
#import "PTGetIsDeviceAgreeAgreementReqMessage.h"
#import "PTIsUpdateAgreementReqMessage.h"
#import "PTDeviceAgreeAgreementReqMessage.h"
#import "PTCreateAccountDeactivationApplicationReqMessage.h"
#import "PTGetAccountDeactivationApplicationReqMessage.h"
#import "PTGetAuthKeyByAuthCodeReqMessage.h"
#import "PTLoginViaWechatRespMessage.h"
#import "PTCreateViaWechatWithPhoneBindingRespMessage.h"
#import "PTLoginViaWeappRespMessage.h"
#import "PTLoginViaWeappPhoneRespMessage.h"
#import "PTCreateViaWeappWithPhoneBindingRespMessage.h"
#import "PTSendPhoneLoginVerificationCodeV2RespMessage.h"
#import "PTLoginViaPhoneV2RespMessage.h"
#import "PTVerifyAndBindPhoneV3RespMessage.h"
#import "PTVerifyAndReplacePhoneBindingV3RespMessage.h"
#import "PTLoginViaDeviceRespMessage.h"
#import "PTUploadUserAddressBookRespMessage.h"
#import "PTGetUsersByAddressBookRespMessage.h"
#import "PTGetUserPageRecommendationUsersRespMessage.h"
#import "PTGetFeedsPageRecommendationUsersRespMessage.h"
#import "PTGetDeviceRecommendTagsRespMessage.h"
#import "PTGetIsDeviceAgreeAgreementRespMessage.h"
#import "PTIsUpdateAgreementRespMessage.h"
#import "PTDeviceAgreeAgreementRespMessage.h"
#import "PTCreateAccountDeactivationApplicationRespMessage.h"
#import "PTGetAccountDeactivationApplicationRespMessage.h"
#import "PTGetAuthKeyByAuthCodeRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Account)
/**
  微信应用登录
*/
- (RACSignal *)loginViaWechatWithReqParameters:(PTLoginViaWechatReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  微信应用登录
*/
- (RACSignal *)loginViaWechatWithReqParameters:(PTLoginViaWechatReqMessage *)reqParameters;
/**
  微信应用登录并绑定手机号(可跳过)
*/
- (RACSignal *)createViaWechatWithPhoneBindingWithReqParameters:(PTCreateViaWechatWithPhoneBindingReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  微信应用登录并绑定手机号(可跳过)
*/
- (RACSignal *)createViaWechatWithPhoneBindingWithReqParameters:(PTCreateViaWechatWithPhoneBindingReqMessage *)reqParameters;
/**
  小程序登录
*/
- (RACSignal *)loginViaWeappWithReqParameters:(PTLoginViaWeappReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  小程序登录
*/
- (RACSignal *)loginViaWeappWithReqParameters:(PTLoginViaWeappReqMessage *)reqParameters;
/**
  小程序手机号登录（使用小程序手机验证码功能）
*/
- (RACSignal *)loginViaWeappPhoneWithReqParameters:(PTLoginViaWeappPhoneReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  小程序手机号登录（使用小程序手机验证码功能）
*/
- (RACSignal *)loginViaWeappPhoneWithReqParameters:(PTLoginViaWeappPhoneReqMessage *)reqParameters;
/**
  小程序登录并绑定手机号(可跳过)
*/
- (RACSignal *)createViaWeappWithPhoneBindingWithReqParameters:(PTCreateViaWeappWithPhoneBindingReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  小程序登录并绑定手机号(可跳过)
*/
- (RACSignal *)createViaWeappWithPhoneBindingWithReqParameters:(PTCreateViaWeappWithPhoneBindingReqMessage *)reqParameters;
/**
  发送手机号登录注册验证码
*/
- (RACSignal *)sendPhoneLoginVerificationCodeV2WithReqParameters:(PTSendPhoneLoginVerificationCodeV2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  发送手机号登录注册验证码
*/
- (RACSignal *)sendPhoneLoginVerificationCodeV2WithReqParameters:(PTSendPhoneLoginVerificationCodeV2ReqMessage *)reqParameters;
/**
  手机号验证码登录注册(不需要密码)
*/
- (RACSignal *)loginViaPhoneV2WithReqParameters:(PTLoginViaPhoneV2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  手机号验证码登录注册(不需要密码)
*/
- (RACSignal *)loginViaPhoneV2WithReqParameters:(PTLoginViaPhoneV2ReqMessage *)reqParameters;
/**
  绑定手机号(无需密码)
*/
- (RACSignal *)verifyAndBindPhoneV3WithReqParameters:(PTVerifyAndBindPhoneV3ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  绑定手机号(无需密码)
*/
- (RACSignal *)verifyAndBindPhoneV3WithReqParameters:(PTVerifyAndBindPhoneV3ReqMessage *)reqParameters;
/**
  换绑手机号(无需密码)
*/
- (RACSignal *)verifyAndReplacePhoneBindingV3WithReqParameters:(PTVerifyAndReplacePhoneBindingV3ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  换绑手机号(无需密码)
*/
- (RACSignal *)verifyAndReplacePhoneBindingV3WithReqParameters:(PTVerifyAndReplacePhoneBindingV3ReqMessage *)reqParameters;
/**
  通过设备号登录或注册（仅限 iPhone 使用）
*/
- (RACSignal *)loginViaDeviceWithReqParameters:(PTLoginViaDeviceReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  通过设备号登录或注册（仅限 iPhone 使用）
*/
- (RACSignal *)loginViaDeviceWithReqParameters:(PTLoginViaDeviceReqMessage *)reqParameters;
/**
  上传通讯录
*/
- (RACSignal *)uploadUserAddressBookWithReqParameters:(PTUploadUserAddressBookReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  上传通讯录
*/
- (RACSignal *)uploadUserAddressBookWithReqParameters:(PTUploadUserAddressBookReqMessage *)reqParameters;
/**
  通过用户已经上传的通讯录来获取通讯录中的好友
*/
- (RACSignal *)getUsersByAddressBookWithReqParameters:(PTGetUsersByAddressBookReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  通过用户已经上传的通讯录来获取通讯录中的好友
*/
- (RACSignal *)getUsersByAddressBookWithReqParameters:(PTGetUsersByAddressBookReqMessage *)reqParameters;
/**
  个人主页厨友推荐
*/
- (RACSignal *)getUserPageRecommendationUsersWithReqParameters:(PTGetUserPageRecommendationUsersReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  个人主页厨友推荐
*/
- (RACSignal *)getUserPageRecommendationUsersWithReqParameters:(PTGetUserPageRecommendationUsersReqMessage *)reqParameters;
/**
  关注动态页厨友推荐
*/
- (RACSignal *)getFeedsPageRecommendationUsersWithReqParameters:(PTGetFeedsPageRecommendationUsersReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  关注动态页厨友推荐
*/
- (RACSignal *)getFeedsPageRecommendationUsersWithReqParameters:(PTGetFeedsPageRecommendationUsersReqMessage *)reqParameters;
/**
  取设备的个性化标签
*/
- (RACSignal *)getDeviceRecommendTagsWithReqParameters:(PTGetDeviceRecommendTagsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  取设备的个性化标签
*/
- (RACSignal *)getDeviceRecommendTagsWithReqParameters:(PTGetDeviceRecommendTagsReqMessage *)reqParameters;
/**
  根据设备号查看是否看过新隐私协议
*/
- (RACSignal *)getIsDeviceAgreeAgreementWithReqParameters:(PTGetIsDeviceAgreeAgreementReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  根据设备号查看是否看过新隐私协议
*/
- (RACSignal *)getIsDeviceAgreeAgreementWithReqParameters:(PTGetIsDeviceAgreeAgreementReqMessage *)reqParameters;
/**
  根据客户端传上来的时间来看是否需要更新隐私协议
*/
- (RACSignal *)isUpdateAgreementWithReqParameters:(PTIsUpdateAgreementReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  根据客户端传上来的时间来看是否需要更新隐私协议
*/
- (RACSignal *)isUpdateAgreementWithReqParameters:(PTIsUpdateAgreementReqMessage *)reqParameters;
/**
  看过新隐私协议做标记
*/
- (RACSignal *)deviceAgreeAgreementWithReqParameters:(PTDeviceAgreeAgreementReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  看过新隐私协议做标记
*/
- (RACSignal *)deviceAgreeAgreementWithReqParameters:(PTDeviceAgreeAgreementReqMessage *)reqParameters;
/**
  创建用户注销申请
*/
- (RACSignal *)createAccountDeactivationApplicationWithReqParameters:(PTCreateAccountDeactivationApplicationReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  创建用户注销申请
*/
- (RACSignal *)createAccountDeactivationApplicationWithReqParameters:(PTCreateAccountDeactivationApplicationReqMessage *)reqParameters;
/**
  获取用户注销申请
*/
- (RACSignal *)getAccountDeactivationApplicationWithReqParameters:(PTGetAccountDeactivationApplicationReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取用户注销申请
*/
- (RACSignal *)getAccountDeactivationApplicationWithReqParameters:(PTGetAccountDeactivationApplicationReqMessage *)reqParameters;
/**
  第三方登录根据 auth code 获取 auth key
*/
- (RACSignal *)getAuthKeyByAuthCodeWithReqParameters:(PTGetAuthKeyByAuthCodeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  第三方登录根据 auth code 获取 auth key
*/
- (RACSignal *)getAuthKeyByAuthCodeWithReqParameters:(PTGetAuthKeyByAuthCodeReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
