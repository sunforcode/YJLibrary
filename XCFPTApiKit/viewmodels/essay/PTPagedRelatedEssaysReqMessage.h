// apic_version = 0.5.5
#import "PTModel.h"
#import "PTEssayTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedRelatedEssaysReqMessage : PTModel
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@property (nonatomic, copy) NSString *essayId;
@property (nonatomic, assign) PTEssayTypeEnum essayType;
@end
NS_ASSUME_NONNULL_END
