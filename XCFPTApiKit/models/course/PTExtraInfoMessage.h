// apic_version = 0.5.5
#import "PTModel.h"
#import "PTPriceDisplayStyleEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTExtraInfoMessage : PTModel
@property (nonatomic, copy) NSString *weappQrcodeImg;
@property (nonatomic, assign) PTPriceDisplayStyleEnum priceDisplayStyle;
@end
NS_ASSUME_NONNULL_END
