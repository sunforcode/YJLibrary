// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  横条式用户信息(关注列表)
*/
@interface PTLineUserCellMessage : PTModel
@property (nonatomic, strong) PTUserMessage *user;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *impressionSensorEvents;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *clickSensorEvents;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *followClickSensorEvents;
@end
NS_ASSUME_NONNULL_END
