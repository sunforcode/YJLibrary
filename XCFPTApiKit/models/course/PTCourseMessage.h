// apic_version = 0.5.5
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTVideoDictMessage.h"
#import "PTCourseLecturerMessage.h"
#import "PTCourseLessonMessage.h"
#import "PTCourseKindMessage.h"
#import "PTCourseLabelMessage.h"
#import "PTRightInfoLabelMessage.h"
#import "PTParagraphMessage.h"
#import "PTPictureDictMessage.h"
#import "PTCourseRateDisplayInfoMessage.h"
#import "PTExtraInfoMessage.h"
#import "PTLiveStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCourseMessage : PTModel
@property (nonatomic, copy) NSString *courseId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, strong) PTVideoDictMessage *coverMicroVideo;
/**
  api 上时间是datetime, 但是这里还不支持，所以先给string类型好了，暂时这个字段客户端也不会用到
*/
@property (nonatomic, copy) NSString *beginTime;
@property (nonatomic, copy) NSString *coursewareUrl;
@property (nonatomic, assign) BOOL isOnSale;
@property (nonatomic, strong) PTCourseLecturerMessage *lecturer;
@property (nonatomic, strong) NSArray<PTCourseLessonMessage *> *lessons;
@property (nonatomic, strong) NSArray<PTCourseKindMessage *> *kinds;
@property (nonatomic, assign) int32_t totalSalesVolume;
@property (nonatomic, assign) int32_t nViews;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *durationText;
@property (nonatomic, assign) double rate;
@property (nonatomic, copy) NSString *humanFriendlyRateStr;
@property (nonatomic, copy) NSString *humanFriendlyNRateStr;
@property (nonatomic, strong) PTCourseLabelMessage *label;
@property (nonatomic, strong) PTRightInfoLabelMessage *rightsInfoLabel;
@property (nonatomic, assign) BOOL collectedByMe;
@property (nonatomic, copy) NSString *foreword;
@property (nonatomic, strong) NSArray<PTParagraphMessage *> *paras;
/**
  限购
*/
@property (nonatomic, assign) int32_t limit;
/**
  课程总时长, 单位秒
*/
@property (nonatomic, assign) int32_t length;
@property (nonatomic, strong) NSArray<PTPictureDictMessage *> *extraImages;
@property (nonatomic, strong) PTCourseRateDisplayInfoMessage *rateInfo;
@property (nonatomic, strong) PTExtraInfoMessage *extraInfo;
@property (nonatomic, copy) NSString *expiredTime;
@property (nonatomic, assign) PTLiveStatusEnum status;
@end
NS_ASSUME_NONNULL_END
