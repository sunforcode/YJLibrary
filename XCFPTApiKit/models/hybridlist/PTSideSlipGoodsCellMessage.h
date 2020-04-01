// apic_version = 0.5.5
#import "PTModel.h"
#import "PTSubtitleButtonMessage.h"
#import "PTRichTextGoodsCellMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  横滑商品列表
*/
@interface PTSideSlipGoodsCellMessage : PTModel
/**
  第一行大标题
*/
@property (nonatomic, copy) NSString *title1st;
/**
  第二行的小标题
*/
@property (nonatomic, copy) NSString *title2nd;
/**
  右侧 "查看全部" 按钮
*/
@property (nonatomic, strong) PTSubtitleButtonMessage *subtitleButton;
@property (nonatomic, strong) NSArray<PTRichTextGoodsCellMessage *> *richTextGoodsCells;
@end
NS_ASSUME_NONNULL_END
