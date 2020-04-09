// apic_version = 0.6.1
#import "PTModel.h"
#import "PTAnswerInfoMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTUserAnswerMessage : PTModel
@property (nonatomic, strong) NSArray<PTAnswerInfoMessage *> *answerInfoList;
@end
NS_ASSUME_NONNULL_END
