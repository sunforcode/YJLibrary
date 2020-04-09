// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  评论
*/
@interface PTCreateCommentReqMessage : PTModel
@property (nonatomic, copy) NSString *essayId;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) NSArray<NSString *> *atUserIds;
@end
NS_ASSUME_NONNULL_END
