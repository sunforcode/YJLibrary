// apic_version = 0.5.5
#import "PTModel.h"
#import "PTOptionStatsListMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTQuestionnaireStatsMessage : PTModel
/**
  问卷id
*/
@property (nonatomic, assign) int32_t questionnaireId;
/**
  问卷下问题id
*/
@property (nonatomic, assign) int32_t questionId;
/**
  问卷下问题描述
*/
@property (nonatomic, copy) NSString *questionDesc;
/**
  这个问卷下问题的最近统计
*/
@property (nonatomic, strong) NSArray<PTOptionStatsListMessage *> *optionStatsList;
@end
NS_ASSUME_NONNULL_END
