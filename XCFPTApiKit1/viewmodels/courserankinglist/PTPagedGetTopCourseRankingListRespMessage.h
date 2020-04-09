// apic_version = 0.6.1
#import "PTModel.h"
#import "PTCourseMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedGetTopCourseRankingListRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTCourseMessage *> *courses;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
