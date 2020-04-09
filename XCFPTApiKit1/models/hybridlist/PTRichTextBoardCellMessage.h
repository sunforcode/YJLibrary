// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
#import "PTBoardMessage.h"
#import "PTSensorEventMessage.h"
#import "PTSensorEventMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  Board(菜单)
*/
@interface PTRichTextBoardCellMessage : PTModel
@property (nonatomic, copy) NSString *title1st;
@property (nonatomic, copy) NSString *title2nd;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, strong) PTBoardMessage *board;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *impressionSensorEvents;
@property (nonatomic, strong) NSArray<PTSensorEventMessage *> *clickSensorEvents;
@end
NS_ASSUME_NONNULL_END
