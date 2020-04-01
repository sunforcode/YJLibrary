// apic_version = 0.5.5
#import "PTModel.h"
#import "PTCursorMessage.h"
#import "PTRecipeFeedV1Message.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetRecipeFeedsRespMessage : PTModel
@property (nonatomic, strong) PTCursorMessage *cursor;
@property (nonatomic, strong) NSArray<PTRecipeFeedV1Message *> *recipeFeeds;
@end
NS_ASSUME_NONNULL_END
