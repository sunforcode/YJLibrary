// apic_version = 0.5.5
#import "PTModel.h"
#import "PTSdkAdScheduleMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTLookupSdkAdScheduleRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTSdkAdScheduleMessage *> *schedule;
@end
NS_ASSUME_NONNULL_END
