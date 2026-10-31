#import "YTIAdLoggingDataContainer.h"
#import "YTIMenuItemSupportedRenderersElementRendererCompatibilityOptionsExtension.h"

@interface YTIElementRendererCompatibilityOptions : GPBMessage
@property (nonatomic, strong, readwrite) YTIAdLoggingDataContainer *adLoggingData;
@property (nonatomic, assign, readwrite) BOOL hasAdLoggingData;
@property (nonatomic, assign, readwrite) BOOL useVideoCellControllerOnIos;
@property (nonatomic, assign, readwrite) BOOL useBackstageCellControllerOnIos;
- (YTIMenuItemSupportedRenderersElementRendererCompatibilityOptionsExtension *)elementsRendererMenuItemExtension;
@end
