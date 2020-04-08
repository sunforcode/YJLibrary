// apic_version = 0.5.5
#import "PTListCommentRespMessage.h"
@implementation PTListCommentRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"comments" : [PTEssayCommentMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"comments": @"comments",@"cursor": @"cursor",@"nComments": @"n_comments",};
}
@end
