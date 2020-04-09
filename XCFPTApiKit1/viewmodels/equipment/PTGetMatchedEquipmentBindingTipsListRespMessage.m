// apic_version = 0.6.1
#import "PTGetMatchedEquipmentBindingTipsListRespMessage.h"
@implementation PTGetMatchedEquipmentBindingTipsListRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"cells" : [PTMatchedEquipmentBindingTipsCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cells": @"cells",};
}
@end
