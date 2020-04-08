#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "PTApiNewageService+Signature.h"
#import "PTApiNewageServicePrivate.h"
#import "PTModel.h"
#import "XCFPTApiKit.h"
#import "PTAdvertiserAccessTopTenStatisticMessage.h"
#import "PTAdvertiserDataStatisticMessage.h"
#import "PTAdvertiserKeywordStatisticMessage.h"
#import "PTAdvertiserProductMessage.h"
#import "PTAdvertiserSourceCountDataMessage.h"
#import "PTAdvertiserSourceCountStatisticMessage.h"
#import "PTOneDayOneNumberStatisticDataMessage.h"
#import "PTOneDayOneNumberStatisticMessage.h"
#import "PTOptionStatsListMessage.h"
#import "PTOptionStatsMessage.h"
#import "PTQuestionnaireStatsMessage.h"
#import "PTADInfoMessage.h"
#import "PTADMessage.h"
#import "PTSdkAdMessage.h"
#import "PTSdkAdScheduleMessage.h"
#import "PTSlotADInfoMessage.h"
#import "PTADTypeEnum.h"
#import "PTBoardMessage.h"
#import "PTTargetMessage.h"
#import "PTTargetTypeEnum.h"
#import "PTChucodeMessage.h"
#import "PTClassroomTabExtraMessage.h"
#import "PTClassroomTabMessage.h"
#import "PTDisplayStyleMessage.h"
#import "PTChannelTypeEnum.h"
#import "PTCourseRateMessage.h"
#import "PTCourseRateTagMessage.h"
#import "PTCourseRateUserMessage.h"
#import "PTCoursesWithTagMessage.h"
#import "PTCourseTagMessage.h"
#import "PTClassroomVoucherMessage.h"
#import "PTCommentMessage.h"
#import "PTCursorMessage.h"
#import "PTEmptyMessage.h"
#import "PTImageParagraphMessage.h"
#import "PTIngredientMessage.h"
#import "PTIngredientParagraphMessage.h"
#import "PTMarkupMessage.h"
#import "PTMarkupTextMessage.h"
#import "PTMicroVideoParagraphMessage.h"
#import "PTNetworkCarrierEnum.h"
#import "PTNetworkInfoMessage.h"
#import "PTNetworkSignalEnum.h"
#import "PTOauthProviderEnum.h"
#import "PTOrderEnum.h"
#import "PTParagraphMessage.h"
#import "PTPictureDictMessage.h"
#import "PTReportTypeEnum.h"
#import "PTRichTextMessage.h"
#import "PTSensorEventMessage.h"
#import "PTTextParagraphMessage.h"
#import "PTTrackingMessage.h"
#import "PTUserUsageEnvironmentMessage.h"
#import "PTVideoDictMessage.h"
#import "PTVodVideoParagraphMessage.h"
#import "PTCourseKindMessage.h"
#import "PTCourseLabelMessage.h"
#import "PTCourseLabelStyleMessage.h"
#import "PTCourseLecturerMessage.h"
#import "PTCourseLessonMessage.h"
#import "PTCourseMessage.h"
#import "PTCourseRateDisplayInfoMessage.h"
#import "PTExtraInfoMessage.h"
#import "PTLessonProcessMessage.h"
#import "PTLiveStatusEnum.h"
#import "PTPriceDisplayStyleEnum.h"
#import "PTRightInfoLabelMessage.h"
#import "PTRightInfoStyleEnum.h"
#import "PTDishMessage.h"
#import "PTDishPicTagMessage.h"
#import "PTDishSourceFlagEnum.h"
#import "PTDishSourceMessage.h"
#import "PTPicTagMessage.h"
#import "PTCommentPromptRuleMessage.h"
#import "PTImageConditionMessage.h"
#import "PTTextConditionMessage.h"
#import "PTGoodsInfoMessage.h"
#import "PTSimpleGoodsInfoMessage.h"
#import "PTContentArrangeEnum.h"
#import "PTMarketTabMessage.h"
#import "PTGoodsTypeEnum.h"
#import "PTReviewCommodityGoodsMessage.h"
#import "PTReviewCommodityMessage.h"
#import "PTReviewDiggUserMessage.h"
#import "PTReviewMessage.h"
#import "PTShopInfoMessage.h"
#import "PTEquipmentBrandMessage.h"
#import "PTEquipmentCategoryMessage.h"
#import "PTEquipmentMessage.h"
#import "PTEquipmentModelMessage.h"
#import "PTAtUsersMessage.h"
#import "PTEssayCommentMessage.h"
#import "PTEssayMessage.h"
#import "PTEssayTypeEnum.h"
#import "PTEventCustomizationMessage.h"
#import "PTEventMessage.h"
#import "PTBannerMessage.h"
#import "PTCardDishCellMessage.h"
#import "PTHybridListCellMessage.h"
#import "PTLineCourseCellMessage.h"
#import "PTLineRecipeCellMessage.h"
#import "PTLineRichTextCellMessage.h"
#import "PTLineUserCellMessage.h"
#import "PTPictureIconMessage.h"
#import "PTPictureIconsCellMessage.h"
#import "PTPlaceholderAdCellMessage.h"
#import "PTPureRichTextCellMessage.h"
#import "PTRichTextBoardCellMessage.h"
#import "PTRichTextCourseCellMessage.h"
#import "PTRichTextDishCellMessage.h"
#import "PTRichTextGoodsCellMessage.h"
#import "PTRichTextRecipeCellMessage.h"
#import "PTSideSlipBannersCellMessage.h"
#import "PTSideSlipCoursesCellMessage.h"
#import "PTSideSlipGoodsCellMessage.h"
#import "PTSubtitleButtonCountdownMessage.h"
#import "PTSubtitleButtonEmptyMessage.h"
#import "PTSubtitleButtonMessage.h"
#import "PTSubtitleButtonTextAndUrlMessage.h"
#import "PTTextIconMessage.h"
#import "PTTextIconsCellMessage.h"
#import "PTUniversalSearchUserCardCellMessage.h"
#import "PTVerticalSlipBannersCellMessage.h"
#import "PTVerticalSlipCoursesCellMessage.h"
#import "PTInterestedTagMessage.h"
#import "PTAskMpQuestionNotificationMessage.h"
#import "PTAskQuestionNotificationMessage.h"
#import "PTAskRecipeQuestionNotificationMessage.h"
#import "PTCollectCourseNotificationMessage.h"
#import "PTCollectEssayNotificationMessage.h"
#import "PTCollectRecipeNotificationMessage.h"
#import "PTCommentDishNotificationMessage.h"
#import "PTCommentEssayNotificationMessage.h"
#import "PTCommentReviewNotificationMessage.h"
#import "PTCookCourseNotificationMessage.h"
#import "PTCookRecipeNotificationMessage.h"
#import "PTDiggDishNotificationMessage.h"
#import "PTDiggEssayNotificationMessage.h"
#import "PTDiggMpQuestionNotificationMessage.h"
#import "PTDiggQuestionAnswerNotificationMessage.h"
#import "PTDiggQuestionNotificationMessage.h"
#import "PTDiggRecipeQuestionAnswerNotificationMessage.h"
#import "PTDiggRecipeQuestionNotificationMessage.h"
#import "PTDiggReviewNotificationMessage.h"
#import "PTFollowUserNotificationMessage.h"
#import "PTNotificationMessage.h"
#import "PTNotificationSettingStatusMessage.h"
#import "PTNotificationStatusEnum.h"
#import "PTNotificationTabMessage.h"
#import "PTOfficialNotificationMessage.h"
#import "PTPublishEssayNotificationMessage.h"
#import "PTReplyDishCommentNotificationMessage.h"
#import "PTReplyMpQuestionNotificationMessage.h"
#import "PTReplyQuestionAnswerNotificationMessage.h"
#import "PTReplyQuestionNotificationMessage.h"
#import "PTReplyRecipeQuestionAnswerNotificationMessage.h"
#import "PTReplyRecipeQuestionNotificationMessage.h"
#import "PTReplyRecipeQuestionV2NotificationMessage.h"
#import "PTReplyShopReviewNotificationMessage.h"
#import "PTPostMessage.h"
#import "PTMpQuestionAnswerMessage.h"
#import "PTMpQuestionMessage.h"
#import "PTQuestionAnswerMessage.h"
#import "PTQuestionMessage.h"
#import "PTQuestionTargetMessage.h"
#import "PTQuestionTargetTypeEnum.h"
#import "PTRecipeQuestionAnswerMessage.h"
#import "PTRecipeQuestionAnswerV2Message.h"
#import "PTRecipeQuestionMessage.h"
#import "PTRecipeQuestionV2Message.h"
#import "PTAnswerInfoMessage.h"
#import "PTLocationQuestionMessage.h"
#import "PTOptionMessage.h"
#import "PTPictureOptionMessage.h"
#import "PTPictureRadioQuestionMessage.h"
#import "PTQuestionnaireMessage.h"
#import "PTQuestionnaireQuestionAnswerMessage.h"
#import "PTQuestionnaireQuestionMessage.h"
#import "PTRadioQuestionMessage.h"
#import "PTRememberedAnswerInfoMessage.h"
#import "PTTextQuestionMessage.h"
#import "PTUserAnswerMessage.h"
#import "PTInstructionMessage.h"
#import "PTRecipeAdaptationMessage.h"
#import "PTRecipeCatsMessage.h"
#import "PTRecipeLabelMessage.h"
#import "PTRecipeMessage.h"
#import "PTRecipeStatsMessage.h"
#import "PTRecipeAppraisalAnswerMessage.h"
#import "PTRecipeAppraisalQuestionMessage.h"
#import "PTRecipeAppraisalTypeEnum.h"
#import "PTSearchPageRecommendationKeywordMessage.h"
#import "PTSimilarEssayMessage.h"
#import "PTSimilarRecipeMessage.h"
#import "PTThemeMessage.h"
#import "PTAccountMessage.h"
#import "PTAddressBookFriendMessage.h"
#import "PTContactMessage.h"
#import "PTMinorUserMessage.h"
#import "PTUserMessage.h"
#import "PTUserMobilePhoneMessage.h"
#import "PTUserSocialNamesMessage.h"
#import "PTAccountDeactivationApplicationMessage.h"
#import "PTApplicationStatusEnum.h"
#import "PTExtraIconTypeEnum.h"
#import "PTExtraMessage.h"
#import "PTTargetInfoMessage.h"
#import "PTTargetTypeEnum.h"
#import "PTWaterfallRecommendationMessage.h"
#import "PTDependentWelfareViewMessage.h"
#import "PTFreshWelfareInfoMessage.h"
#import "PTFreshWelfareStatsReportMessage.h"
#import "PTFreshWelfareStatusEnum.h"
#import "PTHistoricalWelfareViewMessage.h"
#import "PTIndependentWelfareViewMessage.h"
#import "PTSummaryMessage.h"
#import "PTUserHomeMapMessage.h"
#import "PTWelfareViewMessage.h"
#import "PTApiNewageService+Account.h"
#import "PTApiNewageService+AD.h"
#import "PTApiNewageService+Advertiser.h"
#import "PTApiNewageService+Board.h"
#import "PTApiNewageService+Chucode.h"
#import "PTApiNewageService+City.h"
#import "PTApiNewageService+Course.h"
#import "PTApiNewageService+Dish.h"
#import "PTApiNewageService+Ec.h"
#import "PTApiNewageService+Equipment.h"
#import "PTApiNewageService+Essay.h"
#import "PTApiNewageService+Event.h"
#import "PTApiNewageService+Experiment.h"
#import "PTApiNewageService+Feeds.h"
#import "PTApiNewageService+Homepage.h"
#import "PTApiNewageService+InterestedTag.h"
#import "PTApiNewageService+Market.h"
#import "PTApiNewageService+Notification.h"
#import "PTApiNewageService+Pkx.h"
#import "PTApiNewageService+Question.h"
#import "PTApiNewageService+Questionnaire.h"
#import "PTApiNewageService+Recipe.h"
#import "PTApiNewageService+RecipeAppraisal.h"
#import "PTApiNewageService+Search.h"
#import "PTApiNewageService+ShareRecipe.h"
#import "PTApiNewageService+Theme.h"
#import "PTApiNewageService+VodVideo.h"
#import "PTApiNewageService+Welfare.h"
#import "PTApiNewageService.h"
#import "PTCommonRequestParameterMessage.h"
#import "PTCommonResponseParameterMessage.h"
#import "PTErrorCodeMessage.h"
#import "PTHeaderMessage.h"
#import "PTAgreementStyleEnum.h"
#import "PTCreateAccountDeactivationApplicationReqMessage.h"
#import "PTCreateAccountDeactivationApplicationRespMessage.h"
#import "PTCreateViaWeappWithPhoneBindingReqMessage.h"
#import "PTCreateViaWeappWithPhoneBindingRespMessage.h"
#import "PTCreateViaWechatWithPhoneBindingReqMessage.h"
#import "PTCreateViaWechatWithPhoneBindingRespMessage.h"
#import "PTDeviceAgreeAgreementReqMessage.h"
#import "PTDeviceAgreeAgreementRespMessage.h"
#import "PTGetAccountDeactivationApplicationReqMessage.h"
#import "PTGetAccountDeactivationApplicationRespMessage.h"
#import "PTGetAuthKeyByAuthCodeReqMessage.h"
#import "PTGetAuthKeyByAuthCodeRespMessage.h"
#import "PTGetDeviceRecommendTagsReqMessage.h"
#import "PTGetDeviceRecommendTagsRespMessage.h"
#import "PTGetFeedsPageRecommendationUsersReqMessage.h"
#import "PTGetFeedsPageRecommendationUsersRespMessage.h"
#import "PTGetIsDeviceAgreeAgreementReqMessage.h"
#import "PTGetIsDeviceAgreeAgreementRespMessage.h"
#import "PTGetUserPageRecommendationUsersReqMessage.h"
#import "PTGetUserPageRecommendationUsersRespMessage.h"
#import "PTGetUsersByAddressBookReqMessage.h"
#import "PTGetUsersByAddressBookRespMessage.h"
#import "PTIsUpdateAgreementReqMessage.h"
#import "PTIsUpdateAgreementRespMessage.h"
#import "PTLoginViaDeviceReqMessage.h"
#import "PTLoginViaDeviceRespMessage.h"
#import "PTLoginViaPhoneV2ReqMessage.h"
#import "PTLoginViaPhoneV2RespMessage.h"
#import "PTLoginViaWeappPhoneReqMessage.h"
#import "PTLoginViaWeappPhoneRespMessage.h"
#import "PTLoginViaWeappReqMessage.h"
#import "PTLoginViaWeappRespMessage.h"
#import "PTLoginViaWechatReqMessage.h"
#import "PTLoginViaWechatRespMessage.h"
#import "PTRecommendationUserMessage.h"
#import "PTSendPhoneLoginVerificationCodeV2ReqMessage.h"
#import "PTSendPhoneLoginVerificationCodeV2RespMessage.h"
#import "PTUploadUserAddressBookReqMessage.h"
#import "PTUploadUserAddressBookRespMessage.h"
#import "PTVerifyAndBindPhoneV3ReqMessage.h"
#import "PTVerifyAndBindPhoneV3RespMessage.h"
#import "PTVerifyAndReplacePhoneBindingV3ReqMessage.h"
#import "PTVerifyAndReplacePhoneBindingV3RespMessage.h"
#import "PTCacheSplashAdsReqMessage.h"
#import "PTCacheSplashAdsRespMessage.h"
#import "PTGetDishesUploadedPageBannerInfoReqMessage.h"
#import "PTGetDishesUploadedPageBannerInfoRespMessage.h"
#import "PTLookupAdsBySlotNameReqMessage.h"
#import "PTLookupAdsBySlotNameRespMessage.h"
#import "PTLookupSdkAdScheduleReqMessage.h"
#import "PTLookupSdkAdScheduleRespMessage.h"
#import "PTGetAdvertiserAccessSourceStatisticReqMessage.h"
#import "PTGetAdvertiserAccessSourceStatisticRespMessage.h"
#import "PTGetAdvertiserAccessTopTenStatisticReqMessage.h"
#import "PTGetAdvertiserAccessTopTenStatisticRespMessage.h"
#import "PTGetAdvertiserDataStatisticReqMessage.h"
#import "PTGetAdvertiserDataStatisticRespMessage.h"
#import "PTGetAdvertiserKeywordStatisticReqMessage.h"
#import "PTGetAdvertiserKeywordStatisticRespMessage.h"
#import "PTGetAdvertiserOneDayOneNumberStatReqMessage.h"
#import "PTGetAdvertiserOneDayOneNumberStatRespMessage.h"
#import "PTGetAdvertiserProductReqMessage.h"
#import "PTGetAdvertiserProductRespMessage.h"
#import "PTGetAdvertiserQuestionnaireStatisticsReqMessage.h"
#import "PTGetAdvertiserQuestionnaireStatisticsRespMessage.h"
#import "PTGetAdvertiserRecipeDailyStatisticReqMessage.h"
#import "PTGetAdvertiserRecipeDailyStatisticRespMessage.h"
#import "PTGetAdvertiserSourceImpressionStatisticReqMessage.h"
#import "PTGetAdvertiserSourceImpressionStatisticRespMessage.h"
#import "PTStatisticTypeEnum.h"
#import "PTCountUserBoardsReqMessage.h"
#import "PTCountUserBoardsRespMessage.h"
#import "PTIsTargetInUserBoardsReqMessage.h"
#import "PTIsTargetInUserBoardsRespMessage.h"
#import "PTPagedUserTargetsReqMessage.h"
#import "PTPagedUserTargetsRespMessage.h"
#import "PTGetChucodeReqMessage.h"
#import "PTGetChucodeRespMessage.h"
#import "PTPagedClassroomHomepageRecommendationsReqMessage.h"
#import "PTPagedClassroomHomepageRecommendationsRespMessage.h"
#import "PTPagedClassroomHomepageTabsReqMessage.h"
#import "PTPagedClassroomHomepageTabsRespMessage.h"
#import "PTGetClassroomTabsReqMessage.h"
#import "PTGetClassroomTabsRespMessage.h"
#import "PTGetCourseFitlerEnum.h"
#import "PTGetMyCoursesReqMessage.h"
#import "PTGetMyCoursesRespMessage.h"
#import "PTGetMyCoursesStatisticsReqMessage.h"
#import "PTGetMyCoursesStatisticsRespMessage.h"
#import "PTSearchMyCoursesReqMessage.h"
#import "PTSearchMyCoursesRespMessage.h"
#import "PTGetCourseDishesOrderByTimeReqMessage.h"
#import "PTGetCourseDishesOrderByTimeRespMessage.h"
#import "PTCreateCourseFeedbackReqMessage.h"
#import "PTCreateCourseFeedbackRespMessage.h"
#import "PTBindForFreeCourseReqMessage.h"
#import "PTBindForFreeCourseRespMessage.h"
#import "PTGetFreeCourseListReqMessage.h"
#import "PTGetFreeCourseListRespMessage.h"
#import "PTGetMonthlyCourseRankingListReqMessage.h"
#import "PTGetMonthlyCourseRankingListRespMessage.h"
#import "PTMonthlyRankingListMessage.h"
#import "PTPagedGetTopCourseRankingListReqMessage.h"
#import "PTPagedGetTopCourseRankingListRespMessage.h"
#import "PTPagedCourseRatesReqMessage.h"
#import "PTPagedCourseRatesRespMessage.h"
#import "PTShowCourseRateTagsReqMessage.h"
#import "PTShowCourseRateTagsRespMessage.h"
#import "PTPagedCoursesBySectionReqMessage.h"
#import "PTPagedCoursesBySectionRespMessage.h"
#import "PTGetCourseTagReqMessage.h"
#import "PTGetCourseTagRespMessage.h"
#import "PTGetTagHotCoursesReqMessage.h"
#import "PTGetTagHotCoursesRespMessage.h"
#import "PTPagedGetTagCoursesReqMessage.h"
#import "PTPagedGetTagCoursesRespMessage.h"
#import "PTApplyForCourseVoucherReqMessage.h"
#import "PTApplyForCourseVoucherRespMessage.h"
#import "PTShowDiscoverRecipesReqMessage.h"
#import "PTShowDiscoverRecipesRespMessage.h"
#import "PTCanUpdateDishReqMessage.h"
#import "PTCanUpdateDishRespMessage.h"
#import "PTCollectDishReqMessage.h"
#import "PTCollectDishRespMessage.h"
#import "PTPagedUserCollectedDishesReqMessage.h"
#import "PTPagedUserCollectedDishesRespMessage.h"
#import "PTUncollectDishReqMessage.h"
#import "PTUncollectDishRespMessage.h"
#import "PTUpdateDishReqMessage.h"
#import "PTUpdateDishRespMessage.h"
#import "PTPagedEcHomepageRecommendationsReqMessage.h"
#import "PTPagedEcHomepageRecommendationsRespMessage.h"
#import "PTPagedEcHomepageTabsReqMessage.h"
#import "PTPagedEcHomepageTabsRespMessage.h"
#import "PTBindUserEquipmentReqMessage.h"
#import "PTBindUserEquipmentRespMessage.h"
#import "PTGetAllEquipmentBrandsByCategoryReqMessage.h"
#import "PTGetAllEquipmentBrandsByCategoryRespMessage.h"
#import "PTGetRecommendedEquipmentBrandsReqMessage.h"
#import "PTGetRecommendedEquipmentBrandsRespMessage.h"
#import "PTGetRecommendedEquipmentCategoriesReqMessage.h"
#import "PTGetRecommendedEquipmentCategoriesRespMessage.h"
#import "PTGetRecommendedEquipmentModelsReqMessage.h"
#import "PTGetRecommendedEquipmentModelsRespMessage.h"
#import "PTGetUserAllEquipmentsReqMessage.h"
#import "PTGetUserAllEquipmentsRespMessage.h"
#import "PTSearchEquipmentBrandsReqMessage.h"
#import "PTSearchEquipmentBrandsRespMessage.h"
#import "PTSearchEquipmentCategoriesReqMessage.h"
#import "PTSearchEquipmentCategoriesRespMessage.h"
#import "PTSearchEquipmentModelsReqMessage.h"
#import "PTSearchEquipmentModelsRespMessage.h"
#import "PTUnbindUserEquipmentsReqMessage.h"
#import "PTUnbindUserEquipmentsRespMessage.h"
#import "PTCanUpdateEssayReqMessage.h"
#import "PTCanUpdateEssayRespMessage.h"
#import "PTCollectEssayReqMessage.h"
#import "PTCollectEssayRespMessage.h"
#import "PTCreateCommentReqMessage.h"
#import "PTCreateCommentRespMessage.h"
#import "PTCreateEssayReqMessage.h"
#import "PTCreateEssayRespMessage.h"
#import "PTDelEssayReqMessage.h"
#import "PTDelEssayRespMessage.h"
#import "PTDiggEssayReqMessage.h"
#import "PTDiggEssayRespMessage.h"
#import "PTListCommentReqMessage.h"
#import "PTListCommentRespMessage.h"
#import "PTListEssaysReqMessage.h"
#import "PTListEssaysRespMessage.h"
#import "PTListUserEssaysReqMessage.h"
#import "PTListUserEssaysRespMessage.h"
#import "PTPagedGetDiggEssayUsersReqMessage.h"
#import "PTPagedGetDiggEssayUsersRespMessage.h"
#import "PTPagedRelatedEssaysReqMessage.h"
#import "PTPagedRelatedEssaysRespMessage.h"
#import "PTPagedUserCollectedEssaysReqMessage.h"
#import "PTPagedUserCollectedEssaysRespMessage.h"
#import "PTRelatedEssayMessage.h"
#import "PTRemoveCommentReqMessage.h"
#import "PTRemoveCommentRespMessage.h"
#import "PTReportEssayCommentReqMessage.h"
#import "PTReportEssayCommentRespMessage.h"
#import "PTReportEssayReqMessage.h"
#import "PTReportEssayRespMessage.h"
#import "PTShowEssayReqMessage.h"
#import "PTShowEssayRespMessage.h"
#import "PTUncollectEssayReqMessage.h"
#import "PTUncollectEssayRespMessage.h"
#import "PTUndiggEssayReqMessage.h"
#import "PTUndiggEssayRespMessage.h"
#import "PTUpdateEssayReqMessage.h"
#import "PTUpdateEssayRespMessage.h"
#import "PTGetRecommendEventsReqMessage.h"
#import "PTGetRecommendEventsRespMessage.h"
#import "PTListEventDishesReqMessage.h"
#import "PTListEventDishesRespMessage.h"
#import "PTPagedEpidemicEventDishesReqMessage.h"
#import "PTPagedEpidemicEventDishesRespMessage.h"
#import "PTPagedEventDishesOrderByTimeV5ReqMessage.h"
#import "PTPagedEventDishesOrderByTimeV5RespMessage.h"
#import "PTBatchGetExperimentResultsReqMessage.h"
#import "PTBatchGetExperimentResultsRespMessage.h"
#import "PTExperimentResultMessage.h"
#import "PTGetExperimentResultReqMessage.h"
#import "PTGetExperimentResultRespMessage.h"
#import "PTFeedsGroupMessage.h"
#import "PTFeedsMessage.h"
#import "PTFeedsTargetTypeEnum.h"
#import "PTGetFeedsGroupsReqMessage.h"
#import "PTGetFeedsGroupsRespMessage.h"
#import "PTGetRecipeFeedsReqMessage.h"
#import "PTGetRecipeFeedsRespMessage.h"
#import "PTMarkFeedsAsReadReqMessage.h"
#import "PTMarkFeedsAsReadRespMessage.h"
#import "PTMarkRecipeFeedsAsReadReqMessage.h"
#import "PTMarkRecipeFeedsAsReadRespMessage.h"
#import "PTRecipeFeedV1Message.h"
#import "PTObtainFreePublicCourseReqMessage.h"
#import "PTObtainFreePublicCourseRespMessage.h"
#import "PTPagedHomepageDiscoverTabRecommendationsReqMessage.h"
#import "PTPagedHomepageDiscoverTabRecommendationsRespMessage.h"
#import "PTGetInterestedTagsReqMessage.h"
#import "PTGetInterestedTagsRespMessage.h"
#import "PTSetInterestedTagsReqMessage.h"
#import "PTSetInterestedTagsRespMessage.h"
#import "PTGetMarketTabsReqMessage.h"
#import "PTGetMarketTabsRespMessage.h"
#import "PTChangeNotificationSettingStatusReqMessage.h"
#import "PTChangeNotificationSettingStatusRespMessage.h"
#import "PTGetNotificationSettingStatusReqMessage.h"
#import "PTGetNotificationSettingStatusRespMessage.h"
#import "PTGetNotificationsReqMessage.h"
#import "PTGetNotificationsRespMessage.h"
#import "PTGetNotificationTabsReqMessage.h"
#import "PTGetNotificationTabsRespMessage.h"
#import "PTMarkTabAsReadReqMessage.h"
#import "PTMarkTabAsReadRespMessage.h"
#import "PTCommentPromptRulesReqMessage.h"
#import "PTCommentPromptRulesRespMessage.h"
#import "PTPkxRegisterPdidReqMessage.h"
#import "PTPkxRegisterPdidRespMessage.h"
#import "PTPkxRegisterPdidv2ReqMessage.h"
#import "PTPkxRegisterPdidv2RespMessage.h"
#import "PTAnswerQuestionReqMessage.h"
#import "PTAnswerQuestionRespMessage.h"
#import "PTAskQuestionReqMessage.h"
#import "PTAskQuestionRespMessage.h"
#import "PTDeleteAnswerReqMessage.h"
#import "PTDeleteAnswerRespMessage.h"
#import "PTDeleteQuestionReqMessage.h"
#import "PTDeleteQuestionRespMessage.h"
#import "PTDiggQuestionAnswerReqMessage.h"
#import "PTDiggQuestionAnswerRespMessage.h"
#import "PTDiggQuestionReqMessage.h"
#import "PTDiggQuestionRespMessage.h"
#import "PTPagedQuestionAnswersReqMessage.h"
#import "PTPagedQuestionAnswersRespMessage.h"
#import "PTPagedQuestionsReqMessage.h"
#import "PTPagedQuestionsRespMessage.h"
#import "PTReportAnswerReqMessage.h"
#import "PTReportAnswerRespMessage.h"
#import "PTReportQuestionReqMessage.h"
#import "PTReportQuestionRespMessage.h"
#import "PTUndiggQuestionAnswerReqMessage.h"
#import "PTUndiggQuestionAnswerRespMessage.h"
#import "PTUndiggQuestionReqMessage.h"
#import "PTUndiggQuestionRespMessage.h"
#import "PTAnswerFreshWelfareQuestionnaireReqMessage.h"
#import "PTAnswerFreshWelfareQuestionnaireRespMessage.h"
#import "PTAnswerQuestionnaireReqMessage.h"
#import "PTAnswerQuestionnaireRespMessage.h"
#import "PTCloseQuestionnaireReqMessage.h"
#import "PTCloseQuestionnaireRespMessage.h"
#import "PTGetFreshWelfareQuestionnaireReqMessage.h"
#import "PTGetFreshWelfareQuestionnaireRespMessage.h"
#import "PTGetQuestionnaireReqMessage.h"
#import "PTGetQuestionnaireRespMessage.h"
#import "PTGetRecipesByIngsReqMessage.h"
#import "PTGetRecipesByIngsRespMessage.h"
#import "PTGetRecipeAppraisalQuestionReqMessage.h"
#import "PTGetRecipeAppraisalQuestionRespMessage.h"
#import "PTSetRecipeAppraisalAnswerReqMessage.h"
#import "PTSetRecipeAppraisalAnswerRespMessage.h"
#import "PTGetRecipeDishesOrderByTimeReqMessage.h"
#import "PTGetRecipeDishesOrderByTimeRespMessage.h"
#import "PTGetRecipeFeedsV2ReqMessage.h"
#import "PTGetRecipeFeedsV2RespMessage.h"
#import "PTRecipeFeedMessage.h"
#import "PTRecipePageMetaInfoReqMessage.h"
#import "PTRecipePageMetaInfoRespMessage.h"
#import "PTAnswerRecipeQuestionV2ReqMessage.h"
#import "PTAnswerRecipeQuestionV2RespMessage.h"
#import "PTDeleteRecipeAnswerReqMessage.h"
#import "PTDeleteRecipeAnswerRespMessage.h"
#import "PTDiggRecipeQuestionAnswerReqMessage.h"
#import "PTDiggRecipeQuestionAnswerRespMessage.h"
#import "PTPagedRecipeQuestionAnswersReqMessage.h"
#import "PTPagedRecipeQuestionAnswersRespMessage.h"
#import "PTPagedRecipeQuestionsReqMessage.h"
#import "PTPagedRecipeQuestionsRespMessage.h"
#import "PTPagedRecipeQuestionsV2ReqMessage.h"
#import "PTPagedRecipeQuestionsV2RespMessage.h"
#import "PTRecipeAskQuestionReqMessage.h"
#import "PTRecipeAskQuestionRespMessage.h"
#import "PTReportRecipeAnswerReqMessage.h"
#import "PTReportRecipeAnswerRespMessage.h"
#import "PTUndiggRecipeQuestionAnswerReqMessage.h"
#import "PTUndiggRecipeQuestionAnswerRespMessage.h"
#import "PTGetSameCityRecommendationsReqMessage.h"
#import "PTGetSameCityRecommendationsRespMessage.h"
#import "PTSameCityRecommendationMessage.h"
#import "PTSearchPageRecommendationKeywordsReqMessage.h"
#import "PTSearchPageRecommendationKeywordsRespMessage.h"
#import "PTSearchTargetMessage.h"
#import "PTUniversalSearchV3ReqMessage.h"
#import "PTUniversalSearchV3RespMessage.h"
#import "PTWaterfallStyleUniversalSearchKeywordsReqMessage.h"
#import "PTWaterfallStyleUniversalSearchKeywordsRespMessage.h"
#import "PTWaterfallStyleUniversalSearchReqMessage.h"
#import "PTWaterfallStyleUniversalSearchRespMessage.h"
#import "PTGetShareRecipeTitleReqMessage.h"
#import "PTGetShareRecipeTitleRespMessage.h"
#import "PTPagedSimilarEssayReqMessage.h"
#import "PTPagedSimilarEssayRespMessage.h"
#import "PTSearchQuestionReqMessage.h"
#import "PTSearchQuestionRespMessage.h"
#import "PTSimilarQuestionMessage.h"
#import "PTPagedSimilarRecipeReqMessage.h"
#import "PTPagedSimilarRecipeRespMessage.h"
#import "PTListThemeEssaysByHotReqMessage.h"
#import "PTListThemeEssaysByHotRespMessage.h"
#import "PTListThemeEssaysByTimeReqMessage.h"
#import "PTListThemeEssaysByTimeRespMessage.h"
#import "PTListThemeEssaysReqMessage.h"
#import "PTListThemeEssaysRespMessage.h"
#import "PTListThemesReqMessage.h"
#import "PTListThemesRespMessage.h"
#import "PTListThemesV2ReqMessage.h"
#import "PTListThemesV2RespMessage.h"
#import "PTShowThemeReqMessage.h"
#import "PTShowThemeRespMessage.h"
#import "PTPagedTopCoursesPurchasedByConsumersReqMessage.h"
#import "PTPagedTopCoursesPurchasedByConsumersRespMessage.h"
#import "PTGetSignatureReqMessage.h"
#import "PTGetSignatureRespMessage.h"
#import "PTGetFreshWelfareStatsReportReqMessage.h"
#import "PTGetFreshWelfareStatsReportRespMessage.h"
#import "PTGetFreshWelfareStatusReqMessage.h"
#import "PTGetFreshWelfareStatusRespMessage.h"
#import "PTGetUnfinishedWelfareUrlReqMessage.h"
#import "PTGetUnfinishedWelfareUrlRespMessage.h"
#import "PTGetUserWelfareViewReqMessage.h"
#import "PTGetUserWelfareViewRespMessage.h"
#import "PTPagedUserHistoricalWelfareViewsReqMessage.h"
#import "PTPagedUserHistoricalWelfareViewsRespMessage.h"

FOUNDATION_EXPORT double YJLibraryVersionNumber;
FOUNDATION_EXPORT const unsigned char YJLibraryVersionString[];

