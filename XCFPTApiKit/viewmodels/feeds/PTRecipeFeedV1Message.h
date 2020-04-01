// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRecipeFeedV1Message : PTModel
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *recipeId;
@end
NS_ASSUME_NONNULL_END
