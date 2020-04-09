// apic_version = 0.6.1
#import "PTModel.h"
#import "PTLessonProcessMessage.h"
#import "PTLiveStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCourseLessonMessage : PTModel
@property (nonatomic, copy) NSString *courseLessonId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) int32_t length;
@property (nonatomic, copy) NSString *beginTime;
@property (nonatomic, assign) BOOL sampleVideoEnable;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, strong) PTLessonProcessMessage *process;
@property (nonatomic, assign) PTLiveStatusEnum status;
@end
NS_ASSUME_NONNULL_END
