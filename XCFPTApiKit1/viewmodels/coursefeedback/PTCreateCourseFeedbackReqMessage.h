// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserUsageEnvironmentMessage.h"
#import "PTChannelTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  chu_studio反馈请求参数
*/
@interface PTCreateCourseFeedbackReqMessage : PTModel
@property (nonatomic, copy) NSString *courseId;
@property (nonatomic, copy) NSString *lessonId;
@property (nonatomic, copy) NSString *playUrl;
/**
  遇到的问题
*/
@property (nonatomic, copy) NSString *problem;
@property (nonatomic, copy) NSString *feedback;
@property (nonatomic, strong) PTUserUsageEnvironmentMessage *usageEnvironment;
@property (nonatomic, assign) PTChannelTypeEnum channel;
@end
NS_ASSUME_NONNULL_END
