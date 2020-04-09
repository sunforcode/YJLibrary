// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTFeedsMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  Feeds Group, 一个作者为一个 group
*/
@interface PTFeedsGroupMessage : PTModel
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, strong) NSArray<PTFeedsMessage *> *feeds;
@end
NS_ASSUME_NONNULL_END
