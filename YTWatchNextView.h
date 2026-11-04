#import <UIKit/UIKit.h>

@class YTPlaylistPanelView;

@interface YTWatchNextView : UIView
@property (nonatomic, strong, readwrite) YTPlaylistPanelView *playlistPanelView;
@property (nonatomic, strong, readwrite) UIView *infoCardsView;
@property (nonatomic, strong, readwrite) UIView *adInfoCardsView;
@property (nonatomic, strong, readwrite) UIView *watchNextResultsView;
@property (nonatomic, assign, readonly) BOOL isPlaylistPanelExpanded;
@property (nonatomic, assign, readwrite) CGFloat availableHeightBelowPlayer;

- (void)setPlaylistPanelExpanded:(BOOL)expanded animated:(BOOL)animated;
- (void)showRoundedCorners:(BOOL)showRoundedCorners;
@end
