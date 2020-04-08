// apic_version = 0.5.5
#import "PTModel.h"
#import "PTVideoDictMessage.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTMicroVideoParagraphMessage : PTModel
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) PTVideoDictMessage *videoInfo;
@property (nonatomic, strong) PTPictureDictMessage *image;
@end
NS_ASSUME_NONNULL_END
