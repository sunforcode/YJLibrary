// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRadioQuestionMessage.h"
#import "PTTextQuestionMessage.h"
#import "PTLocationQuestionMessage.h"
#import "PTPictureRadioQuestionMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTQuestionnaireQuestionMessage : PTModel
@property (nonatomic, strong) PTRadioQuestionMessage *radioQuestion;
@property (nonatomic, strong) PTTextQuestionMessage *textQuestion;
@property (nonatomic, strong) PTLocationQuestionMessage *locationQuestion;
@property (nonatomic, strong) PTPictureRadioQuestionMessage *pictureRadioQuestion;
@end
NS_ASSUME_NONNULL_END
