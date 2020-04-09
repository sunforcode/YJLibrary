// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTUniversalSearchV3ReqMessage : PTModel
@property (nonatomic, copy) NSString *q;
@property (nonatomic, assign) int32_t size;
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t searchType;
@property (nonatomic, copy) NSString *orderBy;
@property (nonatomic, copy) NSString *authorId;
@property (nonatomic, assign) BOOL onlyFollowed;
@property (nonatomic, assign) BOOL onlyVideo;
@property (nonatomic, copy) NSString *ifa;
@property (nonatomic, copy) NSString *gpid;
@property (nonatomic, copy) NSString *iem;
@property (nonatomic, copy) NSString *o1;
@end
NS_ASSUME_NONNULL_END
