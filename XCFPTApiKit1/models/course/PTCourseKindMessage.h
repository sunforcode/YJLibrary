// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCourseKindMessage : PTModel
@property (nonatomic, copy) NSString *courseKindId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) double price;
@property (nonatomic, assign) double originalPrice;
@property (nonatomic, copy) NSString *humanFriendlyDisplayPrice;
@property (nonatomic, copy) NSString *humanFriendlyDisplayOriginalPrice;
@end
NS_ASSUME_NONNULL_END
