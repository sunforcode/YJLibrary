// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAdvertiserProductMessage : PTModel
@property (nonatomic, copy) NSString *productId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *link;
@property (nonatomic, strong) PTPictureDictMessage *image;
/**
  投放开始时间
*/
@property (nonatomic, copy) NSString *beginTime;
/**
  投放结束时间
*/
@property (nonatomic, copy) NSString *endTime;
@end
NS_ASSUME_NONNULL_END
