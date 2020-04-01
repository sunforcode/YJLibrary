// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRecipeMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  横条样式的菜谱(搜索结果页)
*/
@interface PTLineRecipeCellMessage : PTModel
@property (nonatomic, strong) PTRecipeMessage *recipe;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *impressionSensorEvents;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *clickSensorEvents;
@end
NS_ASSUME_NONNULL_END
