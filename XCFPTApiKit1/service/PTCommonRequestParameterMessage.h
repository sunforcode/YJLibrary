// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCommonRequestParameterMessage : PTModel
/**
  客户端类型
*/
@property (nonatomic, copy) NSString *origin;
/**
  客户端版本
*/
@property (nonatomic, copy) NSString *version;
/**
  session key
*/
@property (nonatomic, copy) NSString *sk;
/**
  位置码
*/
@property (nonatomic, copy) NSString *locationCode;
/**
  是否支持 webp 图片格式
*/
@property (nonatomic, assign) BOOL webp;
/**
  api 公钥
*/
@property (nonatomic, copy) NSString *apiKey;
/**
  每次都需要不一样
*/
@property (nonatomic, copy) NSString *nonce;
/**
  当前时间毫秒数
*/
@property (nonatomic, copy) NSString *timestamp;
/**
  维度
*/
@property (nonatomic, copy) NSString *geoLat;
/**
  经度
*/
@property (nonatomic, copy) NSString *geoLon;
/**
  精确度
*/
@property (nonatomic, copy) NSString *geoAccu;
@end
NS_ASSUME_NONNULL_END
