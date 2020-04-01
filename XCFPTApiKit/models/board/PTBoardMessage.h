// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTBoardMessage : PTModel
@property (nonatomic, copy) NSString *boardId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *updateTime;
@property (nonatomic, assign) int32_t status;
@property (nonatomic, copy) NSString *statusText;
@property (nonatomic, assign) int32_t nCollects;
@property (nonatomic, assign) int32_t nRecipes;
@property (nonatomic, strong) NSArray<PTPictureDictMessage *> *images;
@end
NS_ASSUME_NONNULL_END
