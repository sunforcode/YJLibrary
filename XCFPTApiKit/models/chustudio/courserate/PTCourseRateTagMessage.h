// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCourseRateTagMessage : PTModel
/**
 评分标签
*/
@property (nonatomic, copy) NSString *tag;
/**
 标签被评次数
*/
@property (nonatomic, assign) int32_t nRate;
@end
NS_ASSUME_NONNULL_END
