// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  图片图标
*/
@interface PTPictureIconMessage : PTModel
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *impressionSensorEvents;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *clickSensorEvents;
@end
NS_ASSUME_NONNULL_END
