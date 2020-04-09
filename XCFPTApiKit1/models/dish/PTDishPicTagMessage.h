// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPicTagMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTDishPicTagMessage : PTModel
@property (nonatomic, copy) NSString *ident;
@property (nonatomic, strong) NSArray<PTPicTagMessage *> *tags;
@end
NS_ASSUME_NONNULL_END
