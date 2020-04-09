#import "PTApiNewageService+Signature.h"
#include <CommonCrypto/CommonDigest.h>
@implementation PTApiNewageService (Signature)
- (NSString *)md5sum:(NSString *)str {
    unsigned char digest[CC_MD5_DIGEST_LENGTH], i;
    CC_MD5([str UTF8String],
           (CC_LONG)[str lengthOfBytesUsingEncoding:NSUTF8StringEncoding],
           digest);
    NSMutableString *ms = [NSMutableString string];
    for (i = 0; i < CC_MD5_DIGEST_LENGTH; i++) {
        [ms appendFormat:@"%02x", (int)(digest[i])];
    }
    return [ms copy] ?: @"";
}
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-method-implementation"
- (NSString *)apiSignature:(NSString *)signature
                    secret:(NSString *)secret {
    return [self md5sum:[signature stringByAppendingString:secret ?: @""]];
}
#pragma clang diagnostic pop
@end
