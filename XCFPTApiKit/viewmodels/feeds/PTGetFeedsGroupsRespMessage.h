// apic_version = 0.5.5
#import "PTModel.h"
#import "PTFeedsGroupMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetFeedsGroupsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTFeedsGroupMessage *> *feedsGroups;
@end
NS_ASSUME_NONNULL_END
