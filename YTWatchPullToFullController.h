#import "YTWatchPlayerViewLayoutSource.h"

@protocol YTWatchPlayerViewLayoutModifierDelegate;

@interface YTWatchPullToFullController : NSObject
@property (nonatomic, weak, readonly) id <YTWatchPlayerViewLayoutSource> playerViewSource;
@property (nonatomic, weak, readonly) id <YTWatchPlayerViewLayoutModifierDelegate> playerViewModifierDelegate;

- (BOOL)shouldRecognizeOverscrollEventsFromWatchOverscrollController:(id)watchOverscrollController;
@end