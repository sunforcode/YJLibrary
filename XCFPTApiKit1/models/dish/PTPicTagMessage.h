// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPicTagMessage : PTModel
@property (nonatomic, assign) double x;
@property (nonatomic, assign) double y;
@property (nonatomic, copy) NSString *tagName;
@property (nonatomic, assign) int32_t tagId;
@property (nonatomic, copy) NSString *url;
/**
  客户端那里只有 'l' 和 'r' 两种值
*/
@property (nonatomic, copy) NSString *direction;
@end
NS_ASSUME_NONNULL_END
