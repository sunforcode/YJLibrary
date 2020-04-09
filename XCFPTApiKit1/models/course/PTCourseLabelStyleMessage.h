// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCourseLabelStyleMessage : PTModel
/**
  RGB e.g. #FA6650
*/
@property (nonatomic, copy) NSString *backgroundColor;
/**
  RGB e.g. #FFFFFF
*/
@property (nonatomic, copy) NSString *fontColor;
@end
NS_ASSUME_NONNULL_END
