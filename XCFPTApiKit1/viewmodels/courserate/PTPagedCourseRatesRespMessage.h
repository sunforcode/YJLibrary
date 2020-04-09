// apic_version = 0.6.1
#import "PTModel.h"
#import "PTCourseRateMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedCourseRatesRespMessage : PTModel
/**
 评价信息列表
*/
@property (nonatomic, strong) NSArray<PTCourseRateMessage *> *rates;
/**
 翻页信息
*/
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
