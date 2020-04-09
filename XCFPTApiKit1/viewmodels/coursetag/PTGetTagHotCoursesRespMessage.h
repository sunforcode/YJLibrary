// apic_version = 0.6.1
#import "PTModel.h"
#import "PTCoursesWithTagMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetTagHotCoursesRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTCoursesWithTagMessage *> *tagCourses;
@end
NS_ASSUME_NONNULL_END
