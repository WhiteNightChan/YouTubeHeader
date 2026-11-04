#import "YTCollectionViewController.h"
#import "YTPageStyling.h"

@interface YTInnerTubeCollectionViewController : YTCollectionViewController <YTPageStyling>
@property (nonatomic, readonly) NSMutableArray *sectionRenderers;

- (void)loadWithModel:(id)model;
- (void)displaySections;
- (void)displaySectionsWithReloadingSectionControllerByRenderer:(id)renderer;
- (void)addSectionsFromArray:(NSArray *)array;
- (id)insertContents:(id)contents
          byPosition:(int)position
           inSection:(id)section
               error:(id *)error;
@end
