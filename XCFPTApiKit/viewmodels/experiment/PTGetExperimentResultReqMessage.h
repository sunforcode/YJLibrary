// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetExperimentResultReqMessage : PTModel
/**
  实验的 namespace 名字
*/
@property (nonatomic, copy) NSString *namespace;
/**
  用户标识符：user_id 或者 pdid
*/
@property (nonatomic, copy) NSString *unit;
@end
NS_ASSUME_NONNULL_END
