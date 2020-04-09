// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
#import "PTTrackingMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  横条样式的富文本(搜索结果页)
*/
@interface PTLineRichTextCellMessage : PTModel
@property (nonatomic, copy) NSString *title1st;
@property (nonatomic, copy) NSString *title2nd;
@property (nonatomic, copy) NSString *title3rd;
@property (nonatomic, copy) NSString *title4th;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, assign) int32_t width;
@property (nonatomic, assign) int32_t height;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *impressionSensorEvents;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *clickSensorEvents;
@property (nonatomic, strong) PTTrackingMessage *tracking;
@end
NS_ASSUME_NONNULL_END
