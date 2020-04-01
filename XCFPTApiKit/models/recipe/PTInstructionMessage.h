// apic_version = 0.5.5
#import "PTModel.h"
#import "PTVideoDictMessage.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  步骤
*/
@interface PTInstructionMessage : PTModel
/**
  步骤顺序
*/
@property (nonatomic, copy) NSString *step;
/**
  步骤说明文字
*/
@property (nonatomic, copy) NSString *text;
/**
  步骤图标识, 看起来像文件名
*/
@property (nonatomic, copy) NSString *ident;
/**
  视频
*/
@property (nonatomic, strong) PTVideoDictMessage *video;
/**
  步骤图完整 url
*/
@property (nonatomic, copy) NSString *url;
/**
  800 尺寸图片
*/
@property (nonatomic, copy) NSString *photo800 DEPRECATED_ATTRIBUTE;
/**
  图片详细信息
*/
@property (nonatomic, strong) PTPictureDictMessage *image;
@end
NS_ASSUME_NONNULL_END
