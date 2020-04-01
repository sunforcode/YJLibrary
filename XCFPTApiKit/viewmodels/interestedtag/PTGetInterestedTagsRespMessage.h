// apic_version = 0.5.5
#import "PTModel.h"
#import "PTInterestedTagMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetInterestedTagsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTInterestedTagMessage *> *interestedTags;
@property (nonatomic, copy) NSString *title1st;
@property (nonatomic, copy) NSString *title2nd;
@property (nonatomic, assign) BOOL hideCloseButton;
@end
NS_ASSUME_NONNULL_END
