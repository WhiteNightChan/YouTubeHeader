#import "YTMultiSizeViewController.h"
#import "YTPlayerViewController.h"
#import "YTWatchPullToFullController.h"
#import "YTWatchPlayerViewLayoutSource.h"

@interface YTWatchViewController : YTMultiSizeViewController <YTWatchPlayerViewLayoutSource>
@property (nonatomic, weak, readwrite) YTPlayerViewController *playerViewController;
@property (nonatomic, strong, readwrite) YTWatchPullToFullController *pullToFullController;

- (NSUInteger)preferredFullscreenOrientations;
- (NSUInteger)allowedFullScreenOrientations;
@end
