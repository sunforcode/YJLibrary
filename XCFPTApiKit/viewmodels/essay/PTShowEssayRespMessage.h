// apic_version = 0.5.5
#import "PTModel.h"
#import "PTEssayMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTShowEssayRespMessage : PTModel
@property (nonatomic, strong) PTEssayMessage *essay;
@end
NS_ASSUME_NONNULL_END
