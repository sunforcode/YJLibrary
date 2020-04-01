// apic_version = 0.5.5
#import "PTModel.h"
#import "PTCourseRateTagMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTShowCourseRateTagsRespMessage : PTModel
/**
  课程评价标签
*/
@property (nonatomic, strong) NSArray<PTCourseRateTagMessage *> *tags;
@end
NS_ASSUME_NONNULL_END
