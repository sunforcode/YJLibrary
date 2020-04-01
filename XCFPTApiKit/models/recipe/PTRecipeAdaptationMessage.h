// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  改编信息
*/
@interface PTRecipeAdaptationMessage : PTModel
/**
  允许改编
*/
@property (nonatomic, assign) BOOL allowAdaptation;
/**
  被改编次数
*/
@property (nonatomic, assign) int32_t nAdaptation;
/**
  根菜谱 ID
*/
@property (nonatomic, assign) int32_t rootRecipeId;
/**
   是否允许切换允许改编的状态
*/
@property (nonatomic, assign) BOOL allowToChangeAdaptationStatus;
/**
  改编历史记录, 完整 url
*/
@property (nonatomic, copy) NSString *adaptationHistoryUrl;
@end
NS_ASSUME_NONNULL_END
