// apic_version = 0.6.1
#import "PTModel.h"
#import "PTCourseRateTagMessage.h"
#import "PTCourseRateMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCourseRateDisplayInfoMessage : PTModel
@property (nonatomic, copy) NSString *nRateStr;
@property (nonatomic, strong) NSArray<PTCourseRateTagMessage *> *rateTags;
@property (nonatomic, strong) NSArray<PTCourseRateMessage *> *rateList;
@end
NS_ASSUME_NONNULL_END
