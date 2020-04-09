// apic_version = 0.6.1
#import "PTModel.h"
#import "PTDishPicTagMessage.h"
#import "PTVodVideoParagraphMessage.h"
#import "PTOauthProviderEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  更新作品
*/
@interface PTUpdateDishReqMessage : PTModel
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *dishId;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, strong) NSArray<NSString *> *idents;
@property (nonatomic, strong) NSArray<PTDishPicTagMessage *> *tagsInPic;
@property (nonatomic, strong) PTVodVideoParagraphMessage *videoInfo;
@property (nonatomic, assign) PTOauthProviderEnum sync;
@end
NS_ASSUME_NONNULL_END
