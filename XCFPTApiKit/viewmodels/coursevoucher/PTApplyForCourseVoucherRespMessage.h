// apic_version = 0.5.5
#import "PTModel.h"
#import "PTClassroomVoucherMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApplyForCourseVoucherRespMessage : PTModel
@property (nonatomic, strong) PTClassroomVoucherMessage *voucher;
@end
NS_ASSUME_NONNULL_END
