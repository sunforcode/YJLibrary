// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  一张图片
*/
@interface PTPictureDictMessage : PTModel
/**
  图片标识, 看起来像文件名
*/
@property (nonatomic, copy) NSString *ident;
/**
  原始宽度
*/
@property (nonatomic, assign) int32_t originalWidth;
/**
  原始高度
*/
@property (nonatomic, assign) int32_t originalHeight;
/**
  切图允许的最大宽度
*/
@property (nonatomic, assign) int32_t maxWidth;
/**
  切图允许的最大高度
*/
@property (nonatomic, assign) int32_t maxHeight;
/**
  图片的完整 url {width} {height} {format}, 可以替换成希望的尺寸和格式, 服务器会转码后返回
*/
@property (nonatomic, copy) NSString *urlPattern;
@end
NS_ASSUME_NONNULL_END
