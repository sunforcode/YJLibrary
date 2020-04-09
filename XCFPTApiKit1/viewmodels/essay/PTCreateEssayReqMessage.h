// apic_version = 0.6.1
#import "PTModel.h"
#import "PTRichTextMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  上传内容
*/
@interface PTCreateEssayReqMessage : PTModel
@property (nonatomic, strong) PTRichTextMessage *articleParagraphs;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) NSArray<NSString *> *themeIds;
@end
NS_ASSUME_NONNULL_END
