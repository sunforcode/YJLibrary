#import "PTModel.h"
#import <objc/runtime.h>
#if __has_include(<YYModel/YYModel.h>)
#import <YYModel/YYModel.h>
#else
#import "YYModel.h"
#endif
@implementation PTModel
- (void)encodeWithCoder:(NSCoder *)aCoder {
    [self yy_modelEncodeWithCoder:aCoder];
}
- (id)initWithCoder:(NSCoder *)aDecoder {
    self = [super init];
    return [self yy_modelInitWithCoder:aDecoder];
}
- (id)copyWithZone:(NSZone *)zone {
    return [self yy_modelCopy];
}
- (NSUInteger)hash {
    return [self yy_modelHash];
}
- (BOOL)isEqual:(id)object {
    return [self yy_modelIsEqual:object];
}
- (NSString *)description {
    return [self yy_modelDescription];
}
- (BOOL)pt_modelIsEqual:(id)model {
    return [self yy_modelIsEqual:model];
}
+ (nullable instancetype)pt_modelWithJSON:(id)json {
    return [self.class yy_modelWithJSON:json];
}
+ (nullable instancetype)pt_modelWithDictionary:(NSDictionary *)dictionary {
    return [self.class yy_modelWithDictionary:dictionary];
}
- (BOOL)pt_modelSetWithJSON:(id)json {
    return [self yy_modelSetWithJSON:json];
}
- (BOOL)pt_modelSetWithDictionary:(NSDictionary *)dic {
    return [self yy_modelSetWithDictionary:dic];
}
- (nullable id)pt_modelToJSONObject {
    return [self yy_modelToJSONObject];
}
- (nullable NSData *)pt_modelToJSONData {
    return [self yy_modelToJSONData];
}
- (nullable NSString *)pt_modelToJSONString {
    return [self yy_modelToJSONString];
}
@end
@implementation PTModel (Properties)
- (NSArray<NSString *> *)getProperties {
    unsigned int count;
    objc_property_t *properties = class_copyPropertyList([self class], &count);
    NSMutableArray *mArray = [NSMutableArray array];
    for (int i = 0; i < count; i++) {
        objc_property_t property = properties[i];
        const char *cName = property_getName(property);
        NSString *name = [NSString stringWithCString:cName
                                            encoding:NSUTF8StringEncoding];
        [mArray addObject:name];
    }
    free(properties);
    return mArray.copy;
}
@end
@implementation NSDictionary (Json)
+ (NSDictionary *)pt_dictionaryWithJSON:(id)json {
    if (!json || json == (id)kCFNull) return nil;
    NSDictionary *dic = nil;
    NSData *jsonData = nil;
    if ([json isKindOfClass:[NSDictionary class]]) {
        dic = json;
    } else if ([json isKindOfClass:[NSString class]]) {
        jsonData = [(NSString *)json dataUsingEncoding : NSUTF8StringEncoding];
    } else if ([json isKindOfClass:[NSData class]]) {
        jsonData = json;
    }
    if (jsonData) {
        dic = [NSJSONSerialization JSONObjectWithData:jsonData options:kNilOptions error:NULL];
        if (![dic isKindOfClass:[NSDictionary class]]) dic = nil;
    }
    return dic;
}
@end
