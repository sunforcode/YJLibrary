// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取用户指定目标的收藏信息相应
*/
@interface PTIsTargetInUserBoardsRespMessage : PTModel
/**
  用户是否收藏了这个对象
*/
@property (nonatomic, assign) BOOL isCollected;
@end
NS_ASSUME_NONNULL_END
