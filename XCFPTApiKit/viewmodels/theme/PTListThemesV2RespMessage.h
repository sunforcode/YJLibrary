// apic_version = 0.5.5
#import "PTModel.h"
#import "PTThemeMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTListThemesV2RespMessage : PTModel
@property (nonatomic, strong) NSArray<PTThemeMessage *> *themes;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
