// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTDependentWelfareViewMessage : PTModel
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *beginTime;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *historyListDesc;
@property (nonatomic, copy) NSString *historyListUrl;
@property (nonatomic, copy) NSString *welfareId;
@end
NS_ASSUME_NONNULL_END
