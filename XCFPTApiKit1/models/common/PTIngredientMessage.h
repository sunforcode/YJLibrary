// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  用料
*/
@interface PTIngredientMessage : PTModel
/**
  类似 "鸡蛋" "盐"
*/
@property (nonatomic, copy) NSString *name;
/**
  类似 "一个" "适量"
*/
@property (nonatomic, copy) NSString *amount;
/**
  始终是 "M"
*/
@property (nonatomic, copy) NSString *cat DEPRECATED_ATTRIBUTE;
@end
NS_ASSUME_NONNULL_END
