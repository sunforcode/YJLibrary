// apic_version = 0.5.5
#import "PTModel.h"
#import "PTCourseMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  横条样式的课程(搜索结果页)
*/
@interface PTLineCourseCellMessage : PTModel
@property (nonatomic, strong) PTCourseMessage *course;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *impressionSensorEvents;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *clickSensorEvents;
@end
NS_ASSUME_NONNULL_END
