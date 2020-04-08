// apic_version = 0.5.5
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTHistoricalWelfareViewMessage : PTModel
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *beginTime;
@property (nonatomic, copy) NSString *endTime;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) PTPictureDictMessage *icon;
@property (nonatomic, copy) NSString *welfareId;
@end
NS_ASSUME_NONNULL_END
