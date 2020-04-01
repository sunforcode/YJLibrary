// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetExperimentResultRespMessage : PTModel
/**
  分组名
*/
@property (nonatomic, copy) NSString *group;
/**
  分组的实验名
*/
@property (nonatomic, copy) NSString *experiment;
/**
  分组的组名链
*/
@property (nonatomic, strong) NSArray<NSString *> *fullGroups;
/**
  分组的实验名链
*/
@property (nonatomic, strong) NSArray<NSString *> *fullExperiments;
/**
  分组设置的额外参数
*/
@property (nonatomic, copy) NSString *groupExtraParams;
@end
NS_ASSUME_NONNULL_END
