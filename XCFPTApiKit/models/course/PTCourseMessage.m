// apic_version = 0.5.5
#import "PTCourseMessage.h"
@implementation PTCourseMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"lessons" : [PTCourseLessonMessage class],@"kinds" : [PTCourseKindMessage class],@"paras" : [PTParagraphMessage class],@"extraImages" : [PTPictureDictMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courseId": @"id",@"name": @"name",@"image": @"image",@"coverMicroVideo": @"cover_micro_video",@"beginTime": @"begin_time",@"coursewareUrl": @"courseware_url",@"isOnSale": @"is_on_sale",@"lecturer": @"lecturer",@"lessons": @"lessons",@"kinds": @"kinds",@"totalSalesVolume": @"total_sales_volume",@"nViews": @"n_views",@"url": @"url",@"durationText": @"duration_text",@"rate": @"rate",@"humanFriendlyRateStr": @"rate_str",@"humanFriendlyNRateStr": @"n_rate_str",@"label": @"label",@"rightsInfoLabel": @"rights_info_label",@"collectedByMe": @"collected_by_me",@"foreword": @"foreword",@"paras": @"paras",@"limit": @"limit",@"length": @"length",@"extraImages": @"extra_images",@"rateInfo": @"rate_info",@"extraInfo": @"extra_info",@"expiredTime": @"expired_time",@"status": @"status",};
}
@end
