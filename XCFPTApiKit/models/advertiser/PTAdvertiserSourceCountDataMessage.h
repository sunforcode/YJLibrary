// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAdvertiserSourceCountDataMessage : PTModel
@property (nonatomic, copy) NSString *sourceName;
@property (nonatomic, assign) int32_t count;
@end
NS_ASSUME_NONNULL_END
