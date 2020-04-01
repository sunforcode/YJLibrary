// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTMarkupMessage : PTModel
@property (nonatomic, assign) int32_t end;
@property (nonatomic, assign) int32_t start;
@property (nonatomic, copy) NSString *typeText;
@property (nonatomic, copy) NSString *type;
@end
NS_ASSUME_NONNULL_END
