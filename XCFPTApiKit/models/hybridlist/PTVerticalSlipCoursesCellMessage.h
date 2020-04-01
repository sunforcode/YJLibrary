// apic_version = 0.5.5
#import "PTModel.h"
#import "PTSubtitleButtonMessage.h"
#import "PTRichTextCourseCellMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  竖滑课程列表
*/
@interface PTVerticalSlipCoursesCellMessage : PTModel
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) PTSubtitleButtonMessage *subtitleButton;
/**
  有课程时显示竖滑课程列表，无课程不显示
*/
@property (nonatomic, strong) NSArray<PTRichTextCourseCellMessage *> *richTextCourseCells;
@end
NS_ASSUME_NONNULL_END
