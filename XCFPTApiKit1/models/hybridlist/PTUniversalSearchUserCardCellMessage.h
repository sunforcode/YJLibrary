// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  搜索结果页用户大卡片信息
*/
@interface PTUniversalSearchUserCardCellMessage : PTModel
@property (nonatomic, strong) PTUserMessage *user;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *impressionSensorEvents;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *clickSensorEvents;
@end
NS_ASSUME_NONNULL_END
