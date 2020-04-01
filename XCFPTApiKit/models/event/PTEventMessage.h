// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTEventCustomizationMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTEventMessage : PTModel
@property (nonatomic, copy) NSString *eventId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, assign) BOOL isPromoted;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, assign) int32_t nDishes;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) int32_t nPv;
@property (nonatomic, strong) PTEventCustomizationMessage *customization;
@end
NS_ASSUME_NONNULL_END
