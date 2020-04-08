// apic_version = 0.5.5
#import "PTModel.h"
#import "PTADInfoMessage.h"
#import "PTADTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTADMessage : PTModel
@property (nonatomic, copy) NSString *adId;
/**
  投放开始时间
*/
@property (nonatomic, copy) NSString *startTime;
/**
  投放结束时间
*/
@property (nonatomic, copy) NSString *endTime;
/**
  权重
*/
@property (nonatomic, assign) int32_t weight;
/**
  物料id
*/
@property (nonatomic, assign) int32_t materialId;
/**
  曝光打点
*/
@property (nonatomic, strong) NSArray<NSString *> *exposeTrackingUrls;
/**
  点击打点
*/
@property (nonatomic, strong) NSArray<NSString *> *clickTrackingUrls;
/**
  广告信息
*/
@property (nonatomic, strong) PTADInfoMessage *adInfo;
@property (nonatomic, assign) PTADTypeEnum adType;
@end
NS_ASSUME_NONNULL_END
