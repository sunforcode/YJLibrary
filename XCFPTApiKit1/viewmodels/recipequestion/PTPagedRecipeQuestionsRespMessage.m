// apic_version = 0.6.1
#import "PTPagedRecipeQuestionsRespMessage.h"
@implementation PTPagedRecipeQuestionsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"questions" : [PTRecipeQuestionMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questions": @"questions",@"cursor": @"cursor",@"total": @"total",};
}
@end
