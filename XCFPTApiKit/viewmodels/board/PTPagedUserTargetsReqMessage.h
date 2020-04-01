// apic_version = 0.5.5
#import "PTModel.h"
#import "PTTargetTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取用户收藏targets请求对象
*/
@interface PTPagedUserTargetsReqMessage : PTModel
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@property (nonatomic, assign) PTTargetTypeEnum targetType;
@end
NS_ASSUME_NONNULL_END
