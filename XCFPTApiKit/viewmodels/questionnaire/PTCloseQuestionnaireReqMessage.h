// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  关闭问卷
*/
@interface PTCloseQuestionnaireReqMessage : PTModel
@property (nonatomic, copy) NSString *questionnaireId;
@end
NS_ASSUME_NONNULL_END
