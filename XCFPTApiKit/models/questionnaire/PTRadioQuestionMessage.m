// apic_version = 0.5.5
#import "PTRadioQuestionMessage.h"
@implementation PTRadioQuestionMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"options" : [PTOptionMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"question_id",@"desc": @"desc",@"options": @"options",};
}
@end
