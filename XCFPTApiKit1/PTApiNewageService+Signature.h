#import "PTApiNewageService.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Signature)
/**
 参数签名
 @param signature 需要签名的参数
 @param secret 签名的Key
 @return 签名后的signature
 */
- (NSString *)apiSignature:(NSString *)signature
                    secret:(NSString *)secret;
@end
NS_ASSUME_NONNULL_END
