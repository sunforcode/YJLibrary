// apic_version = 0.6.1
#import "PTModel.h"
#import "PTEssayMessage.h"
#import "PTDishMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTQuestionTargetMessage : PTModel
@property (nonatomic, strong) PTEssayMessage *essay;
@property (nonatomic, strong) PTDishMessage *dish;
@end
NS_ASSUME_NONNULL_END
