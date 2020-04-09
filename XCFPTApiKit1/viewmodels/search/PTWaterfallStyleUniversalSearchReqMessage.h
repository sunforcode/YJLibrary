// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTWaterfallStyleUniversalSearchReqMessage : PTModel
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@property (nonatomic, copy) NSString *q;
@property (nonatomic, copy) NSString *orderBy;
@property (nonatomic, assign) BOOL onlyVideo;
@end
NS_ASSUME_NONNULL_END
