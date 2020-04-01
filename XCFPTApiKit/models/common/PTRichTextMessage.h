// apic_version = 0.5.5
#import "PTModel.h"
#import "PTParagraphMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRichTextMessage : PTModel
@property (nonatomic, strong) NSArray<PTParagraphMessage *> *paras;
@end
NS_ASSUME_NONNULL_END
