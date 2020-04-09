// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSensorEventMessage : PTModel
@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, copy) NSDictionary *properties;
@end
NS_ASSUME_NONNULL_END
