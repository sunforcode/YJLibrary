// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTPictureDictMessage.h"
#import "PTPictureDictMessage.h"
#import "PTDishSourceMessage.h"
#import "PTUserMessage.h"
#import "PTCommentMessage.h"
#import "PTPictureDictMessage.h"
#import "PTDishPicTagMessage.h"
#import "PTVodVideoParagraphMessage.h"
#import "PTEventMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTDishMessage : PTModel
@property (nonatomic, copy) NSString *dishId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *humanFriendlyCreateTime;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *photo DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *ident DEPRECATED_ATTRIBUTE;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *thumbnail DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *thumbnail160 DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *thumbnail280 DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *recipeId;
@property (nonatomic, assign) BOOL isOrphan;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) BOOL diggedByMe;
@property (nonatomic, assign) int32_t nPics;
@property (nonatomic, strong) PTPictureDictMessage *mainPic;
@property (nonatomic, strong) PTDishSourceMessage *source;
@property (nonatomic, assign) int32_t nDiggs;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, strong) NSArray<PTUserMessage *> *atUsers;
@property (nonatomic, assign) int32_t nComments;
@property (nonatomic, strong) NSArray<PTCommentMessage *> *latestComments;
@property (nonatomic, strong) NSArray<PTPictureDictMessage *> *extraImages;
@property (nonatomic, strong) NSArray<PTDishPicTagMessage *> *tagsInPic;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) PTVodVideoParagraphMessage *vodVideo;
@property (nonatomic, strong) NSArray<PTEventMessage *> *events;
@end
NS_ASSUME_NONNULL_END
