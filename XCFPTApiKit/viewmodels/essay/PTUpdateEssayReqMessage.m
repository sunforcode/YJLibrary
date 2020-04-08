// apic_version = 0.5.5
#import "PTUpdateEssayReqMessage.h"
@implementation PTUpdateEssayReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"articleParagraphs": @"article_paragraphs",@"essayId": @"essay_id",};
}
@end
