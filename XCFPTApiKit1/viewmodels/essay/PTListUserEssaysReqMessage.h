// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  个人主页图片品类的列表
*/
@interface PTListUserEssaysReqMessage : PTModel
@property (nonatomic, copy) NSString *userId;
/**
  必填
*/
@property (nonatomic, copy) NSString *cursor;
/**
  必填
*/
@property (nonatomic, assign) int32_t size;
@end
NS_ASSUME_NONNULL_END
