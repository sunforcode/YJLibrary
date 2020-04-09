// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  更改通知开关状态的请求
 0表示未设置，不传递默认为0
 1表示打开
 2表示关闭
*/
@interface PTChangeNotificationSettingStatusReqMessage : PTModel
@property (nonatomic, assign) int32_t diggDish;
@property (nonatomic, assign) int32_t diggComment;
@property (nonatomic, assign) int32_t collectRecipe;
@property (nonatomic, assign) int32_t collectCourse;
@end
NS_ASSUME_NONNULL_END
