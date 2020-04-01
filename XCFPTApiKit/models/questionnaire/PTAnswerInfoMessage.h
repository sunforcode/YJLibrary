// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  展示答案
*/
@interface PTAnswerInfoMessage : PTModel
@property (nonatomic, assign) int32_t questionId;
@property (nonatomic, assign) int32_t questionType;
/**
  选项id
*/
@property (nonatomic, copy) NSString *optionId;
/**
  位置代码
*/
@property (nonatomic, copy) NSString *locationCode;
@property (nonatomic, copy) NSString *text;
@end
NS_ASSUME_NONNULL_END
