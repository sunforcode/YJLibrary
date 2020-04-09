// apic_version = 0.6.1
#import "PTModel.h"
#import "PTGoodsInfoMessage.h"
#import "PTContentArrangeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTMarketTabMessage : PTModel
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, assign) int32_t weight;
@property (nonatomic, strong) NSArray<PTGoodsInfoMessage *> *goods;
@property (nonatomic, assign) PTContentArrangeEnum contentArrange;
@end
NS_ASSUME_NONNULL_END
