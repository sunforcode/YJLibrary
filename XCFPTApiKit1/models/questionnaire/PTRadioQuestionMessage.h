// apic_version = 0.6.1
#import "PTModel.h"
#import "PTOptionMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRadioQuestionMessage : PTModel
/**
  当时写描述的时候的问题，目前不好再改类型
*/
@property (nonatomic, copy) NSString *questionId;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, strong) NSArray<PTOptionMessage *> *options;
@end
NS_ASSUME_NONNULL_END
