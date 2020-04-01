// apic_version = 0.5.5
#import "PTModel.h"
#import "PTCourseMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedTopCoursesPurchasedByConsumersRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTCourseMessage *> *courses;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
