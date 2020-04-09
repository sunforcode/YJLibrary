// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTMpQuestionAnswerMessage : PTModel
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *updateTime;
@property (nonatomic, copy) NSString *mpAnswerId;
@end
NS_ASSUME_NONNULL_END
