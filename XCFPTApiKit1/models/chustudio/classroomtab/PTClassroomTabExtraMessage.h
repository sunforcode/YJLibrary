// apic_version = 0.6.1
#import "PTModel.h"
#import "PTDisplayStyleMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTClassroomTabExtraMessage : PTModel
@property (nonatomic, assign) int32_t restTime;
@property (nonatomic, assign) BOOL refreshCourses;
@property (nonatomic, copy) NSString *section;
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, strong) PTDisplayStyleMessage *displayStyle;
@end
NS_ASSUME_NONNULL_END
