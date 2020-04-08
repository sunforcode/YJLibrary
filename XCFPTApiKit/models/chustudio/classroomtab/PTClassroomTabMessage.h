// apic_version = 0.5.5
#import "PTModel.h"
#import "PTCourseMessage.h"
#import "PTClassroomTabExtraMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTClassroomTabMessage : PTModel
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) int32_t weight;
@property (nonatomic, strong) NSArray<PTCourseMessage *> *courses;
@property (nonatomic, strong) PTClassroomTabExtraMessage *extraParam;
@end
NS_ASSUME_NONNULL_END
