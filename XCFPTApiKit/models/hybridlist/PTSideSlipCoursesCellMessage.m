// apic_version = 0.5.5
#import "PTSideSlipCoursesCellMessage.h"
@implementation PTSideSlipCoursesCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"richTextCourseCells" : [PTRichTextCourseCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"title": @"title",@"subtitleButton": @"subtitle_button",@"richTextCourseCells": @"rich_text_course_cells",};
}
@end
