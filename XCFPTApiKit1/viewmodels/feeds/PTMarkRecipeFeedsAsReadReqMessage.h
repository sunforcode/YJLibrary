// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTMarkRecipeFeedsAsReadReqMessage : PTModel
@property (nonatomic, copy) NSString *authorId;
@property (nonatomic, copy) NSString *recipeId;
@end
NS_ASSUME_NONNULL_END
