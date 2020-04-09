// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTWaterfallStyleUniversalSearchKeywordsRespMessage : PTModel
@property (nonatomic, strong) NSArray<NSString *> *keywords;
/**
  该字段标识是否在实验中
 如果在实验内，值为 true，客户端搜索结果样式默认为瀑布流样式，keywords 内的关键词是老样式
 如果不在实验内，值为 false，客户端搜索结果样式为老样式
*/
@property (nonatomic, assign) BOOL inExperiment;
/**
  金名单
*/
@property (nonatomic, strong) NSArray<NSString *> *goldenKeywords;
@end
NS_ASSUME_NONNULL_END
