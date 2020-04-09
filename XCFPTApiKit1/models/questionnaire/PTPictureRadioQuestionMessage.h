// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureOptionMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPictureRadioQuestionMessage : PTModel
@property (nonatomic, assign) int32_t questionId;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, strong) NSArray<PTPictureOptionMessage *> *options;
@end
NS_ASSUME_NONNULL_END
