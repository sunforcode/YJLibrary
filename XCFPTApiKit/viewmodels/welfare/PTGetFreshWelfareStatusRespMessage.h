// apic_version = 0.5.5
#import "PTModel.h"
#import "PTFreshWelfareInfoMessage.h"
#import "PTSimpleGoodsInfoMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetFreshWelfareStatusRespMessage : PTModel
@property (nonatomic, strong) PTFreshWelfareInfoMessage *info;
@property (nonatomic, strong) PTSimpleGoodsInfoMessage *goodsInfo;
@end
NS_ASSUME_NONNULL_END
