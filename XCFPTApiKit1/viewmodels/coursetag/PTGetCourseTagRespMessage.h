// apic_version = 0.6.1
#import "PTModel.h"
#import "PTCourseTagMessage.h"
#import "PTCourseTagMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetCourseTagRespMessage : PTModel
@property (nonatomic, strong) PTCourseTagMessage *tag;
@property (nonatomic, strong) NSArray<PTCourseTagMessage *> *childTags;
@end
NS_ASSUME_NONNULL_END
