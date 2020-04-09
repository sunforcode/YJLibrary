// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取问卷请求
*/
@interface PTGetQuestionnaireReqMessage : PTModel
@property (nonatomic, copy) NSString *recipeId;
@end
NS_ASSUME_NONNULL_END
