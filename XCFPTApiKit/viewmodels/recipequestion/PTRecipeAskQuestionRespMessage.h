// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRecipeQuestionMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRecipeAskQuestionRespMessage : PTModel
@property (nonatomic, strong) PTRecipeQuestionMessage *question;
@end
NS_ASSUME_NONNULL_END
