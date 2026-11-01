#import "YTIHorizontalListRenderer.h"
#import "YTIVerticalListRenderer.h"

@interface YTIShelfSupportedRenderers : GPBMessage
@property (nonatomic, strong, readwrite) YTIHorizontalListRenderer *horizontalListRenderer;
@property (nonatomic, assign, readwrite) BOOL hasHorizontalListRenderer;
@property (nonatomic, strong, readwrite) YTIVerticalListRenderer *verticalListRenderer;
@property (nonatomic, assign, readwrite) BOOL hasVerticalListRenderer;
@end
