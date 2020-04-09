// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSimpleGoodsInfoMessage : PTModel
@property (nonatomic, copy) NSString *goodsId;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *goodsName;
@property (nonatomic, assign) double price;
@end
NS_ASSUME_NONNULL_END
