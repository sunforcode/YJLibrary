// apic_version = 0.6.1
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
- (RACSignal *)createEquipmentCategoryWithReqParameters:(PTCreateEquipmentCategoryReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"equipments/categories/create.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCreateEquipmentCategoryRespMessage.class
                         requestName:@"CreateEquipmentCategory"
                           apiConfig:apiConfig];
}
- (RACSignal *)createEquipmentCategoryWithReqParameters:(PTCreateEquipmentCategoryReqMessage *)reqParameters {
    return [self createEquipmentCategoryWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)createEquipmentBrandWithReqParameters:(PTCreateEquipmentBrandReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"equipments/brands/create.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCreateEquipmentBrandRespMessage.class
                         requestName:@"CreateEquipmentBrand"
                           apiConfig:apiConfig];
}
- (RACSignal *)createEquipmentBrandWithReqParameters:(PTCreateEquipmentBrandReqMessage *)reqParameters {
    return [self createEquipmentBrandWithReqParameters:reqParameters
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
- (RACSignal *)pagedGetUserEquipmentsWithReqParameters:(PTPagedGetUserEquipmentsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"user_equipments/list.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedGetUserEquipmentsRespMessage.class
                         requestName:@"PagedGetUserEquipments"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedGetUserEquipmentsWithReqParameters:(PTPagedGetUserEquipmentsReqMessage *)reqParameters {
    return [self pagedGetUserEquipmentsWithReqParameters:reqParameters
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
- (RACSignal *)getMatchedEquipmentBindingTipsListWithReqParameters:(PTGetMatchedEquipmentBindingTipsListReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"equipments/matched_binding_tips_list.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetMatchedEquipmentBindingTipsListRespMessage.class
                         requestName:@"GetMatchedEquipmentBindingTipsList"
                           apiConfig:apiConfig];
}
- (RACSignal *)getMatchedEquipmentBindingTipsListWithReqParameters:(PTGetMatchedEquipmentBindingTipsListReqMessage *)reqParameters {
    return [self getMatchedEquipmentBindingTipsListWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)closeEquipmentBindingTipsWithReqParameters:(PTCloseEquipmentBindingTipsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"equipments/close_binding_tips.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCloseEquipmentBindingTipsRespMessage.class
                         requestName:@"CloseEquipmentBindingTips"
                           apiConfig:apiConfig];
}
- (RACSignal *)closeEquipmentBindingTipsWithReqParameters:(PTCloseEquipmentBindingTipsReqMessage *)reqParameters {
    return [self closeEquipmentBindingTipsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
