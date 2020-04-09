// apic_version = 0.6.1
#import "PTVerticalSlipCoursesCellMessage.h"
@implementation PTVerticalSlipCoursesCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"richTextCourseCells" : [PTRichTextCourseCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"title": @"title",@"subtitleButton": @"subtitle_button",@"richTextCourseCells": @"rich_text_course_cells",};
}
@end
