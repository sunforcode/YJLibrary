// apic_version = 0.5.5
#import "PTPagedRecipeQuestionsV2RespMessage.h"
@implementation PTPagedRecipeQuestionsV2RespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"questions" : [PTRecipeQuestionV2Message class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questions": @"questions",@"cursor": @"cursor",@"total": @"total",};
}
@end
