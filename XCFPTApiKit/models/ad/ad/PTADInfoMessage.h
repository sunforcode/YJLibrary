// apic_version = 0.5.5
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTVideoDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTADInfoMessage : PTModel
/**
  广告文本，一般同第一标题
*/
@property (nonatomic, copy) NSString *content;
/**
  广告投放素材
*/
@property (nonatomic, strong) PTPictureDictMessage *image;
/**
  广告封面视频
*/
@property (nonatomic, strong) PTVideoDictMessage *coverMicroVideo;
/**
  退后台后生命周期，单位：秒，现在默认 15 * 60s
*/
@property (nonatomic, assign) int32_t lifecycleInterval;
/**
  显示间隔
*/
@property (nonatomic, assign) int32_t displayInterval;
/**
  位置
*/
@property (nonatomic, assign) int32_t position;
/**
  标签
*/
@property (nonatomic, copy) NSString *label;
/**
  显示时间
*/
@property (nonatomic, assign) int32_t displayTime;
/**
  广告投放第一标题
*/
@property (nonatomic, copy) NSString *title1st;
/**
  广告投放第二标题
*/
@property (nonatomic, copy) NSString *title2nd;
/**
  广告投放第三标题
*/
@property (nonatomic, copy) NSString *title3rd;
/**
  跳转 URL
*/
@property (nonatomic, copy) NSString *url;
/**
  名称
*/
@property (nonatomic, copy) NSString *name;
/**
  deeplink 唤醒链接
*/
@property (nonatomic, copy) NSString *deeplinkUrl;
@end
NS_ASSUME_NONNULL_END
