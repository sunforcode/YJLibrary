// apic_version = 0.5.5
#import "PTModel.h"
#import "PTPictureIconMessage.h"
#import "PTPictureIconMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  图片图标合集
*/
@interface PTPictureIconsCellMessage : PTModel
/**
  全部分类图标
*/
@property (nonatomic, strong) NSArray<PTPictureIconMessage *> *icons;
/**
  查看全部
*/
@property (nonatomic, strong) PTPictureIconMessage *moreIcon;
@end
NS_ASSUME_NONNULL_END
