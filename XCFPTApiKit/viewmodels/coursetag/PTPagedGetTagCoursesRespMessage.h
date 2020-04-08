// apic_version = 0.5.5
#import "PTModel.h"
#import "PTCourseMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedGetTagCoursesRespMessage : PTModel
/**
 课程列表
*/
@property (nonatomic, strong) NSArray<PTCourseMessage *> *courses;
/**
 翻页信息
*/
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
