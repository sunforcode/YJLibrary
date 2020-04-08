// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTReviewDiggUserMessage : PTModel
@property (nonatomic, strong) NSArray<PTUserMessage *> *users;
@property (nonatomic, assign) int32_t count;
@property (nonatomic, assign) int32_t total;
@end
NS_ASSUME_NONNULL_END
