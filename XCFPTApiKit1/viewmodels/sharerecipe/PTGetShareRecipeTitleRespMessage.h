// apic_version = 0.6.1
#import "PTModel.h"
#import "PTTrackingMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetShareRecipeTitleRespMessage : PTModel
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) PTTrackingMessage *tracking;
@property (nonatomic, copy) NSString *recipeUrl;
@end
NS_ASSUME_NONNULL_END
