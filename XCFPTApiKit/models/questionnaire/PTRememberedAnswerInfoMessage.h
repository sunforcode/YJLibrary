// apic_version = 0.5.5
#import "PTModel.h"
#import "PTAnswerInfoMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRememberedAnswerInfoMessage : PTModel
@property (nonatomic, strong) NSArray<PTAnswerInfoMessage *> *answerInfoList;
@end
NS_ASSUME_NONNULL_END
