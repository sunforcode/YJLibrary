// apic_version = 0.5.5
#import "PTModel.h"
#import "PTCourseMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetFreeCourseListRespMessage : PTModel
/**
 课程列表
*/
@property (nonatomic, strong) NSArray<PTCourseMessage *> *courses;
@end
NS_ASSUME_NONNULL_END
