// apic_version = 0.6.1
#import "PTModel.h"
#import "PTAdvertiserSourceCountDataMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAdvertiserSourceCountStatisticMessage : PTModel
@property (nonatomic, strong) NSArray<PTAdvertiserSourceCountDataMessage *> *sources;
@property (nonatomic, copy) NSString *date;
@end
NS_ASSUME_NONNULL_END
