// apic_version = 0.6.1
#import "PTModel.h"
#import "PTDishMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  卡片样式的作品(作品列表页、收藏的作品列表页等)
*/
@interface PTCardDishCellMessage : PTModel
@property (nonatomic, strong) PTDishMessage *dish;
@end
NS_ASSUME_NONNULL_END
