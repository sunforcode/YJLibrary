// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  通知设置状态
 1表示打开
 2表示关闭
*/
@interface PTNotificationSettingStatusMessage : PTModel
@property (nonatomic, assign) int32_t diggDish;
@property (nonatomic, assign) int32_t diggComment;
@property (nonatomic, assign) int32_t collectRecipe;
@property (nonatomic, assign) int32_t collectCourse;
@end
NS_ASSUME_NONNULL_END
