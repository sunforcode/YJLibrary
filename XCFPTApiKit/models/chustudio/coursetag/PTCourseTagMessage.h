// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCourseTagMessage : PTModel
/**
 课程标签
*/
@property (nonatomic, copy) NSString *tagId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *displayName;
@end
NS_ASSUME_NONNULL_END
