// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAtUsersMessage : PTModel
@property (nonatomic, strong) NSArray<PTUserMessage *> *users;
@end
NS_ASSUME_NONNULL_END
