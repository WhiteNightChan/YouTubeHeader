#import <Foundation/NSObject.h>

@interface YTRelatedChipItemSectionControllerFactory : NSObject
- (id)customFeedControllerForViewModel:(id)viewModel
                            dataSource:(id)dataSource
                     sectionController:(id)sectionController;
- (id)customHeaderForRenderer:(id)renderer
               feedController:(id)feedController
            sectionController:(id)sectionController;
- (id)getChipCloud:(id)arg;
@end
