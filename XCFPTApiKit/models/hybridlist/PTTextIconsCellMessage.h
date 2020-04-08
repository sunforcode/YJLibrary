// apic_version = 0.5.5
#import "PTModel.h"
#import "PTTextIconMessage.h"
#import "PTTextIconMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  文字图标合集
*/
@interface PTTextIconsCellMessage : PTModel
@property (nonatomic, strong) NSArray<PTTextIconMessage *> *icons;
@property (nonatomic, strong) PTTextIconMessage *moreIcon;
@end
NS_ASSUME_NONNULL_END
