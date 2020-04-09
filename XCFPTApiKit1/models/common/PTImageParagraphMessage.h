// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTImageParagraphMessage : PTModel
@property (nonatomic, assign) int32_t height;
@property (nonatomic, assign) int32_t width;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) PTPictureDictMessage *pictureInfo;
@end
NS_ASSUME_NONNULL_END
