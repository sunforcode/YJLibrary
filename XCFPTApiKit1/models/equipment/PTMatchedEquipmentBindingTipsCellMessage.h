// apic_version = 0.6.1
#import "PTModel.h"
#import "PTEquipmentCategoryMessage.h"
#import "PTEquipmentBrandMessage.h"
#import "PTEquipmentBrandMessage.h"
#import "PTGetMoreBrandsButtonMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  根据搜索词获取匹配的设备绑定提示Cell
*/
@interface PTMatchedEquipmentBindingTipsCellMessage : PTModel
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, strong) PTEquipmentCategoryMessage *category;
/**
  该品类下的热门品牌
*/
@property (nonatomic, strong) NSArray<PTEquipmentBrandMessage *> *hotBrands;
/**
  该品类下的更多品牌
*/
@property (nonatomic, strong) NSArray<PTEquipmentBrandMessage *> *moreBrands;
/**
  获取更多品牌按钮
*/
@property (nonatomic, strong) PTGetMoreBrandsButtonMessage *getMoreButton;
/**
  要插入的位置
*/
@property (nonatomic, assign) int32_t pos;
@end
NS_ASSUME_NONNULL_END
