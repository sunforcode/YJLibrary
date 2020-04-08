// apic_version = 0.5.5
#import "PTModel.h"
#import "PTSubtitleButtonTextAndUrlMessage.h"
#import "PTSubtitleButtonEmptyMessage.h"
#import "PTSubtitleButtonCountdownMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  右上角区域("查看更多"/"倒计时")
*/
@interface PTSubtitleButtonMessage : PTModel
@property (nonatomic, strong) PTSubtitleButtonTextAndUrlMessage *textAndUrl;
@property (nonatomic, strong) PTSubtitleButtonEmptyMessage *empty;
@property (nonatomic, strong) PTSubtitleButtonCountdownMessage *countdown;
@end
NS_ASSUME_NONNULL_END
