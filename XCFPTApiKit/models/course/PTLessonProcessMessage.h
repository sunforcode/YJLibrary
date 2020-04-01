// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTLessonProcessMessage : PTModel
/**
  live状态的描述
 e.g. 即将开始、试看、暂时中断
*/
@property (nonatomic, copy) NSString *text;
/**
  live 开始到现在经过了多少秒
*/
@property (nonatomic, assign) int32_t countdown;
@property (nonatomic, assign) BOOL enabled;
@end
NS_ASSUME_NONNULL_END
