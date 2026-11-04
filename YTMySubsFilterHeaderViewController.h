#import <UIKit/UIKit.h>

#import "YTResponder.h"

@interface YTMySubsFilterHeaderViewController : UIViewController
@property (nonatomic, assign, readwrite) BOOL useDefaultModelWhenEmpty;
@property (nonatomic, strong, readwrite) NSString *overrideStyleContext;
@property (nonatomic, assign, readwrite) BOOL shouldClearDataOnRefresh;
@property (nonatomic, weak, readonly) id <YTResponder> parentResponder;

- (void)loadElementRenderer:(id)renderer;
@end
