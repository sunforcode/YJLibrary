// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
#import "PTTrackingMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  banner 结构
*/
@interface PTBannerMessage : PTModel
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *title1st;
@property (nonatomic, copy) NSString *title2nd;
/**
  banner 曝光
*/
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *impressionSensorEvents;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *clickSensorEvents;
@property (nonatomic, strong) PTTrackingMessage *tracking;
@end
NS_ASSUME_NONNULL_END
