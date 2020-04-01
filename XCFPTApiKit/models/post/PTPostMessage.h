// apic_version = 0.5.5
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPostMessage : PTModel
@property (nonatomic, copy) NSString *postId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *upTime;
@property (nonatomic, assign) int32_t visits;
@property (nonatomic, assign) BOOL isUp;
@property (nonatomic, assign) BOOL isTitleDescHidden;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *updateTime;
@property (nonatomic, assign) int32_t nQuestions;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *content;
@end
NS_ASSUME_NONNULL_END
