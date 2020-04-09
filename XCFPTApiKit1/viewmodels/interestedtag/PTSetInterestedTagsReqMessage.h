// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSetInterestedTagsReqMessage : PTModel
/**
  设备唯一标识符(当前为 PDID)
*/
@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, strong) NSArray<NSNumber *> *interestTagIds;
@end
NS_ASSUME_NONNULL_END
