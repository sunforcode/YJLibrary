// apic_version = 0.5.5
#import "PTModel.h"
#import "PTGetCourseFitlerEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetMyCoursesReqMessage : PTModel
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@property (nonatomic, assign) PTGetCourseFitlerEnum filter;
@end
NS_ASSUME_NONNULL_END
