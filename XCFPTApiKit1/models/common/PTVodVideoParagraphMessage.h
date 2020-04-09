// apic_version = 0.6.1
#import "PTModel.h"
#import "PTVideoDictMessage.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTVodVideoParagraphMessage : PTModel
/**
  此处id是后端数据表视频主键id，只有后端会用到。
*/
@property (nonatomic, copy) NSString *vodVideoId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) PTVideoDictMessage *videoInfo;
@property (nonatomic, strong) PTPictureDictMessage *cover;
/**
  此处id是上传视频后腾讯云返回的视频id，传值请用这个。
*/
@property (nonatomic, copy) NSString *vodId;
@end
NS_ASSUME_NONNULL_END
