// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRecipeMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAdvertiserAccessTopTenStatisticMessage : PTModel
@property (nonatomic, strong) NSArray<PTRecipeMessage *> *recipes;
@property (nonatomic, copy) NSString *date;
@end
NS_ASSUME_NONNULL_END
