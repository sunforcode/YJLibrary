// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTListThemesV2ReqMessage : PTModel
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@property (nonatomic, copy) NSString *timezone;
@end
NS_ASSUME_NONNULL_END
