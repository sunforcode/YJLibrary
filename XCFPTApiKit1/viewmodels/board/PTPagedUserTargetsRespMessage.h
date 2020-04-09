// apic_version = 0.6.1
#import "PTModel.h"
#import "PTTargetMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取用户收藏targets响应对象
*/
@interface PTPagedUserTargetsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTTargetMessage *> *targets;
/**
  翻页的游标
*/
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
