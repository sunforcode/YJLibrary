// apic_version = 0.5.5
#import "PTModel.h"
#import "PTQuestionnaireQuestionMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTQuestionnaireMessage : PTModel
@property (nonatomic, copy) NSString *questionnaireId;
@property (nonatomic, strong) NSArray<PTQuestionnaireQuestionMessage *> *questions;
@end
NS_ASSUME_NONNULL_END
