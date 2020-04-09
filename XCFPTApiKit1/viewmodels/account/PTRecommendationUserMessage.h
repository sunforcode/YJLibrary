// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRecommendationUserMessage : PTModel
@property (nonatomic, strong) PTUserMessage *user;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *reasonTail;
@end
NS_ASSUME_NONNULL_END
