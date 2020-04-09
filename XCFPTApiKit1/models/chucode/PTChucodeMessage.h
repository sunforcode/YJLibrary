// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTChucodeMessage : PTModel
@property (nonatomic, copy) NSString *chucodeId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *promoteUrl;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *text;
/**
  创建时间
*/
@property (nonatomic, copy) NSString *createTime;
/**
  口令有效起始时间
*/
@property (nonatomic, copy) NSString *startTime;
/**
  口令有效结束时间
*/
@property (nonatomic, copy) NSString *endTime;
/**
  显示价格
*/
@property (nonatomic, assign) double price;
@end
NS_ASSUME_NONNULL_END
