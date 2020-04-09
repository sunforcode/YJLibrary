// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetAdvertiserRecipeDailyStatisticReqMessage : PTModel
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *beginDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, copy) NSString *recipeId;
@end
NS_ASSUME_NONNULL_END
