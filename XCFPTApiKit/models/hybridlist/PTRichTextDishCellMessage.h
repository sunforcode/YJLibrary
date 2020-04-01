// apic_version = 0.5.5
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTDishMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
#import "PTTrackingMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  富文本卡片样式的作品(首页)
*/
@interface PTRichTextDishCellMessage : PTModel
@property (nonatomic, copy) NSString *identification;
@property (nonatomic, copy) NSString *title1st;
@property (nonatomic, copy) NSString *title2nd;
@property (nonatomic, copy) NSString *title3rd;
@property (nonatomic, copy) NSString *title4th;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, assign) int32_t width;
@property (nonatomic, assign) int32_t height;
@property (nonatomic, strong) PTDishMessage *dish;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *diggSensorEvents;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *impressionSensorEvents;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *clickSensorEvents;
@property (nonatomic, strong) PTTrackingMessage *tracking;
@end
NS_ASSUME_NONNULL_END
