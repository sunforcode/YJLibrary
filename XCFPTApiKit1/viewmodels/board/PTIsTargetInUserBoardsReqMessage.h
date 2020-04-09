// apic_version = 0.6.1
#import "PTModel.h"
#import "PTTargetTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取用户指定目标的收藏信息请求
*/
@interface PTIsTargetInUserBoardsReqMessage : PTModel
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic, assign) PTTargetTypeEnum targetType;
@end
NS_ASSUME_NONNULL_END
