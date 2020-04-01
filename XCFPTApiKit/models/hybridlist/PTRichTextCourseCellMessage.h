// apic_version = 0.5.5
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTCourseMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  课堂首页课程结构
*/
@interface PTRichTextCourseCellMessage : PTModel
@property (nonatomic, copy) NSString *identification;
@property (nonatomic, copy) NSString *title1st;
@property (nonatomic, copy) NSString *title2nd;
/**
   显示在 title_2nd 前面，如果有值为红色
*/
@property (nonatomic, copy) NSString *title2ndPrefix;
@property (nonatomic, copy) NSString *title3rd;
/**
  如果有值，显示红色，在 title_3rd 前，并且 title_3rd 有横划线
*/
@property (nonatomic, copy) NSString *title3rdPrefix;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) int32_t width;
@property (nonatomic, assign) int32_t height;
@property (nonatomic, strong) PTCourseMessage *course;
/**
  课程曝光时打点
*/
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *impressionSensorEvents;
/**
  课程点击时打点
*/
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *clickSensorEvents;
/**
  课程收藏时打点
*/
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *collectSensorEvents;
@end
NS_ASSUME_NONNULL_END
