// apic_version = 0.5.5
#import "PTModel.h"
#import "PTTextParagraphMessage.h"
#import "PTImageParagraphMessage.h"
#import "PTMicroVideoParagraphMessage.h"
#import "PTVodVideoParagraphMessage.h"
#import "PTIngredientParagraphMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTParagraphMessage : PTModel
@property (nonatomic, strong) PTTextParagraphMessage *textParagraph;
@property (nonatomic, strong) PTImageParagraphMessage *imageParagraph;
@property (nonatomic, strong) PTMicroVideoParagraphMessage *microVideoParagraph;
@property (nonatomic, strong) PTVodVideoParagraphMessage *vodVideoParagraph;
@property (nonatomic, strong) PTIngredientParagraphMessage *ingredientParagraph;
@end
NS_ASSUME_NONNULL_END
