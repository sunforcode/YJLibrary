#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
@interface PTModel : NSObject <NSCopying, NSCoding>
- (NSUInteger)hash;
- (BOOL)isEqual:(id)object;
+ (nullable instancetype)pt_modelWithJSON:(id)json;
+ (nullable instancetype)pt_modelWithDictionary:(NSDictionary *)dictionary;
- (BOOL)pt_modelSetWithJSON:(id)json;
- (BOOL)pt_modelSetWithDictionary:(NSDictionary *)dic;
- (nullable id)pt_modelToJSONObject;
- (nullable NSData *)pt_modelToJSONData;
- (nullable NSString *)pt_modelToJSONString;
- (BOOL)pt_modelIsEqual:(id)model;
@end
@interface PTModel (Properties)
/**
 返回当前类的所有属性
 @return 数组
 */
- (NSArray<NSString *> *)getProperties;
@end
@interface NSDictionary (Json)
+ (NSDictionary *)pt_dictionaryWithJSON:(id)json;
@end
NS_ASSUME_NONNULL_END
