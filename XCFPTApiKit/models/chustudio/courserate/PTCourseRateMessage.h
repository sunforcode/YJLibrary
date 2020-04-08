// apic_version = 0.5.5
#import "PTModel.h"
#import "PTCourseRateUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCourseRateMessage : PTModel
/**
 课程评分
*/
@property (nonatomic, assign) int32_t rate;
/**
 评分时间
*/
@property (nonatomic, copy) NSString *createTime;
/**
 评价内容
*/
@property (nonatomic, copy) NSString *review;
/**
 用户信息
*/
@property (nonatomic, strong) PTCourseRateUserMessage *user;
@end
NS_ASSUME_NONNULL_END
