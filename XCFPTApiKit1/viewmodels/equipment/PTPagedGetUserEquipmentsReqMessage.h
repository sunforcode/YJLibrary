// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  翻页获取用户装备列表
*/
@interface PTPagedGetUserEquipmentsReqMessage : PTModel
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@end
NS_ASSUME_NONNULL_END
