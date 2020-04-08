// apic_version = 0.5.5
#import "PTModel.h"
#import "PTDishMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTUpdateDishRespMessage : PTModel
@property (nonatomic, strong) PTDishMessage *dish;
@end
NS_ASSUME_NONNULL_END
