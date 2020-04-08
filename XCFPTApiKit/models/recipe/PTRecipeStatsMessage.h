// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRecipeStatsMessage : PTModel
/**
  作品
*/
@property (nonatomic, assign) int32_t nDishes;
/**
  做过
*/
@property (nonatomic, assign) int32_t nCooked;
/**
  上周做过
*/
@property (nonatomic, assign) int32_t nCookedLastWeek;
/**
  评论
*/
@property (nonatomic, assign) int32_t nComments;
/**
  问题
*/
@property (nonatomic, assign) int32_t nQuestions;
/**
  人类友好的收藏数
*/
@property (nonatomic, copy) NSString *nCollects;
/**
  人类友好的 pv 数
*/
@property (nonatomic, copy) NSString *nPv;
/**
  人类友好的播放数
*/
@property (nonatomic, copy) NSString *nVodPlayed;
/**
  原始收藏数
*/
@property (nonatomic, assign) int32_t nUnformattedCollects;
/**
  原始 pv 数
*/
@property (nonatomic, assign) int32_t nUnformattedPv;
/**
  原始视频播放数
*/
@property (nonatomic, assign) int32_t nUnformattedVodPlayed;
@end
NS_ASSUME_NONNULL_END
