// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTVideoDictMessage : PTModel
/**
  视频标识, 看起来像文件名
*/
@property (nonatomic, copy) NSString *ident;
/**
  视频 url
*/
@property (nonatomic, copy) NSString *url;
/**
  视频宽度
*/
@property (nonatomic, assign) int32_t width;
/**
  视频高度
*/
@property (nonatomic, assign) int32_t height;
/**
  视频长度 单位:秒
*/
@property (nonatomic, assign) int32_t duration;
@end
NS_ASSUME_NONNULL_END
