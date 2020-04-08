// apic_version = 0.5.5
#import "PTGetInterestedTagsRespMessage.h"
@implementation PTGetInterestedTagsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"interestedTags" : [PTInterestedTagMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"interestedTags": @"interested_tags",@"title1st": @"title_1st",@"title2nd": @"title_2nd",@"hideCloseButton": @"hide_close_button",};
}
@end
