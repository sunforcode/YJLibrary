// apic_version = 0.5.5
#import "PTQuestionnaireQuestionMessage.h"
@implementation PTQuestionnaireQuestionMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"radioQuestion": @"radio_question",@"textQuestion": @"text_question",@"locationQuestion": @"location_question",@"pictureRadioQuestion": @"picture_radio_question",};
}
@end
