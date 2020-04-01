// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRecipeLabelMessage : PTModel
/**
  文案
*/
@property (nonatomic, copy) NSString *text;
/**
  跳转用的 url 为空则 label 不可点击
*/
@property (nonatomic, copy) NSString *url;
/**
  RBG 色值, 文字颜色
*/
@property (nonatomic, copy) NSString *color;
/**
  ARBG 色值, 背景色
*/
@property (nonatomic, copy) NSString *bgColor;
/**
  ARBG 色值, 渐变背景色
*/
@property (nonatomic, strong) NSArray<NSString *> *gradientBgColors;
/**
  ARBG 色值, 新版使用的文字颜色
*/
@property (nonatomic, copy) NSString *colorV2;
@end
NS_ASSUME_NONNULL_END
