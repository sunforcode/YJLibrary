// apic_version = 0.6.1
#import "PTGetAdvertiserQuestionnaireStatisticsRespMessage.h"
@implementation PTGetAdvertiserQuestionnaireStatisticsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"stats" : [PTQuestionnaireStatsMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"stats": @"stats",};
}
@end
