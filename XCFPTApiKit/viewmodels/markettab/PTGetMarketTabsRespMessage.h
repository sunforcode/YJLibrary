// apic_version = 0.5.5
#import "PTModel.h"
#import "PTMarketTabMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetMarketTabsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTMarketTabMessage *> *tabs;
@end
NS_ASSUME_NONNULL_END
