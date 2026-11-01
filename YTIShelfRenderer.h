#import "YTIRenderer.h"
#import "YTIShelfSupportedRenderers.h"

@interface YTIShelfRenderer : GPBMessage
@property (nonatomic, strong, readwrite) YTIRenderer *headerRenderer;
@property (nonatomic, assign, readwrite) BOOL hasHeaderRenderer;
@property (nonatomic, strong, readwrite) YTIRenderer *footerRenderer;
@property (nonatomic, assign, readwrite) BOOL hasFooterRenderer;
@property (nonatomic, strong, readwrite) YTIShelfSupportedRenderers *content;
@end
