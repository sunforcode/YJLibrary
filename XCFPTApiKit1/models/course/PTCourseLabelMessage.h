// apic_version = 0.6.1
#import "PTModel.h"
#import "PTCourseLabelStyleMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCourseLabelMessage : PTModel
/**
  课程标签类型描述
*/
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) PTCourseLabelStyleMessage *style;
@end
NS_ASSUME_NONNULL_END
