#import "PTApiNewageService.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService()
/**
 添加代理
 @param delegate 目标
 */
- (void)addDelegate:(id<PTApiNewageDelegate>)delegate;
@end
NS_ASSUME_NONNULL_END
