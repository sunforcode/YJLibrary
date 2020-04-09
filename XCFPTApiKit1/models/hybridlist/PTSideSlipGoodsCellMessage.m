// apic_version = 0.6.1
#import "PTSideSlipGoodsCellMessage.h"
@implementation PTSideSlipGoodsCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"richTextGoodsCells" : [PTRichTextGoodsCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"title1st": @"title_1st",@"title2nd": @"title_2nd",@"subtitleButton": @"subtitle_button",@"richTextGoodsCells": @"rich_text_goods_cells",};
}
@end
