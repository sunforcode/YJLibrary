// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRecipeFeedMessage : PTModel
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, strong) NSArray<NSString *> *recipeIds;
@end
NS_ASSUME_NONNULL_END
