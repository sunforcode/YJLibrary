// apic_version = 0.5.5
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCourseLecturerMessage : PTModel
@property (nonatomic, copy) NSString *lecturerId;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) PTUserMessage *user;
@end
NS_ASSUME_NONNULL_END
