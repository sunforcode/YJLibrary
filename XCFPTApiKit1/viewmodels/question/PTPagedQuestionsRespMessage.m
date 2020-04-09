// apic_version = 0.6.1
#import "PTPagedQuestionsRespMessage.h"
@implementation PTPagedQuestionsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"questions" : [PTQuestionMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questions": @"questions",@"cursor": @"cursor",@"total": @"total",};
}
@end
