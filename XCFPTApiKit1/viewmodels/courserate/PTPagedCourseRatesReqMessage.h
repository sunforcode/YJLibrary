// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedCourseRatesReqMessage : PTModel
/**
  课程id
*/
@property (nonatomic, copy) NSString *courseId;
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@end
NS_ASSUME_NONNULL_END
