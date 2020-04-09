// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTMpQuestionAnswerMessage.h"
#import "PTPostMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTMpQuestionMessage : PTModel
@property (nonatomic, copy) NSString *mpQuestionId;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) int32_t nDiggs;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *updateTime;
@property (nonatomic, assign) BOOL diggedByMe;
@property (nonatomic, strong) PTMpQuestionAnswerMessage *answer;
@property (nonatomic, strong) PTPostMessage *post;
@end
NS_ASSUME_NONNULL_END
