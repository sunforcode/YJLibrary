// apic_version = 0.5.5
#import "PTModel.h"
#import "PTClassroomTabMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetClassroomTabsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTClassroomTabMessage *> *tabs;
@end
NS_ASSUME_NONNULL_END
