// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRecommendationUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetFeedsPageRecommendationUsersRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTRecommendationUserMessage *> *recommendationUsers;
@end
NS_ASSUME_NONNULL_END
