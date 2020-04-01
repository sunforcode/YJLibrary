// apic_version = 0.5.5
#import "PTApiNewageService+Equipment.h"
@implementation PTApiNewageService (Equipment)
- (RACSignal *)getRecommendedEquipmentCategoriesWithReqParameters:(PTGetRecommendedEquipmentCategoriesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"equipments/recommended_categories.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetRecommendedEquipmentCategoriesRespMessage.class
                         requestName:@"GetRecommendedEquipmentCategories"
                           apiConfig:apiConfig];
}
- (RACSignal *)getRecommendedEquipmentCategoriesWithReqParameters:(PTGetRecommendedEquipmentCategoriesReqMessage *)reqParameters {
    return [self getRecommendedEquipmentCategoriesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getRecommendedEquipmentBrandsWithReqParameters:(PTGetRecommendedEquipmentBrandsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"equipments/recommended_brands.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetRecommendedEquipmentBrandsRespMessage.class
                         requestName:@"GetRecommendedEquipmentBrands"
                           apiConfig:apiConfig];
}
- (RACSignal *)getRecommendedEquipmentBrandsWithReqParameters:(PTGetRecommendedEquipmentBrandsReqMessage *)reqParameters {
    return [self getRecommendedEquipmentBrandsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getRecommendedEquipmentModelsWithReqParameters:(PTGetRecommendedEquipmentModelsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"equipments/recommended_models.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetRecommendedEquipmentModelsRespMessage.class
                         requestName:@"GetRecommendedEquipmentModels"
                           apiConfig:apiConfig];
}
- (RACSignal *)getRecommendedEquipmentModelsWithReqParameters:(PTGetRecommendedEquipmentModelsReqMessage *)reqParameters {
    return [self getRecommendedEquipmentModelsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)searchEquipmentCategoriesWithReqParameters:(PTSearchEquipmentCategoriesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"equipments/categories/search.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTSearchEquipmentCategoriesRespMessage.class
                         requestName:@"SearchEquipmentCategories"
                           apiConfig:apiConfig];
}
- (RACSignal *)searchEquipmentCategoriesWithReqParameters:(PTSearchEquipmentCategoriesReqMessage *)reqParameters {
    return [self searchEquipmentCategoriesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)searchEquipmentBrandsWithReqParameters:(PTSearchEquipmentBrandsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"equipments/brands/search.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTSearchEquipmentBrandsRespMessage.class
                         requestName:@"SearchEquipmentBrands"
                           apiConfig:apiConfig];
}
- (RACSignal *)searchEquipmentBrandsWithReqParameters:(PTSearchEquipmentBrandsReqMessage *)reqParameters {
    return [self searchEquipmentBrandsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)searchEquipmentModelsWithReqParameters:(PTSearchEquipmentModelsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"equipments/models/search.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTSearchEquipmentModelsRespMessage.class
                         requestName:@"SearchEquipmentModels"
                           apiConfig:apiConfig];
}
- (RACSignal *)searchEquipmentModelsWithReqParameters:(PTSearchEquipmentModelsReqMessage *)reqParameters {
    return [self searchEquipmentModelsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getAllEquipmentBrandsByCategoryWithReqParameters:(PTGetAllEquipmentBrandsByCategoryReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"equipments/brands/list.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetAllEquipmentBrandsByCategoryRespMessage.class
                         requestName:@"GetAllEquipmentBrandsByCategory"
                           apiConfig:apiConfig];
}
- (RACSignal *)getAllEquipmentBrandsByCategoryWithReqParameters:(PTGetAllEquipmentBrandsByCategoryReqMessage *)reqParameters {
    return [self getAllEquipmentBrandsByCategoryWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getUserAllEquipmentsWithReqParameters:(PTGetUserAllEquipmentsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"user_equipments/list.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetUserAllEquipmentsRespMessage.class
                         requestName:@"GetUserAllEquipments"
                           apiConfig:apiConfig];
}
- (RACSignal *)getUserAllEquipmentsWithReqParameters:(PTGetUserAllEquipmentsReqMessage *)reqParameters {
    return [self getUserAllEquipmentsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)unbindUserEquipmentsWithReqParameters:(PTUnbindUserEquipmentsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"user_equipments/unbind.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTUnbindUserEquipmentsRespMessage.class
                         requestName:@"UnbindUserEquipments"
                           apiConfig:apiConfig];
}
- (RACSignal *)unbindUserEquipmentsWithReqParameters:(PTUnbindUserEquipmentsReqMessage *)reqParameters {
    return [self unbindUserEquipmentsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)bindUserEquipmentWithReqParameters:(PTBindUserEquipmentReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"user_equipments/bind.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTBindUserEquipmentRespMessage.class
                         requestName:@"BindUserEquipment"
                           apiConfig:apiConfig];
}
- (RACSignal *)bindUserEquipmentWithReqParameters:(PTBindUserEquipmentReqMessage *)reqParameters {
    return [self bindUserEquipmentWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
