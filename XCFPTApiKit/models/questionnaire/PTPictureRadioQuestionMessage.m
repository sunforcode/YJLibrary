// apic_version = 0.5.5
#import "PTPictureRadioQuestionMessage.h"
@implementation PTPictureRadioQuestionMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"options" : [PTPictureOptionMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"question_id",@"desc": @"desc",@"options": @"options",};
}
@end
