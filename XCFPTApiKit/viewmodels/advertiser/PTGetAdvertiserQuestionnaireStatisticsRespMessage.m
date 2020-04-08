// apic_version = 0.5.5
#import "PTGetAdvertiserQuestionnaireStatisticsRespMessage.h"
@implementation PTGetAdvertiserQuestionnaireStatisticsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"stats" : [PTQuestionnaireStatsMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"stats": @"stats",};
}
@end
