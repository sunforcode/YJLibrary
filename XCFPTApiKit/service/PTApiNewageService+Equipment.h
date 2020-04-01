// apic_version = 0.5.5
#import "PTApiNewageService.h"
#import "PTGetRecommendedEquipmentCategoriesReqMessage.h"
#import "PTGetRecommendedEquipmentBrandsReqMessage.h"
#import "PTGetRecommendedEquipmentModelsReqMessage.h"
#import "PTSearchEquipmentCategoriesReqMessage.h"
#import "PTSearchEquipmentBrandsReqMessage.h"
#import "PTSearchEquipmentModelsReqMessage.h"
#import "PTGetAllEquipmentBrandsByCategoryReqMessage.h"
#import "PTGetUserAllEquipmentsReqMessage.h"
#import "PTUnbindUserEquipmentsReqMessage.h"
#import "PTBindUserEquipmentReqMessage.h"
#import "PTGetRecommendedEquipmentCategoriesRespMessage.h"
#import "PTGetRecommendedEquipmentBrandsRespMessage.h"
#import "PTGetRecommendedEquipmentModelsRespMessage.h"
#import "PTSearchEquipmentCategoriesRespMessage.h"
#import "PTSearchEquipmentBrandsRespMessage.h"
#import "PTSearchEquipmentModelsRespMessage.h"
#import "PTGetAllEquipmentBrandsByCategoryRespMessage.h"
#import "PTGetUserAllEquipmentsRespMessage.h"
#import "PTUnbindUserEquipmentsRespMessage.h"
#import "PTBindUserEquipmentRespMessage.h"
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
  推荐设备型号
*/
- (RACSignal *)getRecommendedEquipmentModelsWithReqParameters:(PTGetRecommendedEquipmentModelsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  推荐设备型号
*/
- (RACSignal *)getRecommendedEquipmentModelsWithReqParameters:(PTGetRecommendedEquipmentModelsReqMessage *)reqParameters;
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
  搜索设备型号
*/
- (RACSignal *)searchEquipmentModelsWithReqParameters:(PTSearchEquipmentModelsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  搜索设备型号
*/
- (RACSignal *)searchEquipmentModelsWithReqParameters:(PTSearchEquipmentModelsReqMessage *)reqParameters;
/**
  获取品类下的所有品牌
*/
- (RACSignal *)getAllEquipmentBrandsByCategoryWithReqParameters:(PTGetAllEquipmentBrandsByCategoryReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取品类下的所有品牌
*/
- (RACSignal *)getAllEquipmentBrandsByCategoryWithReqParameters:(PTGetAllEquipmentBrandsByCategoryReqMessage *)reqParameters;
/**
  获取用户装备
*/
- (RACSignal *)getUserAllEquipmentsWithReqParameters:(PTGetUserAllEquipmentsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取用户装备
*/
- (RACSignal *)getUserAllEquipmentsWithReqParameters:(PTGetUserAllEquipmentsReqMessage *)reqParameters;
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
@end
NS_ASSUME_NONNULL_END
