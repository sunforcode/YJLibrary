// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTClassroomVoucherMessage : PTModel
/**
  课堂弹窗优惠券信息
*/
@property (nonatomic, assign) double amount;
@property (nonatomic, copy) NSString *beginTime;
@property (nonatomic, copy) NSString *endTime;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *title1;
@property (nonatomic, copy) NSString *title2;
@end
NS_ASSUME_NONNULL_END
