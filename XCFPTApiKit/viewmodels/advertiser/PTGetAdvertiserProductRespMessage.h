// apic_version = 0.5.5
#import "PTModel.h"
#import "PTAdvertiserProductMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetAdvertiserProductRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTAdvertiserProductMessage *> *product;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
