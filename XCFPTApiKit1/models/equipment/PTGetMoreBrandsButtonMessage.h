// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取更多品牌button
*/
@interface PTGetMoreBrandsButtonMessage : PTModel
/**
  是否展示
*/
@property (nonatomic, assign) BOOL isShow;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) PTPictureDictMessage *image;
@end
NS_ASSUME_NONNULL_END
