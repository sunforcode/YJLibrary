// apic_version = 0.5.5
#import "PTErrorCodeMessage.h"
@implementation PTErrorCodeMessage
+ (NSDictionary *)modelCustomPropertyMapper {
    return @{@"message": @[@"msg", @"message"]};
}
- (instancetype)initWithMessage:(NSString *)message
                           code:(PTErrorCodeEnum)code{
    self = [super init];
    if (self) {
        self.message = message;
        self.code =code;
    }
    return self;
}
@end
