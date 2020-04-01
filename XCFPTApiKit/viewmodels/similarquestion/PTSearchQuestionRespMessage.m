// apic_version = 0.5.5
#import "PTSearchQuestionRespMessage.h"
@implementation PTSearchQuestionRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"questions" : [PTSimilarQuestionMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questions": @"questions",@"cursor": @"cursor",};
}
@end
