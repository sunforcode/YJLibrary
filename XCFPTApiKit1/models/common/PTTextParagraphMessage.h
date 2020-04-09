// apic_version = 0.6.1
#import "PTModel.h"
#import "PTMarkupTextMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  文本段落
*/
@interface PTTextParagraphMessage : PTModel
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *html;
@property (nonatomic, assign) int32_t maxLines;
@property (nonatomic, strong) PTMarkupTextMessage *markupText;
@end
NS_ASSUME_NONNULL_END
