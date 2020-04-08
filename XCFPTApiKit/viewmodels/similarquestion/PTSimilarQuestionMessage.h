// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRecipeQuestionMessage.h"
#import "PTRecipeQuestionAnswerMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSimilarQuestionMessage : PTModel
@property (nonatomic, strong) PTRecipeQuestionMessage *recipeQuestion;
@property (nonatomic, strong) PTRecipeQuestionAnswerMessage *recipeQuestionAnswer;
@end
NS_ASSUME_NONNULL_END
