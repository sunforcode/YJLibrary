// apic_version = 0.5.5
#import "PTModel.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  文字图标
*/
@interface PTTextIconMessage : PTModel
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *impressionSensorEvents;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *clickSensorEvents;
@end
NS_ASSUME_NONNULL_END
