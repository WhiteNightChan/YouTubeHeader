#import "YTIElementRendererCompatibilityOptions.h"

@interface YTIElementRenderer : GPBMessage
@property (nonatomic, strong, readwrite) YTIElementRendererCompatibilityOptions *compatibilityOptions;
@property (nonatomic, assign, readwrite) BOOL hasCompatibilityOptions;
@property (nonatomic, readonly) NSData *elementData;
@property (nonatomic, assign, readonly) BOOL hasElementData;
@property (nonatomic, assign, readwrite, setter=yt_setIsRemovedByDismissal:) BOOL yt_isRemovedByDismissal;
@property (nonatomic, copy, readwrite) NSData *trackingParams;
@end
