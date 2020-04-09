// apic_version = 0.6.1
#import "PTModel.h"
#import "PTRichTextRecipeCellMessage.h"
#import "PTRichTextDishCellMessage.h"
#import "PTPureRichTextCellMessage.h"
#import "PTCardDishCellMessage.h"
#import "PTLineRecipeCellMessage.h"
#import "PTLineCourseCellMessage.h"
#import "PTLineRichTextCellMessage.h"
#import "PTUniversalSearchUserCardCellMessage.h"
#import "PTLineUserCellMessage.h"
#import "PTSideSlipBannersCellMessage.h"
#import "PTPictureIconsCellMessage.h"
#import "PTSideSlipCoursesCellMessage.h"
#import "PTVerticalSlipCoursesCellMessage.h"
#import "PTRichTextCourseCellMessage.h"
#import "PTVerticalSlipBannersCellMessage.h"
#import "PTTextIconsCellMessage.h"
#import "PTSideSlipGoodsCellMessage.h"
#import "PTRichTextGoodsCellMessage.h"
#import "PTRichTextBoardCellMessage.h"
#import "PTPlaceholderAdCellMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTHybridListCellMessage : PTModel
@property (nonatomic, strong) PTRichTextRecipeCellMessage *richTextRecipeCell;
@property (nonatomic, strong) PTRichTextDishCellMessage *richTextDishCell;
@property (nonatomic, strong) PTPureRichTextCellMessage *pureRichTextCell;
@property (nonatomic, strong) PTCardDishCellMessage *cardDishCell;
@property (nonatomic, strong) PTLineRecipeCellMessage *lineRecipeCell;
@property (nonatomic, strong) PTLineCourseCellMessage *lineCourseCell;
@property (nonatomic, strong) PTLineRichTextCellMessage *lineRichTextCell;
@property (nonatomic, strong) PTUniversalSearchUserCardCellMessage *universalSearchUserCardCell;
@property (nonatomic, strong) PTLineUserCellMessage *lineUserCell;
@property (nonatomic, strong) PTSideSlipBannersCellMessage *sideSlipBannersCell;
@property (nonatomic, strong) PTPictureIconsCellMessage *pictureIconsCell;
@property (nonatomic, strong) PTSideSlipCoursesCellMessage *sideSlipCoursesCell;
@property (nonatomic, strong) PTVerticalSlipCoursesCellMessage *verticalSlipCoursesCell;
@property (nonatomic, strong) PTRichTextCourseCellMessage *richTextCourseCell;
@property (nonatomic, strong) PTVerticalSlipBannersCellMessage *verticalSlipBannersCell;
@property (nonatomic, strong) PTTextIconsCellMessage *textIconsCell;
@property (nonatomic, strong) PTSideSlipGoodsCellMessage *sideSlipGoodsCell;
@property (nonatomic, strong) PTRichTextGoodsCellMessage *richTextGoodsCell;
@property (nonatomic, strong) PTRichTextBoardCellMessage *richTextBoardCell;
@property (nonatomic, strong) PTPlaceholderAdCellMessage *placeholderAdCell;
@end
NS_ASSUME_NONNULL_END
