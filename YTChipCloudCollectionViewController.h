#import "YTInnerTubeCollectionViewController.h"

@protocol YTChipCloudCollectionViewControllerDelegate;

@interface YTChipCloudCollectionViewController : YTInnerTubeCollectionViewController
@property (nonatomic, weak, readwrite) id <YTChipCloudCollectionViewControllerDelegate> chipCloudCollectionViewControllerDelegate;
- (void)enableFilterChips;
@end
