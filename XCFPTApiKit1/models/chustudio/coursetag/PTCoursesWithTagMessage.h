// apic_version = 0.6.1
#import "PTModel.h"
#import "PTCourseTagMessage.h"
#import "PTCourseTagMessage.h"
#import "PTCourseMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCoursesWithTagMessage : PTModel
@property (nonatomic, strong) PTCourseTagMessage *tag;
@property (nonatomic, strong) NSArray<PTCourseTagMessage *> *childTags;
@property (nonatomic, strong) NSArray<PTCourseMessage *> *courses;
@end
NS_ASSUME_NONNULL_END
