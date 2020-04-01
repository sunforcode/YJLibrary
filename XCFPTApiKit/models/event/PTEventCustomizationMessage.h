// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTEventCustomizationMessage : PTModel
@property (nonatomic, copy) NSString *homepageBanner;
@property (nonatomic, copy) NSString *detailBanner;
@property (nonatomic, assign) BOOL homepageComponentsHidden;
@property (nonatomic, copy) NSString *webBanner;
@end
NS_ASSUME_NONNULL_END
