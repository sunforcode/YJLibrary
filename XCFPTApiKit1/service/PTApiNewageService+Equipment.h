// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTGetRecommendedEquipmentCategoriesReqMessage.h"
#import "PTGetRecommendedEquipmentBrandsReqMessage.h"
#import "PTCreateEquipmentCategoryReqMessage.h"
#import "PTCreateEquipmentBrandReqMessage.h"
#import "PTSearchEquipmentCategoriesReqMessage.h"
#import "PTSearchEquipmentBrandsReqMessage.h"
#import "PTPagedGetUserEquipmentsReqMessage.h"
#import "PTUnbindUserEquipmentsReqMessage.h"
#import "PTBindUserEquipmentReqMessage.h"
#import "PTGetMatchedEquipmentBindingTipsListReqMessage.h"
#import "PTCloseEquipmentBindingTipsReqMessage.h"
#import "PTGetRecommendedEquipmentCategoriesRespMessage.h"
#import "PTGetRecommendedEquipmentBrandsRespMessage.h"
#import "PTCreateEquipmentCategoryRespMessage.h"
#import "PTCreateEquipmentBrandRespMessage.h"
#import "PTSearchEquipmentCategoriesRespMessage.h"
#import "PTSearchEquipmentBrandsRespMessage.h"
#import "PTPagedGetUserEquipmentsRespMessage.h"
#import "PTUnbindUserEquipmentsRespMessage.h"
#import "PTBindUserEquipmentRespMessage.h"
#import "PTGetMatchedEquipmentBindingTipsListRespMessage.h"
#import "PTCloseEquipmentBindingTipsRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Equipment)
/**
  推荐设备品类
*/
- (RACSignal *)getRecommendedEquipmentCategoriesWithReqParameters:(PTGetRecommendedEquipmentCategoriesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  推荐设备品类
*/
- (RACSignal *)getRecommendedEquipmentCategoriesWithReqParameters:(PTGetRecommendedEquipmentCategoriesReqMessage *)reqParameters;
/**
  推荐设备品牌
*/
- (RACSignal *)getRecommendedEquipmentBrandsWithReqParameters:(PTGetRecommendedEquipmentBrandsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  推荐设备品牌
*/
- (RACSignal *)getRecommendedEquipmentBrandsWithReqParameters:(PTGetRecommendedEquipmentBrandsReqMessage *)reqParameters;
/**
  创建设备品类
*/
- (RACSignal *)createEquipmentCategoryWithReqParameters:(PTCreateEquipmentCategoryReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  创建设备品类
*/
- (RACSignal *)createEquipmentCategoryWithReqParameters:(PTCreateEquipmentCategoryReqMessage *)reqParameters;
/**
  创建设备品牌
*/
- (RACSignal *)createEquipmentBrandWithReqParameters:(PTCreateEquipmentBrandReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  创建设备品牌
*/
- (RACSignal *)createEquipmentBrandWithReqParameters:(PTCreateEquipmentBrandReqMessage *)reqParameters;
/**
  搜索设备品类
*/
- (RACSignal *)searchEquipmentCategoriesWithReqParameters:(PTSearchEquipmentCategoriesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  搜索设备品类
*/
- (RACSignal *)searchEquipmentCategoriesWithReqParameters:(PTSearchEquipmentCategoriesReqMessage *)reqParameters;
/**
  搜索设备品牌
*/
- (RACSignal *)searchEquipmentBrandsWithReqParameters:(PTSearchEquipmentBrandsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  搜索设备品牌
*/
- (RACSignal *)searchEquipmentBrandsWithReqParameters:(PTSearchEquipmentBrandsReqMessage *)reqParameters;
/**
  获取用户装备
*/
- (RACSignal *)pagedGetUserEquipmentsWithReqParameters:(PTPagedGetUserEquipmentsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取用户装备
*/
- (RACSignal *)pagedGetUserEquipmentsWithReqParameters:(PTPagedGetUserEquipmentsReqMessage *)reqParameters;
/**
  解绑用户装备
*/
- (RACSignal *)unbindUserEquipmentsWithReqParameters:(PTUnbindUserEquipmentsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  解绑用户装备
*/
- (RACSignal *)unbindUserEquipmentsWithReqParameters:(PTUnbindUserEquipmentsReqMessage *)reqParameters;
/**
  绑定用户装备
*/
- (RACSignal *)bindUserEquipmentWithReqParameters:(PTBindUserEquipmentReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  绑定用户装备
*/
- (RACSignal *)bindUserEquipmentWithReqParameters:(PTBindUserEquipmentReqMessage *)reqParameters;
/**
  根据query匹配的设备绑定提示列表
*/
- (RACSignal *)getMatchedEquipmentBindingTipsListWithReqParameters:(PTGetMatchedEquipmentBindingTipsListReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  根据query匹配的设备绑定提示列表
*/
- (RACSignal *)getMatchedEquipmentBindingTipsListWithReqParameters:(PTGetMatchedEquipmentBindingTipsListReqMessage *)reqParameters;
/**
  关闭设备绑定提示
*/
- (RACSignal *)closeEquipmentBindingTipsWithReqParameters:(PTCloseEquipmentBindingTipsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  关闭设备绑定提示
*/
- (RACSignal *)closeEquipmentBindingTipsWithReqParameters:(PTCloseEquipmentBindingTipsReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
