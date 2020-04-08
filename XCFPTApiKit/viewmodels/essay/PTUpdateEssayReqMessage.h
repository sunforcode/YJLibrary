// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRichTextMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  更新故事
*/
@interface PTUpdateEssayReqMessage : PTModel
@property (nonatomic, strong) PTRichTextMessage *articleParagraphs;
@property (nonatomic, copy) NSString *essayId;
@end
NS_ASSUME_NONNULL_END
