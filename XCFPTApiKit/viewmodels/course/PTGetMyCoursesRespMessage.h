// apic_version = 0.5.5
#import "PTModel.h"
#import "PTCursorMessage.h"
#import "PTCourseMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetMyCoursesRespMessage : PTModel
@property (nonatomic, strong) PTCursorMessage *cursor;
@property (nonatomic, strong) NSArray<PTCourseMessage *> *courses;
@end
NS_ASSUME_NONNULL_END
