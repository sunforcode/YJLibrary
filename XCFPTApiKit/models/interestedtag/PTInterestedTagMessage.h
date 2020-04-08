// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTInterestedTagMessage : PTModel
/**
  tag_id
*/
@property (nonatomic, copy) NSString *tagId;
/**
  名称
*/
@property (nonatomic, copy) NSString *name;
/**
  tag 颜色 （RGB）
*/
@property (nonatomic, copy) NSString *color;
@end
NS_ASSUME_NONNULL_END
