// apic_version = 0.5.5
#import "PTModel.h"
#import "PTSensorEventMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  副标题（链接+文字）
*/
@interface PTSubtitleButtonTextAndUrlMessage : PTModel
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *clickSensorEvents;
@end
NS_ASSUME_NONNULL_END
