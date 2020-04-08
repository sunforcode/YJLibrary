// apic_version = 0.5.5
#import "PTModel.h"
#import "PTOneDayOneNumberStatisticDataMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTOneDayOneNumberStatisticMessage : PTModel
/**
  比如广告pv, 用户本身的pv
*/
@property (nonatomic, copy) NSString *statisticName;
@property (nonatomic, strong) NSArray<PTOneDayOneNumberStatisticDataMessage *> *itemData;
@end
NS_ASSUME_NONNULL_END
