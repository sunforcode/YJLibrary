// apic_version = 0.6.1
#import "PTCreateEssayReqMessage.h"
@implementation PTCreateEssayReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"articleParagraphs": @"article_paragraphs",@"title": @"title",@"themeIds": @"theme_ids",};
}
@end
