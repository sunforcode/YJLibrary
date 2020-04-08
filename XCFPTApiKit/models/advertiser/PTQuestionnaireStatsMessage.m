// apic_version = 0.5.5
#import "PTQuestionnaireStatsMessage.h"
@implementation PTQuestionnaireStatsMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"optionStatsList" : [PTOptionStatsListMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionnaireId": @"questionnaire_id",@"questionId": @"question_id",@"questionDesc": @"question_desc",@"optionStatsList": @"option_stats_list",};
}
@end
