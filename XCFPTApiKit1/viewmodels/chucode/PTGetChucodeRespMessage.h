// apic_version = 0.6.1
#import "PTModel.h"
#import "PTChucodeMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetChucodeRespMessage : PTModel
@property (nonatomic, strong) PTChucodeMessage *chucode;
@end
NS_ASSUME_NONNULL_END
