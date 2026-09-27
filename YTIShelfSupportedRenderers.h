#import "YTIHorizontalListRenderer.h"
#import "YTIVerticalListRenderer.h"

@interface YTIShelfSupportedRenderers : GPBMessage
@property (nonatomic, strong, readwrite) YTIHorizontalListRenderer *horizontalListRenderer;
@property (nonatomic, strong, readwrite) YTIVerticalListRenderer *verticalListRenderer;
@end
