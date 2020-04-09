// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTUserMessage.h"
#import "PTExtraMessage.h"
#import "PTPictureDictMessage.h"
#import "PTTargetInfoMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTWaterfallRecommendationMessage : PTModel
@property (nonatomic, copy) NSString *identification;
@property (nonatomic, copy) NSString *title1st;
@property (nonatomic, copy) NSString *title2nd;
@property (nonatomic, copy) NSString *title3rd;
@property (nonatomic, copy) NSString *title4th;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, assign) int32_t width;
@property (nonatomic, assign) int32_t height;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, strong) PTExtraMessage *extra;
@property (nonatomic, strong) NSArray<PTPictureDictMessage *> *extraImages;
@property (nonatomic, strong) PTTargetInfoMessage *targetInfo;
@end
NS_ASSUME_NONNULL_END
