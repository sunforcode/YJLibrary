// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  翻页用的游标
*/
@interface PTCursorMessage : PTModel
/**
  下一页
*/
@property (nonatomic, copy) NSString *next;
/**
  上一页
*/
@property (nonatomic, copy) NSString *prev;
/**
  有下一页
*/
@property (nonatomic, assign) BOOL hasNext;
/**
  有上一页
*/
@property (nonatomic, assign) BOOL hasPrev;
@end
NS_ASSUME_NONNULL_END
