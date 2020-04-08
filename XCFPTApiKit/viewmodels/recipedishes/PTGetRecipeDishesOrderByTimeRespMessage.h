// apic_version = 0.5.5
#import "PTModel.h"
#import "PTDishMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取菜谱下的作品列表响应
*/
@interface PTGetRecipeDishesOrderByTimeRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTDishMessage *> *dishes;
@property (nonatomic, strong) PTCursorMessage *cursor;
/**
  如果传递的作品状态不对且第一次请求，则会返回对应字符串提示
*/
@property (nonatomic, copy) NSString *tip;
@end
NS_ASSUME_NONNULL_END
