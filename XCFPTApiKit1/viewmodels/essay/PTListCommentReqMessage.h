// apic_version = 0.6.1
#import "PTModel.h"
#import "PTOrderEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTListCommentReqMessage : PTModel
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@property (nonatomic, copy) NSString *essayId;
@property (nonatomic, assign) PTOrderEnum order;
@end
NS_ASSUME_NONNULL_END
