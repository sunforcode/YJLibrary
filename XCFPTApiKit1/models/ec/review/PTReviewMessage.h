// apic_version = 0.6.1
#import "PTModel.h"
#import "PTReviewCommodityMessage.h"
#import "PTPictureDictMessage.h"
#import "PTPictureDictMessage.h"
#import "PTUserMessage.h"
#import "PTPictureDictMessage.h"
#import "PTPictureDictMessage.h"
#import "PTCommentMessage.h"
#import "PTReviewDiggUserMessage.h"
#import "PTGoodsTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTReviewMessage : PTModel
@property (nonatomic, copy) NSString *reviewId;
@property (nonatomic, copy) NSString *goodsId;
@property (nonatomic, strong) PTReviewCommodityMessage *commodity;
@property (nonatomic, copy) NSString *review;
@property (nonatomic, copy) NSString *additionalReview;
@property (nonatomic, copy) NSString *additionalReviewCreateTime;
@property (nonatomic, strong) NSArray<PTPictureDictMessage *> *additionalReviewPhotos DEPRECATED_ATTRIBUTE;
@property (nonatomic, strong) NSArray<PTPictureDictMessage *> *additionalReviewImages;
@property (nonatomic, copy) NSString *shopReply;
/**
  评分
*/
@property (nonatomic, assign) int32_t rate;
@property (nonatomic, assign) BOOL isEssential;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *humanFriendlyCreateTime;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) NSArray<PTPictureDictMessage *> *photos DEPRECATED_ATTRIBUTE;
@property (nonatomic, strong) NSArray<PTPictureDictMessage *> *images;
@property (nonatomic, assign) BOOL isPublished;
@property (nonatomic, strong) NSArray<PTCommentMessage *> *latestComments;
@property (nonatomic, assign) int32_t ncomments;
@property (nonatomic, assign) BOOL diggedByMe;
@property (nonatomic, assign) int32_t ndiggs;
@property (nonatomic, strong) PTReviewDiggUserMessage *diggUsers;
@property (nonatomic, assign) PTGoodsTypeEnum type;
@end
NS_ASSUME_NONNULL_END
